#include <iostream>
#include "../funcoes/header_funcoes.h"

using namespace std;

void parteDois(void)
{
    int numero01, numero02, maior;
    bool igual;
    cout << "Insira um número inteiro: ";
    cin >> numero01;
    cout << endl;

    cout << "Insira outro número inteiro: ";
    cin >> numero02;
    cout << endl;

    printaMaiorOuIgual(numero01, numero02);

}