#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "O ponto (" << x << ", " << y << ") está sobre o eixo (0, 0)." << endl;
    } else {
        int quadrante = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);
        cout << "O ponto (" << x << ", " << y << ") está no Quadrante " << quadrante << "." << endl;
    }

    return 0;
}