#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(void) {

    // int i = 0;
    // char caracter = '0';
    //Letra B: 
    // while(i != 10){
         // Letra A:
         // cout << " ' " << i << " ' " << " - " << static_cast<int>(caracter + i) <<endl;
    //     cout << "O valor do numero: " 
    //     << " ' " 
    //     << i 
    //     << " ' " 
    //     << " em decimal é:  " 
    //     << static_cast<int>(caracter + i) <<endl;
    //     i++;
    // };

    // i = 0;

    // while(i != 10){
    //     cout << "O valor do numero: " 
    //     << " ' " 
    //     << dec
    //     << i 
    //     << " ' " 
    //     << " em octal é:  " 
    //     << "00"
    //     << oct
    //     << static_cast<int>(caracter + i) <<endl;
    //     i++;
    // };

    // i = 0;

    // while(i != 10){
    //     cout << "O valor do numero: " 
    //     << " ' " 
    //     << dec
    //     << i 
    //     << " ' " 
    //     << " em hexadecimal é:  " 
    //     << "0x"
    //     << hex
    //     << static_cast<int>(caracter + i) <<endl;
    //     i++;
    // };
    
    // Letra C
    char a;
    cout << "Insira um Caracter: ";
    cin >> a;
    cout << "O valor da tabela Ascii do caracter " 
    << "'"
    << a 
    << "'"
    << " é: \n"
    << "Decimal: " 
    << static_cast<int>(a) 
    << "\nOctal: "
    << oct
    << static_cast<int>(a)
    << "\nHexadecimal: "
    << hex
    << static_cast<int>(a)
    << "\n\n"
    <<endl;
    
    return 0;
}