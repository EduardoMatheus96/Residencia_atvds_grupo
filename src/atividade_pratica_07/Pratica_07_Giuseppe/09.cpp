#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    int anterior = 0;
    int atual = 1;

    cout << "Sequência de Fibonacci até " << numero << ":" << endl;

    while (atual <= numero) {
        cout << atual << " ";

        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    cout << endl;

    return 0;
}