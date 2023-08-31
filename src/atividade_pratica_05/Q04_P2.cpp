#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Digite um valor real para a: ";
    cin >> a;
    cout << "Digite um valor real para b: ";
    cin >> b;
    cout << "Digite um valor real para c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais e distintas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (delta == 0) {
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real (raiz dupla):" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não possui raízes reais." << endl;
    }

    return 0;
}
