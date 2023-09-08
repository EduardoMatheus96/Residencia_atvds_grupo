#include <iostream>
#include <iomanip>
#include "../funcoes/header_funcoes.h"

using namespace std;


void parteUm(void)
{
    cout << "Parte 1 " << endl;
    cout << "_______________________________________ \n\n"
         << endl;
    char ch1, ch2, ch3;
    cout << "insira dois caracteres: " << endl;
    cout << "Primeiro caracter: ";
    cin >> ch1;
    cout << endl;
    cout << "Segundo caracter: ";
    cin >> ch2;
    cout << endl;

    ch3 = pegaAnterior(ch1);
    imprimiCaracterDecimal(ch3, 1);
    imprimiCaracterOctal(ch3, 1);
    imprimiCaracterHexadecimal(ch3, 1);

    cout
        << "O caracter ch3 é: "
        << ch3
        << endl;

    ch3 = pegaAnterior(ch2);
    imprimiCaracterDecimal(ch3, 0);
    imprimiCaracterOctal(ch3, 0);
    imprimiCaracterHexadecimal(ch3, 0);
    printf("O caracter ch3 é %c \n", ch3);


    ch3 = verifaMaiscula(ch1) ? 'A' : ' ';
    cout
        << "O caracter ch3 é: "
        << ch3
        << endl;

    ch3 = verifaMinuscula(ch2) ? 'a' : ' ';
    cout
        << "O caracter ch3 é: "
        << ch3
        << endl;

    ch3 = verificaDigito(ch1, ch2) ? '1' : ' ';
    cout
        << "O caracter ch3 é: "
        << ch3
        << endl;
}