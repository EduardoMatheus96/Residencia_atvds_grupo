/*
Exercício 3: 
    Escreva um programa em C++ que leia um número inteiro e imprima todos os divisores 
    desse número.

*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Os divisores de " << numero << " são: ";

    for (int divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            cout << divisor << " ";
        }
    }

    cout << endl;

    return 0;
}
