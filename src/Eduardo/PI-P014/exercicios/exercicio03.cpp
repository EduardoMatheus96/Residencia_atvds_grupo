#include <iostream>
#include <cmath>

using namespace std;

struct Ponto
{
    double x;
    double y;
};

double calcularDistancia(Ponto ponto1, Ponto ponto2)
{
    return sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
}

void exercicio03()
{
    Ponto ponto1;
    Ponto ponto2;
    cout << "Insira as coordenadas do primeiro ponto: ";
    cin >> ponto1.x >> ponto1.y;
    cout << endl;

    cout << "Insira as coordenadas do segundo ponto: ";
    cin >> ponto2.x >> ponto2.y;
    cout << endl;

    double distancia = calcularDistancia(ponto1, ponto2);

    cout << "A distância entre os pontos é: " << distancia << endl;
}