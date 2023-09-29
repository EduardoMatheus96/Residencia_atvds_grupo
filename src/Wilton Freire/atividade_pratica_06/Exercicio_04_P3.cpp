#include <iostream>

using namespace std;

int main() 
{
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    int quadrante = (x == 0 && y == 0) ? 0 : (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);

    cout << "O ponto (" << x << ", " << y << ") esta ";
    cout << ((quadrante == 0) ? "sobre o eixo (0, 0)." : "no Quadrante " + to_string(quadrante) + ".") << endl;

    return 0;
}