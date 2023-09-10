/*
Exercício 10: 
    Escreva um programa em C++ que leia um número inteiro e verifique se ele é um 
    número armstrong. Um número armstrong (ou narcisista) é um número que é igual à 
    soma de seus próprios dígitos elevados à quantidade de dígitos. Por exemplo, 153 é 
    um número armstrong porque 1³ + 5³ + 3³ = 153.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero, numeroOriginal, resto, digitos = 0, soma = 0;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    numeroOriginal = numero;

    // Conta o número de dígitos no número
    while (numero != 0) {
        numero /= 10;
        digitos++;
    }

    numero = numeroOriginal; // Restaura o valor original do número

    // Calcula a soma dos dígitos elevados à quantidade de dígitos
    while (numero != 0) {
        resto = numero % 10;
        soma += pow(resto, digitos);
        numero /= 10;
    }

    // Verifica se o número é um número Armstrong
    if (soma == numeroOriginal) {
        cout << numeroOriginal << " e um numero Armstrong." << endl;
    } else {
        cout << numeroOriginal << " nao e um numero Armstrong." << endl;
    }

    return 0;
}
