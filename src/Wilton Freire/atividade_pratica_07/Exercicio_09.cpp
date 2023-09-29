#include <iostream>

using namespace std;

int main() 
{
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    int anterior = 0;
    int atual = 1;

    cout << "Sequencia de Fibonacci ate " << numero << ":" << endl;

    while (atual <= numero) {
        cout << atual << " ";

        int proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    cout << endl;

    return 0;
}