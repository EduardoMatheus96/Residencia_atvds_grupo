#include <iostream>

using namespace std;

void ordenaCrescente(float &a, float &b, float &c, float &d) {
    // Implementação de ordenação simples (bubble sort)
    float temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
}

void exercicio03(){
    float a = 2.5, b = 3.2, c = 10.5, d = 1.6;

    cout << "Antes da ordenação:" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;

    // Chama a função para ordenar as variáveis
    ordenaCrescente(a, b, c, d);

    cout << "Após a ordenação em ordem crescente:" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d << endl;
}