#include <iostream>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio03()
{
    int numero;
    cout << "Insira um número inteiro: ";
    cin >> numero;
    cout << endl;

    divisores(numero);
}