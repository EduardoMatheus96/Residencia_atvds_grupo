//Questão 2. a) e b) Imprimindo código número e representações octal e hexadecimal

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

//c) Acrescentando possibilidade de ler caractere qualquer, imprimindo no mesmo modelo anterior 

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

//d) d. Pesquise como fazer para armazenar uma variável os caracteres especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um exemplo que demonstra como usar este recurso 