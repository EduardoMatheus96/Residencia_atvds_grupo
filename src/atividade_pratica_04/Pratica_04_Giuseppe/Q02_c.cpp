#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main() {
    char letra;

    setlocale(LC_ALL, "Portuguese");
    cout << "Digite uma letra para saber:";
    cin >> letra;
    cout << "O caracter : " << letra << " / correspondente código numérico: " << int(letra) ;
    cout << " /";
    cout << " correspondente octal: " << oct << int(letra) ;
    cout << " /";
    cout << " correspondente hexadecimal: " << hex << int(letra) << endl;


    return 0;
}