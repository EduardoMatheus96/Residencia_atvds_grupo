/*
Exercício 3: Operações com caracteres   
    
    ● Escreva um programa que:
        a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
        entrada padrão, usando cin, e imprima o maior deles seguido das
        palavras “e maior”.

        b. Se os números foram iguais, imprima a mensagem “estes
        números são iguais”. Use apenas o operador condicional (?).

        c. Identifique se o maior valor é um número par ou ímpar.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2;

    // Solicita ao usuário que digite dois números inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    // (a) Imprime o maior número seguido das palavras "e maior" ou a mensagem "estes números são iguais"
    int maior = (num1 > num2) ? num1 : ((num2 > num1) ? num2 : -1);
    cout << ((maior != -1) ? (to_string(maior) + " e maior") : "Estes numeros sao iguais") << endl;

    // (c) Identifica se o maior valor é par ou ímpar ou se são iguais
    (maior != -1) ? cout << "O maior valor (" << maior << ") e " << ((maior % 2 == 0) ? "par." : "impar.") << endl : cout << "O maior valor (" << num1 << ") e " << ((num1 % 2 == 0) ? "par." : "impar.") << endl;
   
    return 0;
}

