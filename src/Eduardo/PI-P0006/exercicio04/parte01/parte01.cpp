#include <iostream>
#include "../funcoes/head_funcoes.h"

using namespace std;

void parteUm()
{
    double x, y, z;
    cout << "Insira um número real: ";
    scanf("%lf", &x);
    cout << endl;

    cout << "Insira outro número real: ";
    scanf("%lf", &y);
    cout << endl;

    z = soma(x, y);
    cout << "A soma de "
         << x
         << " + " << y
         << " é: "
         << (z * 1.0)
         << endl;

    z = media(x, y);
    cout << "A média de "
         << x
         << " e "
         << y
         << " é: "
         << (z * 1.0)
         << endl;

    z = produto(x, y);
    cout << "O produto de "
         << x
         << " * "
         << y
         << " é: "
         << (z * 1.0)
         << endl;
         
    z = maiorEntreDois(x, y);
    cout << "O maior entre "
         << x
         << " e "
         << y
         << " é: "
         << (z * 1.0)
         << endl;

     z = menorEntreDois(x, y);
    cout << "O menor entre "
         << x
         << " e "
         << y
         << " é: "
         << (z * 1.0)
         << endl;
}