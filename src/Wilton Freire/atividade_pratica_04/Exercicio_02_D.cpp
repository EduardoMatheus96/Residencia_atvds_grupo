#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main() {
    char ch;

    setlocale(LC_ALL, "Portuguese");
    
    char caractere1 = 'ç';
    char caractere2 = 'ã';

    cout << "Caractere 1: " << caractere1 << endl;
    cout << "Caractere 2: " << caractere2 << endl;

    cout << "Digite um caracter qualquer:";
    cin >> ch;
    cout << "O caracter : " << ch << " / correspondente codigo decimal: " << int(ch) ;
    cout << " /";
    cout << " correspondente codigo octal: " << oct << int(ch) ;
    cout << " /";
    cout << " correspondente codigo hexadecimal: " << hex << int(ch) << endl;


    return 0;
}