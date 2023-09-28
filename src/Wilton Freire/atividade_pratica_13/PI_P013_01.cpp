/*
Uma empresa de ônibus faz diariamente 5 viagens de ida e 5 viagens de volta entre
as cidades do Rio de Janeiro e São Paulo. Cada ônibus tem 40 assentos para serem
preenchidos por Passageiros. A empresa costuma vender as passagens
antecipadamente, e para cada passagem vendida é anotado o número do assento, a
data e hora, o CPF, o nome e a idade do passageiro. As passagens são vendidas por
80 reais cada.
Faça um programa para gerenciar a venda de passagens de ônibus. O programa deve
possibilitar obter as seguintes informações:
1. Qual o total arrecadado para uma determinada viagem.
2. Qual o total arrecadado em um determinado mês.
3. Qual o nome do passageiro de uma determinada poltrona P de uma
determinada viagem.
4. Qual o horário de viagem mais rentável.
5. Qual a média de idade dos Passageiros
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Dados de uma passagem
struct Passagem
{
    int assento;
    string dataHora;
    string cpf;
    string nome;
    int idade;
};

// Total arrecadado de uma determinada viagem
double calcularTotalViagem(const vector<Passagem>& passagens, int viagem) {
    double total = 0;
    for (const auto& passagem : passagens) {
        if (passagem.assento <= 40 && passagem.assento > 0 && passagem.dataHora == "ida" + to_string(viagem))
        {
            total += 80;
        }
    }
    return total;
}

// Total arrecadado em um determinado mês
double calcularTotalMes(const vector<Passagem>& passagens, int mes) {
    double total = 0;
    for (const auto& passagem : passagens) {
        if (stoi(passagem.dataHora.substr(3, 2)) == mes) {
            total += 80;
        }
    }
    return total;
}

// Nome do passageiro de uma determinada poltrona de uma viagem
string obterNomePassageiro(const vector<Passagem>& passagens, int viagem, int poltrona) {
    for (const auto& passagem : passagens) {
        if (passagem.assento == poltrona && passagem.dataHora == "ida" + to_string(viagem)) {
            return passagem.nome;
        }
    }
    return "";
}

// Horário de viagem mais rentável
string obterHorarioMaisRentavel(const vector<Passagem>& passagens) {
    int frequencia[5] = {0};

    for (const auto& passagem : passagens) {
        string viagem = passagem.dataHora.substr(3);
        frequencia[stoi(viagem) - 1]++;
    }

    int maxFrequencia = 0;
    int horarioMaisRentavel = 0;

    for (int i = 0; i < 5; i++) {
        if (frequencia[i] > maxFrequencia) {
            maxFrequencia = frequencia[i];
            horarioMaisRentavel = i + 1;
        }
    }

    return "ida" + to_string(horarioMaisRentavel);
}

// Calcular a média de idade dos Passageiros
double calcularMediaIdade(const vector<Passagem>& passagens) {
    int totalIdades = 0;
    int numPassageiros = 0;

    for (const auto& passagem : passagens) {
        totalIdades += passagem.idade;
        numPassageiros++;
    }

    return static_cast<double>(totalIdades) / numPassageiros;
}

int main() 
{
    vector<Passagem> passagens;

    // Exemplo de vendas de passagens
    Passagem passagem1 {1, "ida1", "12345678901", "João", 30};
    passagens.push_back(passagem1);
    Passagem passagem2 {2, "ida1", "98765432101", "Maria", 25};
    passagens.push_back(passagem2);
    Passagem passagem3 {3, "ida1", "56789012301", "Pedro", 40};
    passagens.push_back(passagem3);
    Passagem passagem4 {1, "volta1", "12345678901", "João", 30};
    passagens.push_back(passagem4);
    Passagem passagem5 {2, "volta1", "98765432101", "Maria", 25};
    passagens.push_back(passagem5);

    // Exemplo de utilização das funções
    cout << "Total arrecadado para a viagem 1: R$ " << calcularTotalViagem(passagens, 1) << endl;
    cout << "Total arrecadado no mês 1: R$ " << calcularTotalMes(passagens, 1) << endl;
    cout << "Nome do passageiro da poltrona 2 da viagem 1: " << obterNomePassageiro(passagens, 1, 2) << endl;
    cout << "Horário de viagem mais rentável: " << obterHorarioMaisRentavel(passagens) << endl;
    cout << "Média de idade dos passageiros: " << calcularMediaIdade(passagens) << endl;
    cout << "\n";

    return 0;
}