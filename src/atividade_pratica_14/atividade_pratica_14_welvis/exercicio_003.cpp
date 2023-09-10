/*
Exercício 3: Estruturas de Dados com Structs
    • Crie uma struct chamada "Ponto" que represente as coordenadas (x, y) de um 
    ponto no plano.
    • Implemente uma função que calcule a distância entre dois pontos.
    • Utilize a struct e a função para calcular e exibir a distância entre dois pontos 
    dados.

*/


#include <iostream>
#include <cmath>
using namespace std;

// Definição da struct Ponto
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(const Ponto& p1, const Ponto& p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    Ponto ponto1, ponto2;

    // Solicita ao usuário que digite as coordenadas do primeiro ponto
    cout << "Digite as coordenadas do primeiro ponto (x y): ";
    cin >> ponto1.x >> ponto1.y;

    // Solicita ao usuário que digite as coordenadas do segundo ponto
    cout << "Digite as coordenadas do segundo ponto (x y): ";
    cin >> ponto2.x >> ponto2.y;

    // Calcula a distância entre os dois pontos usando a função
    double distancia = calcularDistancia(ponto1, ponto2);

    // Imprime a distância calculada
    cout << "A distancia entre os dois pontos e: " << distancia << endl;

    return 0;
}
