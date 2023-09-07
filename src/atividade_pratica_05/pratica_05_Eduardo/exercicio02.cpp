#include <iostream>
#include <cctype>
using namespace std;

int main(void){
    //Letra a
    char ch1, ch2, ch3;
    
    //Letra b
    cout << "Insira um caracter: ";
    cin >> ch1;

    //Letra c
    isdigit(ch1) 
    ? cout << "É um digito !" << endl 
    : !isalpha(ch1)
    ? cout << "Não é um caracter alfabetico !" 
    : isupper(ch1) 
    ? cout << "É um caracter maiusculo !" << endl 
    : cout << "É um caracter minusculo" << endl;
    
    //Letra d
    /*
    Resposta: Sim fornece eu ja usei na questao anterior atraves da biblioteca cctype
    */

    //Letra e
    ch2 = 81;
    cout << "Imprimindo o caracter ch2: " << ch2 << endl;
    cout 
    << "Imprimindo o caracter ch2 em decimal: " 
    << static_cast<int>(ch2) 
    << endl;

    cout 
    << fixed
    << oct
    << "Imprimindo o caracter ch2 em octal: " 
    << static_cast<int>(ch2) 
    << endl;

    cout 
    << fixed
    << hex
    << "Imprimindo o caracter ch2 em hexadecimal: " 
    << "0x"
    << static_cast<int>(ch2) 
    << endl;

    //Letra f
    ch3 = tolower(ch2);
    cout << "Imprimindo o caracter ch3: " << ch3 << endl;
    cout 
    << "Imprimindo o caracter ch3 em decimal: " 
    << static_cast<int>(ch3) 
    << endl;

    cout 
    << fixed
    << oct
    << "Imprimindo o caracter ch3 em octal: " 
    << static_cast<int>(ch3) 
    << endl;

    cout 
    << fixed
    << hex
    << "Imprimindo o caracter ch3 em hexadecimal: " 
    << "0x"
    << static_cast<int>(ch3) 
    << endl;


    return 0;
}