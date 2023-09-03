#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char letra = '0';
    int i = 0;


    while (i <= 9) {
        cout << "O caracter numerico: " << i << " / correspondente código numérico: " << int(letra) ;
        cout << " /";
        cout << " correspondente octal: " << oct << int(letra) ;
        cout << " /";
        cout << " correspondente hexadecimal: " << hex << int(letra) << endl;
        i++;
        letra++;
    }

    return 0;
}
