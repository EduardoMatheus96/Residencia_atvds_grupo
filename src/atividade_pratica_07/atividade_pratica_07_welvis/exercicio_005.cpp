/*
Exercício 5: 
    Escreva um programa em C++ que simule um jogo de adivinhação. O programa deve 
    gerar um número aleatório entre 1 e 100, e o usuário deve tentar adivinhar esse 
    número. O jogo deve informar se o palpite está alto, baixo ou correto, e continuar até 
    que o usuário acerte o número.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Inicializa a semente para a geração de números aleatórios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gera um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1;
    
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;

    do {
        // Solicita ao usuário que insira um palpite
        cout << "Tente adivinhar o numero (entre 1 e 100): ";
        cin >> palpite;
        
        tentativas++;

        if (palpite < numeroAleatorio) {
            cout << "Seu palpite esta baixo. Tente novamente." << endl;
        } else if (palpite > numeroAleatorio) {
            cout << "Seu palpite esta alto. Tente novamente." << endl;
        } else {
            cout << "Parabens! Voce acertou o numero " << numeroAleatorio << " em " << tentativas << " tentativas." << endl;
        }
    } while (palpite != numeroAleatorio);

    return 0;
}
