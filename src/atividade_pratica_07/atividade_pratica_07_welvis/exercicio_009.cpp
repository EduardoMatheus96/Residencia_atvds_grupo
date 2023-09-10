/*
Exercício 9: 
    Escreva um programa em C++ que leia um número inteiro e imprima a sequência de 
    Fibonacci (Referência abaixo) até o número fornecido pelo usuário.

*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    int a = 0, b = 1;
    
    cout << "Sequencia de Fibonacci ate " << n << ":" << endl;

    while (a <= n) {
        cout << a << " ";

        int proximo = a + b;
        a = b;
        b = proximo;
    }

    cout << endl;

    return 0;
}
