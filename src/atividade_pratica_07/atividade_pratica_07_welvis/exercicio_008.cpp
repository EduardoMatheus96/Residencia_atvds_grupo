/*
Exercício 8: 
    Escreva um programa em C++ que leia um número inteiro e determine se ele é um 
    número perfeito. Um número perfeito é aquele cuja soma dos seus divisores, 
    excluindo ele mesmo, é igual ao próprio número. 

*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int somaDivisores = 0;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Encontra e soma os divisores do número
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == numero) {
        cout << numero << " é um numero perfeito." << endl;
    } else {
        cout << numero << " nao e um numero perfeito." << endl;
    }

    return 0;
}
