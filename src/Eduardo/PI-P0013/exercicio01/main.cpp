#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

struct Passageiro {
    string nome;
    int idade;
    int poltrona;
};

double calcularTotalArrecadado(int numPassagens) {
    double valorPassagem = 80.0;  // Valor de cada passagem
    return numPassagens * valorPassagem;
}

double calcularTotalArrecadadoNoMes(vector<int> viagens) {
    double totalArrecadado = 0.0;
    for (int numPassagens : viagens) {
        totalArrecadado += calcularTotalArrecadado(numPassagens);
    }
    return totalArrecadado;
}

string obterNomePassageiro(vector<Passageiro> passageiros, int poltrona) {
    for (const Passageiro& passageiro : passageiros) {
        if (passageiro.poltrona == poltrona) {
            return passageiro.nome;
        }
    }
    return "Poltrona nao encontrada";
}

double calcularMediaIdade(vector<Passageiro> passageiros) {
    if (passageiros.empty()) return 0.0;

    int somaIdades = 0;
    for (const Passageiro& passageiro : passageiros) {
        somaIdades += passageiro.idade;
    }
    return static_cast<double>(somaIdades) / passageiros.size();
}

int main() {
    srand(time(0));  // Inicializa a semente para gerar números aleatórios

    // Simulando dados de vendas para cada viagem (número de passagens vendidas)
    vector<int> vendasPorViagem = {30, 25, 35, 40, 20};  // Números de passagens vendidas para cada viagem

    // Simulando dados de passageiros (nome, idade e poltrona) para cada viagem
    vector<vector<Passageiro>> passageirosPorViagem;
    for (int i = 0; i < 5; i++) {
        vector<Passageiro> passageiros;
        for (int j = 0; j < vendasPorViagem[i]; j++) {
            Passageiro passageiro;
            passageiro.nome = "Passageiro " + to_string(j + 1);
            passageiro.idade = rand() % 50 + 20;  // Idade aleatória entre 20 e 69 anos
            passageiro.poltrona = j + 1;  // Número da poltrona
            passageiros.push_back(passageiro);
        }
        passageirosPorViagem.push_back(passageiros);
    }

    // Exemplo de uso das funcionalidades
    cout << "Total arrecadado para a primeira viagem: $" << calcularTotalArrecadado(vendasPorViagem[0]) << endl;

    cout << "Total arrecadado no mes: $" << calcularTotalArrecadadoNoMes(vendasPorViagem) << endl;

    cout << "Nome do passageiro da poltrona 10 na segunda viagem: "
              << obterNomePassageiro(passageirosPorViagem[1], 10) << endl;

    cout << "Media de idade dos passageiros: " << calcularMediaIdade(passageirosPorViagem[0]) << " anos" << endl;

    return 0;
}
