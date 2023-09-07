#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo, sou o gênio da adivinhação!" << endl;
    cout << "Tente adivinhar o número entre 1 e 100." << endl;

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Seu palpite está baixo. Tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Seu palpite está alto. Tente novamente." << endl;
        } else {
            cout << "Parabéns! Você acertou o número " << numeroSecreto << " em " << tentativas << " tentativas." << endl;
        }
    } while (palpite != numeroSecreto);

    return 0;
}
