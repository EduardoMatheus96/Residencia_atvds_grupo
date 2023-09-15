
// Questão 4. a) e b)

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x, y, z; 
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

// Questão 4. c)
    double fx = 5 * x + 2; 
    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") esta acima da reta." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") esta abaixo da reta." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") esta na reta." << endl;
    }

// Questão 4. d)
    z = sqrt(x * x + y * y);  
    cout << "A distancia euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas eh: " << z << endl;

// Questão 4. e)
    z = x * y; 
    cout << "O valor de Z em notacao cientifica e: " << scientific << double(z);

    return 0;
}
