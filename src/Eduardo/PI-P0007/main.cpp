#include <iostream>
#include <vector>
#include <string>
#include "exercicios/exercicio01/head_exercicio01.h"
#include "exercicios/exercicio02/head_exercicio02.h"
#include "exercicios/exercicio03/head_exercicio03.h"
#include "exercicios/exercicio04/head_exercicio04.h"
#include "exercicios/exercicio05/head_exercicio05.h"
#include "exercicios/exercicio06/head_exercicio06.h"
#include "exercicios/exercicio07/head_exercicio07.h"
#include "exercicios/exercicio08/head_exercicio08.h"
#include "exercicios/exercicio09/head_exercicio09.h"
#include "exercicios/exercicio10/head_exercicio10.h"
#include "funcoes/head_funcoes.h"

using namespace std;

// Códigos de escape ANSI para cores de texto
const string RESET_COLOR = "\033[0m";
const string GREEN_TEXT = "\033[32m";

int main() {
    // Lista de nomes dos exercícios
    vector<string> exerciseNames = {
        "Exercício 1",
        "Exercício 2",
        "Exercício 3",
        "Exercício 4",
        "Exercício 5",
        "Exercício 6",
        "Exercício 7",
        "Exercício 8",
        "Exercício 9",
        "Exercício 10"
    };

    // Lista de ponteiros para as funções dos exercícios
    vector<void (*)()> exerciseFunctions = {
        exercicio01,
        exercicio02,
        exercicio03,
        exercicio04,
        exercicio05,
        exercicio06,
        exercicio07,
        exercicio08,
        exercicio09,
        exercicio10
    };

    char escolha;

    do {
        cout << "_________________________________________________________ \n\n" << endl;
        cout << "Menu de Exercícios:" << endl;

        for (int i = 0; i < exerciseNames.size(); i++) {
            cout << GREEN_TEXT << i + 1 << ". " << exerciseNames[i] << RESET_COLOR << endl;
        }

        cout << "0. Sair" << endl;
        cout << "Informe sua escolha: ";
        cin >> escolha;
        cout << endl;

        int opcao = escolha - '0';

        if (opcao >= 1 && opcao <= exerciseFunctions.size()) {
            exerciseFunctions[opcao - 1]();  // Chama a função do exercício selecionado
        } else if (escolha != '0') {
            cout << "Escolha inválida. Por favor, tente novamente." << endl;
        }

    } while (escolha != '0');

    cout << "Saindo do programa. Até mais!" << endl;
    return 0;
}


