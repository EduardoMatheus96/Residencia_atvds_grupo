#include <iostream>

using namespace std;

int main(void)
{

/*a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se 
achar mais apropriado;*/
/*b. Peça ao usuário para digitar dois numeros inteiros, obtenha-os da entrada padrão, usando cin, e atribua os 
valores digitados às variáveis a e b respectivamente;*/
/*c. Atribua à variável c o valor da expressão */
/*d. 4 * 𝑎 + 𝑏 / 3 − 5. Imprima o resultado na tela;*/

int a, b, c; 

cout << "Digite um valor inteiro para A: " << endl; 
cin >> a;
cout << "Digite um valor inteiro para B: " << endl;
cin >> b;

c = 4 * (a + b)/(3 - 5);
cout << "O valor de C eh: " << c << endl;

/*e. Atribua à variável c o valor da expressão 4 * (𝑎 + 𝑏) / (3 − 5). Imprima o resultado na tela;*/
/*f. Comente no código o por que dos resultados destas expressões serem diferentes. Demonstre implementando outra 
variação desta expressão que gere resultado diferente;*/

//c = 4 * (a + b / 3 - 5); a=2 b=4 resultado: -8
//A ordem dos parenteses importam e mudam o resultado da expressao matematica. 

/*g. Utilizando o último valor calculado de c, recalcule o valor da mesma utilizando a expressão 𝑎2 + 2 * 𝑏 + 𝑐 , 
imprima o resultado na tela;*/ 

c = a*a + 2 * b + c;
cout << "O valor da expressao eh: " << c << endl;


 return 0;
}