#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo, sou o genio da adivinhacao!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Seu palpite esta baixo. Tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Seu palpite esta alto. Tente novamente." << endl;
        } else {
            cout << "Parabens! Voce acertou o numero " << numeroSecreto << " em " << tentativas << " tentativas." << endl;
        }
    } while (palpite != numeroSecreto);

    return 0;
}