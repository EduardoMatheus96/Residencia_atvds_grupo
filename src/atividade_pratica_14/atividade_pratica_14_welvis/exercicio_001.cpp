/*
Exercício 1: Reutilização de Funções
    • Escreva uma função em C++ que calcule o fatorial de um número inteiro.
    
    • Crie um programa que utilize essa função para calcular e exibir o fatorial de 
    três números diferentes.

*/

#include <iostream>
using namespace std;

// Função para calcular o fatorial de um número
int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fatorial = 1;
        for (int i = 2; i <= n; ++i) {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main() {
    int num1, num2, num3;

    // Solicita ao usuário que digite três números inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;
    cout << "Digite o terceiro numero inteiro: ";
    cin >> num3;

    // Calcula e exibe o fatorial de cada número usando a função
    int fatorial1 = calcularFatorial(num1);
    int fatorial2 = calcularFatorial(num2);
    int fatorial3 = calcularFatorial(num3);

    cout << "O fatorial de " << num1 << " e: " << fatorial1 << endl;
    cout << "O fatorial de " << num2 << " e: " << fatorial2 << endl;
    cout << "O fatorial de " << num3 << " e: " << fatorial3 << endl;

    return 0;
}
