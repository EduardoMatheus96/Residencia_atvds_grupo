/*
Exercício 3: Operações com inteiros
    ● Escreva um programa, usando quando necessário o operador (?), que:
        a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas
        você pode escolher outro identificador se achar mais apropriado;

        b. Peça ao usuário para digitar dois números inteiros, obtenha-os da
        entrada padrão, usando cin, e atribua os valores digitados às
        variáveis a e b respectivamente;

        c. Atribua à variável c a somas das variáveis a e b, imprima o resultado
        na tela em formato hexadecimal;

        d. Atribua à variável c o produto das variáveis a e b, imprima o
        resultado na tela em formato octal;

        e. Atribua à variável c o módulo (valor absoluto) da diferença entre as
        variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0
        retorna -c, caso contrário retorna c);

        f. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
        na sua biblioteca padrão para obter este tipo de resposta de forma
        direta;

        g. Atribua à variável c o quociente entre variáveis a e b, imprima o
        resultado na tela; (se b for igual a zero a divisão não é possível e um
        aviso deve ser apresentado ao usuário);

        h. Se a divisão anterior for possível, determinar se a é divisível de forma
        exata por b, mostrar o resultado na tela;   
            
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    // Pedir ao usuário para digitar dois números inteiros
    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    // Somar a e b, imprimir em formato hexadecimal
    c = a + b;
    cout << "Soma (hex): " << hex << c << endl;

    // Multiplicar a e b, imprimir em formato octal
    c = a * b;
    cout << "Produto (oct): " << oct << c << endl;

    // Calcular o valor absoluto da diferença entre a e b, imprimir
    c = abs(a - b);
    cout << "Módulo da diferença: " << c << endl;

    // Verificar se b é zero antes de realizar a divisão
    if (b != 0) {
        // Dividir a por b, imprimir
        c = a / b;
        cout << "Quociente: " << c << endl;

        // Verificar se a é divisível por b
        if (a % b == 0) {
            cout << "a é divisível por b." << endl;
            cout << "a/b = " << a / b << endl;
        } else {
            cout << "a não é divisível por b." << endl;
        }
    } else {
        cout << "A divisão por zero não é possível." << endl;
    }

    return 0;
}


/*

● Escreva um programa que:
    a. Peça ao usuário para fornecer um número inteiro, obtenha-o da
    entrada padrão, usando cin, e armazene numa variável de tipo int;

    b. Determine se o valor fornecido pode ser representado, sem perda de
    informação, como um short int. Imprima na tela o valor
    fornecido, seguido das palavras “e maior que um short int”
    ou “este valor pertence ao intervalo dos short
    int”. Use apenas o operador condicional (?).

*/

#include <iostream>
using namespace std;

int main() {
    int userInput;
    cout << "Digite um número inteiro: ";
    cin >> userInput;

    cout << "O valor fornecido é: " << userInput << " e ";
    cout << (userInput > numeric_limits<short>::max() || userInput < numeric_limits<short>::min() ? "maior que um short int" : "este valor pertence ao intervalo dos short int") << endl;

    return 0;
}
