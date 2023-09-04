#include <iostream>
#include <cmath>

using namespace std;



int main(void) {
    double raio;
    cout << "Indique o valor do raio do circulo: " << endl;
    cin >> raio;

    cout << "O valor do diametro do circulo eh: " << raio * 2 << endl;
    cout << "O valor do perimetro do circulo eh: " << 2 * M_PI * raio << endl;
    cout << "O valor da area do circulo eh: " << M_PI * raio * raio << endl;

    return 0;
}