#include <iostream>

using namespace std;

double raio;

int main(void) 
{
    cout << "Indique o valor do raio do circulo: " << endl;
    cin >> raio;

    cout << "O valor do diametro do circulo eh: " << raio * 2 << endl;
    cout << "O valor do perimetro do circulo eh: " << 2 * 3.1415 * raio << endl;
    cout << "O valor da area do circulo eh: " << 3.1415 * (raio * raio) << endl;

    return 0;
}