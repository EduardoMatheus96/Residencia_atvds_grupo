#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    int somaDivisores = 0;

    for (int i = 1; i < numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    if (somaDivisores == numero) {
        cout << numero << " é um número perfeito." << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }

    return 0;
}