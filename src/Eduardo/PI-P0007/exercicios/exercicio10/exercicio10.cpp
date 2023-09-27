#include <iostream>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio10()
{
    int num;

    cout << "Digite o numero de termos da sequencia de Fibonacci a serem exibidos: ";
    cin >> num;

    if (num < 1) {
        cout << "Por favor, digite um numero maior ou igual a 1." << endl;
    } else {
        imprimeSequenciaFib(num);
    }
}