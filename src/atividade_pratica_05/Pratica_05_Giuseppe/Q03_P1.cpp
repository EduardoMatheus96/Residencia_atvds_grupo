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
    

    /*Apos consultar a internet, pode se encontrar a biblioteca como <cstdio> e as funcoes printf e scanf usadas para obter
    as respostas anteriores de maneiras diretas, mas sendo menos intuitivo em relacao ao iostream. */ // Letra F

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