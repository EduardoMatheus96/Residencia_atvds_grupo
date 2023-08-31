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

    double px = b * b - 4 * a * c;

    if (px > 0) {
        double raiz1 = (-b + sqrt(px)) / (2 * a);
        double raiz2 = (-b - sqrt(px)) / (2 * a);
        cout << "O polinomio tem duas raizes reais e distintas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (px == 0) {
        double raiz = -b / (2 * a);
        cout << "O polinomio tem uma raiz real (raiz dupla):" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinomio nao possui raizes reais." << endl;
    }

    return 0;
}