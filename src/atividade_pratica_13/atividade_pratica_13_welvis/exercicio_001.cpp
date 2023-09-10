/*
Exercício 1:
    Uma empresa de ônibus faz diariamente 5 viagens de ida e 5 viagens de volta entre
    as cidades do Rio de Janeiro e São Paulo. Cada ônibus tem 40 assentos para serem
    preenchidos por passageiros. A empresa costuma vender as passagens
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
        5. Qual a média de idade dos passageiros.

*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

// Struct para armazenar informações do passageiro
struct Passageiro {
    int numeroAssento;
    string dataHora;
    string CPF;
    string nome;
    int idade;
};

// Função para calcular o total arrecadado para uma determinada viagem
double calcularTotalArrecadado(const vector<Passageiro>& passageiros) {
    return passageiros.size() * 80.0;
}

// Função para calcular o total arrecadado em um determinado mês
double calcularTotalArrecadadoNoMes(const vector<Passageiro>& passageiros, int mes) {
    double total = 0.0;
    for (const Passageiro& passageiro : passageiros) {
        // Supondo que a dataHora esteja no formato "AAAA-MM-DD HH:MM:SS"
        int mesPassageiro = stoi(passageiro.dataHora.substr(5, 2));
        if (mesPassageiro == mes) {
            total += 80.0;
        }
    }
    return total;
}

// Função para encontrar o passageiro de uma poltrona P de uma determinada viagem
string encontrarNomePassageiro(const vector<Passageiro>& passageiros, int numeroAssento) {
    for (const Passageiro& passageiro : passageiros) {
        if (passageiro.numeroAssento == numeroAssento) {
            return passageiro.nome;
        }
    }
    return "Poltrona vazia";
}

// Função para encontrar o horário de viagem mais rentável
string encontrarHorarioMaisRentavel1(const vector<Passageiro>& passageiros) {
    // Supondo que as viagens ocorram em horários diferentes
    vector<int> contagemHorarios(5, 0);

    for (const Passageiro& passageiro : passageiros) {
        // Supondo que a hora esteja na posição 11 e 12 do formato da dataHora
        int horaViagem = stoi(passageiro.dataHora.substr(11, 2));
        contagemHorarios[horaViagem]++;
    }

    int horarioMaisRentavel = 0;
    int passageirosNoHorarioMaisRentavel = contagemHorarios[0];
    for (int i = 1; i < 5; ++i) {
        if (contagemHorarios[i] > passageirosNoHorarioMaisRentavel) {
            horarioMaisRentavel = i;
            passageirosNoHorarioMaisRentavel = contagemHorarios[i];
        }
    }

    // Supondo que os horários sejam "08:00", "10:00", "12:00", "14:00" e "16:00"
    string horario = "0" + to_string(8 + 2 * horarioMaisRentavel) + ":00";
    return horario;
}


// Função para determinar o horário com mais passageiros
string encontrarHorarioMaisRentavel(const vector<Passageiro>& passageiros) {
    map<string, int> passageirosPorHorario;

    for (const Passageiro& passageiro : passageiros) {
        // Supondo que a hora esteja na posição 11 e 12 do formato da dataHora
        string horario = passageiro.dataHora.substr(11, 2);
        passageirosPorHorario[horario]++;
    }

    // Encontrar o horário com mais passageiros
    string horarioComMaisPassageiros;
    int maiorNumeroPassageiros = 0;

    for (const auto& pair : passageirosPorHorario) {
        if (pair.second > maiorNumeroPassageiros) {
            horarioComMaisPassageiros = pair.first;
            maiorNumeroPassageiros = pair.second;
        }
    }

    return horarioComMaisPassageiros;
}


// Função para calcular a média de idade dos passageiros
double calcularMediaIdade(const vector<Passageiro>& passageiros) {
    int totalIdade = 0;
    for (const Passageiro& passageiro : passageiros) {
        totalIdade += passageiro.idade;
    }
    if (!passageiros.empty()) {
        return static_cast<double>(totalIdade) / passageiros.size();
    } else {
        return 0.0;
    }
}

int main() {
    vector<Passageiro> passageiros;

    // Simule a venda de passagens (você pode adicionar mais dados de passageiros)
    Passageiro passageiro1 = {1, "2023-09-01 08:00:00", "12345678901", "Joao", 30};
    Passageiro passageiro2 = {2, "2023-09-01 10:00:00", "23456789012", "Maria", 25};
    Passageiro passageiro3 = {3, "2023-09-01 10:00:00", "23456789756", "Pedro", 22};
    passageiros.push_back(passageiro1);
    passageiros.push_back(passageiro2);
    passageiros.push_back(passageiro3);

    // 1. Qual o total arrecadado para uma determinada viagem
    double totalViagem = calcularTotalArrecadado(passageiros);
    cout << "Total arrecadado para a viagem: R$" << totalViagem << endl;

    // 2. Qual o total arrecadado em um determinado mês (por exemplo, setembro)
    double totalSetembro = calcularTotalArrecadadoNoMes(passageiros, 9);
    cout << "Total arrecadado em setembro: R$" << totalSetembro << endl;

    // 3. Qual o nome do passageiro de uma determinada poltrona P de uma determinada viagem
    int poltrona = 1;
    string nomePoltrona = encontrarNomePassageiro(passageiros, poltrona);
    cout << "Nome do passageiro da poltrona " << poltrona << ": " << nomePoltrona << endl;

    // 4. Qual o horário de viagem mais rentável
    string horarioRentavel = encontrarHorarioMaisRentavel(passageiros);
    cout << "Horario de viagem mais rentavel: " << horarioRentavel << endl;

    // 5. Qual a média de idade dos passageiros
    double mediaIdade = calcularMediaIdade(passageiros);
    cout << "Media de idade dos passageiros: " << fixed << setprecision(0) << mediaIdade << " anos" << endl;

    return 0;
}
