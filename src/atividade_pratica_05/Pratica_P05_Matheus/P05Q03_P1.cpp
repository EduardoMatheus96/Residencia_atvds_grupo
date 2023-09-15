// Questão 3. a) e b)

#include <iostream>

using namespace std;

int main(void){

    int a, b, c; 
    cout << "Digite o valor de A: " << endl;
    cin >> a;
    cout << "Digite o valor de B: " << endl;
    cin >> b;

    // Questão 3. c)
    c = a + b; 
    cout << "o Valor de C em hexadecimal e:" << hex << int(c) << endl;
    
    // Questão 3. d)
    c = a * b; 
    cout << "o Valor de C em octal e: " << oct << int(c) << endl; 

    // Questão 3. e)
    c = a - b; 
    if(c<0){
        c = -c;
        cout << "o Valor de C absoluto e:" << c << endl;
    }
    else cout << "o Valor de C absoluto e:" << c << endl; 
    
    // Questão 3. f)
    // Foi possível encontrar formas similares de resolução dos requerimentos da questão. Os mais recorrentes foram fundamentados no uso da biblioteca <cstdio> juntamente com funções printf e scanf. Pontanto existe outra forma de responder de forma direta!


     // Questão 3. g)
    if(b == 0){
        cout << "Nao e possivel realizar de divisao por 0." << endl;
    }
    else {c = a / b;
        cout << "O valor da divisao e: " << c << endl;} 

    // Questão 3. h)
    if (a%b == 0){
        cout << "A divisao e exata!" << endl;
    }
    else cout << "A divisao nae e exata!" << endl;


    return 0;
}