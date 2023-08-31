#include <iostream>

using namespace std;

int main(void){

    int a, b, c; // Letra A e B
    cout << "Digite o valor de A: " << endl;
    cin >> a;
    cout << "Digite o valor de B: " << endl;
    cin >> b;

    c = a + b; // Letra C
    cout << "o Valor de C em hexadecimal e:" << hex << int(c) << endl;
    

    c = a * b; // Letra D
    cout << "o Valor de C em octal e: " << oct << int(c) << endl; 

    c = a - b; // Letra E
    if(c<0){
        c = -c;
        cout << "o Valor de C absoluto e:" << c << endl;
    }
    else cout << "o Valor de C absoluto e:" << c << endl; 
    
    //Foi possível encontrar formas similares de resolução dos requerimentos da questão. Os mais recorrentes foram fundamentados no uso da biblioteca <cstdio> juntamente com funções printf e scanf. Pontanto existe outra forma de responder de forma direta!


     // Letra G
    if(b == 0){
        cout << "Nao e possivel realizar de divisao por 0." << endl;
    }
    else {c = a / b;
        cout << "O valor da divisao e: " << c << endl;} 

    // Letra H
    if (a%b == 0){
        cout << "A divisao e exata!" << endl;
    }
    else cout << "A divisao nae e exata!" << endl;


    return 0;
}