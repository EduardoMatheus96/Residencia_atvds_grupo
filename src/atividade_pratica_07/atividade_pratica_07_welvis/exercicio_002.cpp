/*
Exercício 2:
    Escreva um programa em C++ que leia um número inteiro e verifique se ele é um 
    palíndromo. Um número é palíndromo se ele permanece o mesmo quando seus 
    dígitos são invertidos.

*/

#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> num;

    originalNum = num; // Armazena o número original

    // Inverte o número
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Verifica se o número é um palíndromo
    if (originalNum == reversedNum) {
        cout << originalNum << " e um numero palindromo." << endl;
    } else {
        cout << originalNum << " nao e um numero palindromo." << endl;
    }

    return 0;
}
