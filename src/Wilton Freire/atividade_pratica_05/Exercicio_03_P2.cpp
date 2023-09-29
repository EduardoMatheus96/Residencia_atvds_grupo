//● Escreva um programa que:
/*a. Peça ao usuário para fornecer um numero inteiro, obtenha-o da entrada padrão, usando cin, e armazene numa
variável de tipo int;*/
/*b. Determine se o valor fornecido pode ser representado, sem perda de informação, como um short int. Imprima na
tela o valor fornecido, seguido das palavras “e maior que um short int” ou “este valor pertence ao intervalo dos 
short int”. Use apenas o operador condicional (?).*/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a;
    cout << "Digite um numero inteiro: " << endl;
    cin >> a;

    cout << (a > numeric_limits<short int>::max() ? "Eh maior que um short int!" : "Este valor pertence ao intervalo dos short int!") << endl;

    return 0;
}