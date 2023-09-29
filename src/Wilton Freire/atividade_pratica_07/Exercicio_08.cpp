#include <iostream>

using namespace std;

int main() 
{
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    int somaDivisores = 0;

    for (int i = 1; i < numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }
    
    if (somaDivisores == numero) {
        cout << numero << " e um numero perfeito." << endl;
    } else {
        cout << numero << " nao e um numero perfeito." << endl;
    }

    return 0;
}