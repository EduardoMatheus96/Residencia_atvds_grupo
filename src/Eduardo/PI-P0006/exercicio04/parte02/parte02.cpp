#include <iostream>
#include "../funcoes/head_funcoes.h"

using namespace std;

void parteDois(){
    double raio;

    cout << "Entre com o valor do raio: ";
    cin >> raio;
    cout << endl;

    cout << "O diametro é de: "
    << diametro(raio)
    << endl;

    cout << "A circunferência é de: "
    << circunferencia(raio)
    << endl;

    cout << "A área é de: "
    << area(raio)
    << endl;

}