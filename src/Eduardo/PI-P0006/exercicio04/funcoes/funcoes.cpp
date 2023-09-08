#include <iostream>
#include <cmath>

using namespace std;

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