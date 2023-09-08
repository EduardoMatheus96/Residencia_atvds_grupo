/*
Exercício 2: Operações com inteiros
    ● Escreva um programa que:

        a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas
        você pode escolher outro identificador se achar mais apropriado;

        b. Peça ao usuário para digitar dois números inteiros, obtenha-os da
        entrada padrão, usando cin, e atribua os valores digitados às
        variáveis a e b respectivamente;

        c. Atribua à variável c o valor da expressão

        d. 4 * 𝑎 + 𝑏 / 3 − 5. Imprima o resultado na tela;

        e. Atribua à variável c o valor da expressão 4 * (𝑎 + 𝑏) / (3 − 5).
        Imprima o resultado na tela;

        f. Comente no código o por que dos resultados destas expressões
        serem diferentes. Demonstre implementando outra variação desta
        expressão que gere resultado diferente;

        g. Utilizando o último valor calculado de c, recalcule o valor da mesma
        utilizando a expressão 𝑎^2 + 2 * b + c , imprima o resultado na tela;

        

*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Solicita ao usuário que digite dois números inteiros
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    // Calcula e imprime o resultado da primeira expressão
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da primeira expressão: " << c << endl;

    // Calcula e imprime o resultado da segunda expressão
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da segunda expressão: " << c << endl;

    /*
    O resultado das duas expressões é diferente devido à precedência dos operadores.
    Na primeira expressão, a multiplicação e a divisão ocorrem antes da subtração,
    enquanto na segunda expressão, a adição e a multiplicação ocorrem antes da divisão
    e da subtração.
    */

    // Uma variação da expressão
    c = (4 * a) + b / (3 - 5);
    cout << "Resultado de uma variação da segunda expressão: " << c << endl;

    c = a * a + 2 * b + c;
    cout << "Resultado de a^2 + 2 * b + c: " << c << endl;

    return 0;
}



