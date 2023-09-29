/*a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador
se achar mais apropriado;*/
/*b. Peça ao usuário para digitar dois numeros inteiros, obtenha-os da entrada padrão, usando cin, e atribua os
valores digitados às variáveis a e b respectivamente;*/
#include <iostream>

using namespace std;

int main(void)
{

    int a, b, c; 
    cout << "Digite o valor de A: " << endl;
    cin >> a;
    cout << "Digite o valor de B: " << endl;
    cin >> b;

/*c. Atribua à variável c a somas das variáveis a e b, imprima o resultado na tela em formato hexadecimal;*/

c = a + b; 
    cout << "o Valor de C em hexadecimal e:" << hex << int(c) << endl;

/*d. Atribua à variável c o produto das variáveis a e b, imprima o resultado na tela em formato octal;*/

c = a * b; 
    cout << "o Valor de C em octal e: " << oct << int(c) << endl;

/*e. Atribua à variável c o módulo (valor absoluto) da diferença entre as variáveis a e b, imprima o resultado 
na tela; (valor absoluto: se c < 0 retorna -c, caso contrário retorna c)*/

c = a - b; 
    if(c<0){
        c = -c;
        cout << "o Valor de C absoluto e:" << c << endl;
    }
    else cout << "o Valor de C absoluto e:" << c << endl; 

/*f. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso na sua biblioteca padrão para obter este
tipo de resposta de forma direta;*/

/* Exite recurso na biblioteca padrão para obter esta resposta de forma direta, utilizando os operadores do <cstdio> e funções como printf e scanf.*/

/*g. Atribua à variável c o quociente entre variáveis a e b, imprima o resultado na tela; (se b for igual a zero a
divisão não é possível e um aviso deve ser apresentado ao usuário);*/

if(b == 0){
        cout << "Nao e possivel realizar de divisao por 0." << endl;
    }
    else {c = a / b;
        cout << "O valor da divisao e: " << c << endl;} 


/*h. Se a divisão anterior for possível, determinar se a é divisível de forma exata por b, mostrar o resultado na
tela;*/

if (a%b == 0){
        cout << "A divisao e exata!" << endl;
    }
    else cout << "A divisao nae e exata!" << endl;


    return 0;
}

//● Escreva um programa que:
/*a. Peça ao usuário para fornecer um numero inteiro, obtenha-o da entrada padrão, usando cin, e armazene numa
variável de tipo int;*/
/*b. Determine se o valor fornecido pode ser representado, sem perda de informação, como um short int. Imprima na
tela o valor fornecido, seguido das palavras “e maior que um short int” ou “este valor pertence ao intervalo dos 
short int”. Use apenas o operador condicional (?).*/