
// Questão 2. a) e b)

#include <iostream>

using namespace std;

int main() {  
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

// Questão 2. c) e d)
    cout << "Caractere digitado eh "; 
    cout << (isupper(ch1) ? "uma letra maiuscula." :
             (islower(ch1) ? "uma letra minuscula." :
             (isdigit(ch1) ? "um digito." : "outro tipo de caractere.")));
             
// Questão 2. e)
   ch2 = 81;  
    cout << "\nRepresentacoes do caractere 81 (ch2):\n";
    cout << "Decimal: " << static_cast<int>(ch2) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;
 
 // Questão 2. f)
    ch3 = ch2 + 32; 
     cout << "\nRepresentacoes do caractere convertido (ch3):\n";
     cout << "Decimal: " << static_cast<int>(ch3) << endl;
     cout << "Octal: " << oct << static_cast<int>(ch3) << endl;
     cout << "Hexadecimal: " << hex << static_cast<int>(ch3) << endl;
     cout << "Caractere: " << ch3 << endl;

    return 0;
}
