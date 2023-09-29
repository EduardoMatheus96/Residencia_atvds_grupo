#include <iostream>
#include <cctype>

using namespace std;

char ch1, ch2, ch3;

int main(void) 
{
    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    cout << "Digite um outro caractere: " << endl;
    cin >> ch2;

    ch3 = ch1 - 1;
   
    if (isprint(ch3)) {
        cout << "Caractere antecessor " << ch1 << ": " << ch3 << endl;
        cout << "Caractere antecessor " << ch1 << " em formato decimal: " << int(ch3) << endl;
        cout << "Caractere antecessor " << ch1 << " em formato octal: " << oct << int(ch3) << endl;
        cout << "Caractere antecessor " << ch1 << " em formato hexadecimal: " << hex << int(ch3) << endl;
    } else {
        cout << "Caractere antecessor " << ch1 << ": _ (nao imprimivel)" << endl;
    }

    return 0;
}