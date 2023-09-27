#include <iostream>
#include "parte01/head_parte01.h"
#include "parte02/head_parte02.h"
#include "parte03/head_parte03.h"

using namespace std;

// Códigos de escape ANSI para cores de texto
const string RESET_COLOR = "\033[0m";
const string RED_TEXT = "\033[31m";
const string GREEN_TEXT = "\033[32m";
const string YELLOW_TEXT = "\033[33m";

int main()
{
    char escolha;

    do
    {
        cout << "_________________________________________________________ \n\n"
             << endl;
        cout << "Menu:" << endl;
        cout << GREEN_TEXT << "1. Acessar a primeira parte do Exercicio 4" << RESET_COLOR << endl;
        cout << YELLOW_TEXT << "2. Acessar a segunda parte do Exercicio 4" << RESET_COLOR << endl;
        cout << RED_TEXT << "3. Acessar a terceira parte do Exercicio 4" << RESET_COLOR << endl;
        cout << "0. Sair do Exercicio 4" << endl;
        cout << "Informe sua escolha: ";
        cin >> escolha;
        cout << endl;

        switch (escolha)
        {
        case '1':
            parteUm();
            break;
        case '2':
            parteDois();
            break;
        case '3':
            parteTres();
            break;
        case '0':
            cout << "Saindo do Exercicio 4. Até mais!" << endl;
            break;
        default:
            cout << "Escolha inválida. Por favor, tente novamente." << endl;
        }

    } while (escolha != '0');

    return 0;
}
