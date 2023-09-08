#include <iostream>
#include <cmath>
#include <map>

using namespace std;

void fazNada()
{
    return;
}

double soma(double a, double b)
{
    return a + b;
}

double media(double a, double b)
{
    return soma(a, b) / 2;
}

double produto(double a, double b)
{
    return a * b;
}

double maiorEntreDois(double numero1, double numero2) {
    return (numero1 >= numero2) ? numero1 : numero2;
}

double menorEntreDois(double numero1, double numero2) {
    return (numero1 < numero2) ? numero1 : numero2;
}

double diametro(double raio){
    return raio * raio;
}

double circunferencia(double raio){
    return 2 * 3.14 * raio;
}

double area(double raio){
    return 3.14 * (raio * raio);
}

void imprimeQuadrante(int quadrante, double x, double y)
{
    map<int, string> meuQuadrante;

    meuQuadrante[1] = "Primeiro quadrante";
    meuQuadrante[2] = "Segundo quadrante";
    meuQuadrante[3] = "Terceiro quadrante";
    meuQuadrante[4] = "Quarto quadrante";
    meuQuadrante[5] = "Sobre um dos eixos";

    cout << "O plano ("
    << x
    << ", "
    << y
    << ") "
    << "Pertence ao: "
    << meuQuadrante[quadrante]
    << endl;
}

void quadrante(double x, double y)
{
    (x > 0 && y > 0) ? imprimeQuadrante(1, x, y) 
    : (x < 0 && y > 0) ? imprimeQuadrante(2, x, y)
    : (x < 0 && y < 0) ? imprimeQuadrante(3, x, y)
    : (x > 0 && y < 0) ? imprimeQuadrante(4, x, y)
    : (x == 0 || y == 0) ? imprimeQuadrante(5, x, y)
    : fazNada();
}

