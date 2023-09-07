#include <iostream>
using namespace std;

int main(void){
    float floatBool = 3.14;
    double doubleBool = 4.5;
    int intBool = 8;

    cout << "Numero inteiro acima de 0 convertido em bool é: "
    << static_cast<bool>(intBool)
    << endl;
    // Nesse caso numeros inteiros acima de zero sao representados como 1 ou seja True
    
    intBool = 0;
    cout << "Numero inteiro igual a 0 convertido em bool é: "
    << static_cast<bool>(intBool)
    << endl;
    // Nesse caso numero inteiro igual a 0 é representado como false 
    
    intBool = -1;
    cout << "Numero inteiro igual a 0 convertido em bool é: "
    << static_cast<bool>(intBool)
    << endl;
    // Nesse caso numero inteiro abaixo de 0 é representado como true 

    cout << "Numero float acima de 0 convertido em bool é: "
    << static_cast<bool>(floatBool)
    << endl;
    // Nesse caso numeros float acima de zero sao representados como 1 ou seja True

    /* 
        Já da para ver um padrao em que valores int , float e double diferentes de 0
        sao representados como True e numero igual a 0 como false.
    */

    char charBool = 'a';
    cout << "Um caracter convertido em bool é: "
    << static_cast<bool>(charBool)
    << endl;
    // Um valor caracter convertido em Bool é True

    charBool = '\0';
    cout << "Um caracter convertido em bool é: "
    << static_cast<bool>(charBool)
    << endl;
    // O caracter \0 é convertido em false

    return 0;
}