#include <iostream>
#include "../funcoes/head_funcoes.h"
using namespace std;

void parteTres(void)
{
    double x, y;
    cout << "Informe a coordenada X: ";
    cin >> x;
    cout << endl;

    cout << "Informe a coordenada Y: ";
    cin >> y;
    cout << endl;

    quadrante(x, y);

}