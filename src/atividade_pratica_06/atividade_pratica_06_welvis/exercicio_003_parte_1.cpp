/*
Exercício 3: Operações com caracteres
    ● Escreva um programa que
        a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
        ch3 mas você pode escolher outro identificador se achar mais
        apropriado;

        b. Peça ao usuário para digitar dois caracteres, obtenha-os da entrada
        padrão, usando cin, e atribua os valores digitados às variáveis ch1 e
        ch2 respectivamente;

        c. Atribua à variável ch3 o caractere que antecede ao caractere ch1,
        imprima na tela, utilizando cout, o caractere em formato numérico 
        decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
        caractere imprimível, substitua ele pelo caractere '_')

        d. Atribua à variável ch3 o caractere que precede ao caractere ch2,
        imprima na tela, utilizando printf, o caractere em formato numérico
        decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
        caractere imprimível, substitua ele pelo caractere '_')

        e. Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra
        maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
        operador condicional (?) com esta finalidade. Imprima o valor de ch3
        na tela;

        f. Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra
        minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
        operador condicional (?) com esta finalidade. Imprima o valor de ch3
        na tela;

        g. Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere
        ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso
        contrário. Use o operador condicional (?) com esta finalidade.
        Imprima o valor de ch3 na tela;
    
    ● Escreva um programa que:
        a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
        entrada padrão, usando cin, e imprima o maior deles seguido das
        palavras “e maior”.

        b. Se os números foram iguais, imprima a mensagem “estes
        números são iguais”. Use apenas o operador condicional (?).
        c. Identifique se o maior valor é um número par ou ímpar.

*/


#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite dois caracteres
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // (c) Imprime o caractere que antecede ch1
    if (ch1 - 1 >= 32) {
        ch3 = ch1 - 1;
        cout << "Antecessor de ch1: " << int(ch3) << " (Decimal), ";
        cout << oct << int(ch3) << " (Octal), ";
        cout << hex << int(ch3) << " (Hexadecimal), ";
        cout << ch3 << " (Caractere)" << endl;
    } else {
        ch3 = '_';
        cout << "Antecessor de ch1 não é um caractere imprimível." << endl;
    }

    // (d) Imprime o caractere que precede ch2 usando printf
    if (ch2 + 1 <= 127) {
        ch3 = ch2 + 1;
        printf("Predecessor de ch2: %d (Decimal), %o (Octal), %x (Hexadecimal), %c (Caractere)\n", int(ch3), int(ch3), int(ch3), ch3);
    } else {
        ch3 = '_';
        cout << "Predecessor de ch2 não é um caractere imprimível." << endl;
    }

    // (e) Atribui 'A' se ch1 for uma letra maiúscula, caso contrário, espaço vazio
    ch3 = (isupper(ch1)) ? 'A' : ' ';
    cout << "ch3 após (e): " << ch3 << endl;

    // (f) Atribui 'a' se ch2 for uma letra minúscula, caso contrário, espaço vazio
    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "ch3 após (f): " << ch3 << endl;

    // (g) Atribui '1' se ch1 ou ch2 for um dígito, caso contrário, espaço vazio
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "ch3 após (g): " << ch3 << endl;

    return 0;
}
