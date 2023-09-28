#include <iostream>
#include "poligono.cpp"

using namespace std;

int main(void)
{
    Poligono poli;
    poli.le_pontos();
    poli.lista_pontos();

    cout << endl << "Perimetro calculado: " <<
        poli.perimetro() << endl;
    return 0;
}
