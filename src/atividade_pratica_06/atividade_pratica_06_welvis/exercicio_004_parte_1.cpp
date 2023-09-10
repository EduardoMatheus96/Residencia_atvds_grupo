/*
Exercício 4: Operações com valores de ponto flutuante.
    ● Escreva um programa que
        a. Declare três variáveis de tipo double, vamos chamar de x, y e z
        mas você pode escolher outro identificador se achar mais apropriado;

        b. Peça ao usuário para digitar dois números de ponto flutuante,
        obtenha-os da entrada padrão, usando scanf, e atribua os valores
        digitados às variáveis x e y respectivamente;

        c. Atribua à variável z a somas das variáveis a e b, imprima o resultado
        na tela;

        d. Atribua à variável z a média das variáveis x e y, imprima o resultado
        na tela;

        e. Atribua à variável z o produto entre as variáveis x e y, imprima o
        resultado na tela;

        f. Atribua à variável z o maior valor entre as variáveis x e y, imprima o
        resultado na tela;

        g. Atribua à variável z o menor valor entre as variáveis x e y, imprima o
        resultado na tela;

*/


#include <iostream>
using namespace std;

int main() {
    double x, y, z;

    // (b) Solicita ao usuário que digite dois números de ponto flutuante
    cout << "Digite o primeiro numero: ";
    scanf("%lf", &x);
    cout << "Digite o segundo numero: ";
    scanf("%lf", &y);

    // (c) Soma de x e y
    z = x + y;
    cout << "Soma: " << z << endl;

    // (d) Média de x e y
    z = (x + y) / 2.0;
    cout << "Media: " << z << endl;

    // (e) Produto de x e y
    z = x * y;
    cout << "Produto: " << z << endl;

    // (f) Maior valor entre x e y
    z = (x > y) ? x : y;
    cout << "Maior valor: " << z << endl;

    // (g) Menor valor entre x e y
    z = (x < y) ? x : y;
    cout << "Menor valor: " << z << endl;

    return 0;
}
