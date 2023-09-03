#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x, y, z; // Letra A e B

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    double fx = 5 * x + 2; // Letra C

    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") está acima da reta." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da reta." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está na reta." << endl;
    }

    z = sqrt(x * x + y * y);  // Letra D

    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    z = x * y; // Letra E

    cout << "O valor de Z em notacao cientifica e: " << scientific << double(z);

    return 0;
}
