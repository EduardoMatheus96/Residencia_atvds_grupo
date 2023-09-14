#include <iostream>

using namespace std;

int main(void)
{

//Questão 2. a), b), c) e d) Declarando variáveis, atribuindo valores e retornando valor de C
int a, b, c; 

cout << "Digite um valor inteiro para A: " << endl; 
cin >> a;
cout << "Digite um valor inteiro para B: " << endl;
cin >> b;

c = 4 * (a + b)/(3 - 5);
cout << "O valor de C eh: " << c << endl;

//Questão 2. e), f) e g) Recalculando o valor de c e imprimindo resultado da nova expressão
//Reposta f) para os programas escritos em C++ os parenteses são uma forma de priorizar e ordenar os cálculos, logo ao usar o recurso o resultado é diferente 

c = a*a + 2 * b + c;
cout << "O valor da expressao eh: " << c << endl;


 return 0;
}