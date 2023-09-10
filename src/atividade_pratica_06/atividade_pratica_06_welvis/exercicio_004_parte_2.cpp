/*
Exercício 4: Operações com valores de ponto flutuante.
    ● Escreva um programa que leia da entrada padrão o raio de um círculo e
    imprima:
    a. Seu diâmetro;
    b. O valor de sua circunferência (perímetro);
    c. Sua área.

*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio;

    // Solicita ao usuário que digite o raio do círculo
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Calcula o diâmetro, a circunferência e a área
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio;
    double area = M_PI * pow(raio, 2);

    // Imprime os resultados
    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia (Perimetro): " << circunferencia << endl;
    cout << "Area: " << area << endl;

    return 0;
}
