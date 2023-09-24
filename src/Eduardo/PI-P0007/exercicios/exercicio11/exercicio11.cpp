#include <iostream>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio11()
{
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (ehArmstrong(num)) {
        cout << num << " eh um numero de Armstrong." << endl;
    } else {
        cout << num << " nao eh um numero de Armstrong." << endl;
    }
}