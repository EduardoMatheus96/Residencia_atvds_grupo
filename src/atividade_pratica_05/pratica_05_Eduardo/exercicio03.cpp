#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    //Letra a
    int a, b, c;

    //Letra b
    cout << "Insira um numero inteiro: ";
    cin >> a;
    cout << "Insira mais um número inteiro: "; 
    cin >> b;

    //Letra c
    c = a + b;
    cout << "a + b = " << c << endl;

    //Letra d
    c = a * b;
    cout
    << fixed
    << oct 
    << "a * b em octal é igual a: " 
    << c 
    << endl;

    //Letra e
    c = abs(a - b);
    cout << "O valor absoluto da diferença entre a  e b é: " << c << endl;

    //Letra f
    /*
    o C++ fornece a função abs(inteiro) da biblioteca cmath.
    */

    //Letra g
    c = (b != 0) ? (a / b) : 0;

    cout << "O quociente entre a e b é: " << c << endl;

    //Letra h
    cout 
    << a 
    << ((a % b == 0) ? " é" : " não é") 
    << " divisível de forma exata por "
    << b
    << "." 
    << endl;

    

    return 0;
}