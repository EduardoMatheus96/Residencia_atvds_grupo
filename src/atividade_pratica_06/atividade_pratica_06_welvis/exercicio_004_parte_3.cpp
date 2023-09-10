/*
Exercício 4: Operações com valores de ponto flutuante.
    ● Escreva um programa que leia os valores (x, y) de um ponto do plano e
    informe em qual quadrante o ponto se encontra. Use apenas o operador
    condicional (?). Lembre que um ponto, no plano cartesiano, pode estar no
    primeiro quadrante ( se x> 0 e y>0), no segundo quadrante ( se x<0 e y>0),
    no terceiro quadrante ( se x<0 e y<0), no quarto quadrante (se x>0 e y<0) ou
    sobre um dos eixos (caso x=0 ou y=0).


*/


#include <iostream>
using namespace std;

int main() {
    double x, y;

    // Solicita ao usuário que digite as coordenadas do ponto
    cout << "Digite a coordenada x do ponto: ";
    cin >> x;
    cout << "Digite a coordenada y do ponto: ";
    cin >> y;

    // Determina em qual quadrante o ponto se encontra usando o operador condicional (?)
    string quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" : "quarto quadrante") : ((y > 0) ? "segundo quadrante" : ((x < 0) ? "terceiro quadrante" : "sobre um dos eixos"));

    // Imprime o quadrante em que o ponto se encontra
    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;

    return 0;
}
