#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int numero, original, resultado = 0, n = 0;

    cout << "Digite um numero inteiro: ";
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
        cout << numero << " e um numero de Armstrong." << endl;
    } else {
        cout << numero << " nao e um numero de Armstrong." << endl;
    }

    return 0;
}