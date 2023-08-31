/*
Exercício 2: Operações com caracteres
    ● Escreva um programa que:

        a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
        ch3, mas você pode escolher outro identificador se achar mais
        apropriado;

        b. Peça ao usuário para digitar um caractere, obtenha o mesmo da
        entrada padrão utilizando cin, e atribua o valor digitado à variável
        ch1;

        c. Verifique, utilizando o operador condicional (?) se se trata de:
            i. uma letra maiúscula;
            ii. uma letra minúscula;
            iii. um dígito;
            iv. outro tipo de caractere;    
            
*/

#include <iostream>
using namespace std;

int main() {
    char ch1, ch2 = 'B', ch3 = 'C';

   cout << "Digite um caractere para ch1: ";
   cin >> ch1;

    // Verificação do tipo de caractere utilizando o operador condicional
   cout << "Verificações:\n";

   string type;

    type = (ch1 >= 'A' && ch1 <= 'Z') ? "Letra maiúscula" :
           (ch1 >= 'a' && ch1 <= 'z') ? "Letra minúscula" :
           (ch1 >= '0' && ch1 <= '9') ? "Dígito" :
           "Outro tipo de caractere";

   cout << "ch1 é " << type <<endl;

    return 0;
}


/*

d. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;

O C++ fornece funções da biblioteca padrão que permitem verificar o tipo de um 
caractere diretamente. Uma dessas funções é a função `isupper`, que verifica se um 
caractere é uma letra maiúscula, e a função `islower`, que verifica se um caractere 
é uma letra minúscula. Além disso, a função `isdigit` verifica se um caractere é um 
dígito.

*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch1, ch2 = 'B', ch3 = 'C';

    cout << "Digite um caractere para ch1: ";
    cin >> ch1;

    // Verificação do tipo de caractere utilizando as funções da biblioteca padrão
    cout << "Verificações:\n";

    if (isupper(ch1)) {
        cout << "ch1 é uma letra maiúscula\n";
    } else if (islower(ch1)) {
        cout << "ch1 é uma letra minúscula\n";
    } else if (isdigit(ch1)) {
        cout << "ch1 é um dígito\n";
    } else {
        cout << "ch1 é outro tipo de caractere\n";
    }

    return 0;
}


/*

e. Atribua à variável ch2 o caractere 81, identifique e imprima na tela,
utilizando cout, o caractere em formato numérico decimal, octal,
hexadecimal e como caractere;

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char ch1, ch2 = 81, ch3 = 'C';

    // Impressão das representações numéricas de ch2
    cout << "Representações de ch2:\n";
    cout << "Decimal: " << static_cast<int>(ch2) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;

    return 0;
}


/*

f. Dado que o caractere ch2 é uma letra maiúscula, atribua à variável
ch3 o caractere que corresponde à mesma letra minúscula (não pode
procurar na tabela ASCII) e Imprima ch3 na tela, utilizando cout, em
formato numérico decimal, octal, hexadecimal e como caractere

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char ch1, ch2 = 81, ch3;

    cout << "ch2: " << ch2 << endl;

    // Conversão de maiúscula para minúscula
    ch3 = ch2 + 32;

    // Impressão da conversão em diferentes formatos
    cout << "Conversão de maiúscula para minúscula (ch3):\n";
    cout << "Decimal: " << static_cast<int>(ch3) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere: " << ch3 << endl;

    return 0;
}
