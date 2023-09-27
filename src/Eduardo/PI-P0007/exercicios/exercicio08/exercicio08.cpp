#include <iostream>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio08()
{
    int altura;
    
    cout << "Digite a altura do padrao: ";
    cin >> altura;

    cout << "Padrão A:" << endl;
    imprimePadraoA(altura);

    cout << "\nPadrão B:" << endl;
    imprimePadraoB(altura);

    cout << "\nPadrão C:" << endl;
    imprimePadraoC(altura);

}