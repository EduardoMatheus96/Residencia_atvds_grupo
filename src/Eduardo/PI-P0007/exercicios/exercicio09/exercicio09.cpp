#include <iostream>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio09()
{
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (ehNumeroPerfeito(numero)) {
        cout << numero << " eh um numero perfeito." << endl;
    } else {
        cout << numero << " nao eh um numero perfeito." << endl;
    }
}