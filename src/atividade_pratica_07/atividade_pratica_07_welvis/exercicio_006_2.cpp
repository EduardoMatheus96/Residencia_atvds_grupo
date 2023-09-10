/*
Exercício 6: 
    Escreva um programa em C++ que gere e imprima o seguinte padrão de caracteres 
    alfanuméricos, onde o número fornecido pelo usuário é a altura do padrão:
    A
    BC
    DEF
    GHIJ
    KLMNO

*/

#include <iostream>
using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrao: ";
    cin >> altura;

    int contador = 65; // Valor ASCII para 'A'

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            if (contador > 90) {
                contador = 65; // Reinicia a partir de 'A' quando ultrapassa 'Z'
            }
            char caractere = static_cast<char>(contador);
            cout << caractere;
            contador++;
        }
        cout << endl;
    }

    return 0;
}
