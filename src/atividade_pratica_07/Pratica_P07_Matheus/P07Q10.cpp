#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, resultado = 0, n = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    original = numero;

    while (original != 0) {
        original /= 10;
        n++;
    }

    original = numero;

    while (original != 0) {
        int digito = original % 10;
        resultado += pow(digito, n);
        original /= 10;
    }

    if (resultado == numero) {
        cout << numero << " é um número de Armstrong." << endl;
    } else {
        cout << numero << " não é um número de Armstrong." << endl;
    }

    return 0;
}
