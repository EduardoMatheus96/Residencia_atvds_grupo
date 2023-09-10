/*
Exercício 7: 
Escreva um programa que imprima os seguintes padrões de acordo com a entrada, 
que define a altura do padrão. Para os exemplos abaixo a entrada foi 4:

*/

#include <iostream>
using namespace std;

int main() {
    int altura;

    // Solicita ao usuário que insira a altura do padrão
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    cout << "Padrão 1: Quadrado preenchido" << endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPadrão 2: Quadrado diagonal para baixo preenchido" << endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (j >= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "\nPadrão 3: Quadrado com bordas preenchidas" << endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

