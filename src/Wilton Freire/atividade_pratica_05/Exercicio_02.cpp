/*a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3, mas você pode escolher outro 
identificador se achar mais apropriado*/

#include <iostream>

using namespace std;

int main() 
{  
    char ch1, ch2, ch3;

/*b. Peça ao usuário para digitar um caractere, obtenha o mesmo da entrada padrão utilizando cin, e atribua o
valor digitado à variável ch1*/

    cout << "Digite um caractere: ";
    cin >> ch1;

/*c. Verifique, utilizando o operador condicional (?) se se trata de: i. uma letra maiúscula; ii. uma letra minúscula;
iii. um dígito; iv. outro tipo de caractere;
d. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta*/

    cout << "Caractere digitado eh "; 
    cout << (isupper(ch1) ? "uma letra maiuscula." :
             (islower(ch1) ? "uma letra minuscula." :
             (isdigit(ch1) ? "um digito." : "outro tipo de caractere.")));
             
/*e. Atribua à variável ch2 o caractere 81, identifique e imprima na tela, utilizando cout, o caractere em formato
numérico decimal, octal, hexadecimal e como caractere*/

   ch2 = 81;  
    cout << "\nRepresentacoes do caractere 81 (ch2):\n";
    cout << "Decimal: " << static_cast<int>(ch2) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;
 
 /*f. Dado que o caractere ch2 é uma letra maiúscula, atribua à variável
ch3 o caractere que corresponde à mesma letra minúscula (não pode
procurar na tabela ASCII) e Imprima ch3 na tela, utilizando cout, em
formato numérico decimal, octal, hexadecimal e como caractere*/

    ch3 = ch2 + 32; 
     cout << "\nRepresentacoes do caractere convertido (ch3):\n";
     cout << "Decimal: " << static_cast<int>(ch3) << endl;
     cout << "Octal: " << oct << static_cast<int>(ch3) << endl;
     cout << "Hexadecimal: " << hex << static_cast<int>(ch3) << endl;
     cout << "Caractere: " << ch3 << endl;

    return 0;
}