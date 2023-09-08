#include <iostream>
#include "parte01/head_parte01.h"
#include "parte02/head_parte02.h"

using namespace std;

int main(void)
{
    char saida;
    do
    {
        cout << "_________________________________________________________ \n\n"
             << endl;
        cout << "Menu:" << endl;
        cout << "Para acessar a primeira parte do Exercicio 4 digite 1: " << endl;
        cout << "Para acessar a segunda parte do Exercicio 4 digite 2: " << endl;
        cout << "Para sair do Exercicio 4 digite 0: " << endl;
        cout << "Informe sua escolha: ";
        cin >> saida;
        cout << endl;

        if (saida == '1')
        {
            parteUm();
        }
        else if (saida == '2')
        {
            parteDois();
        }

    } while (saida != '0');
    return 0;
}