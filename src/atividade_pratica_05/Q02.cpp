#include <iostream>

using namespace std;

int main() {  // A e B
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    cout << "Caractere digitado é "; // Letra C e D
    cout << (isupper(ch1) ? "uma letra maiúscula." :
             (islower(ch1) ? "uma letra minúscula." :
             (isdigit(ch1) ? "um dígito." : "outro tipo de caractere.")));
             

   ch2 = 81;  // Letra E

  
    cout << "\nRepresentações do caractere 81 (ch2):\n";
    cout << "Decimal: " << static_cast<int>(ch2) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "Caractere: " << ch2 << endl;

    
    ch3 = ch2 + 32; // Letra F


    cout << "\nRepresentações do caractere convertido (ch3):\n";
    cout << "Decimal: " << static_cast<int>(ch3) << endl;
    cout << "Octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere: " << ch3 << endl;
    return 0;
}
