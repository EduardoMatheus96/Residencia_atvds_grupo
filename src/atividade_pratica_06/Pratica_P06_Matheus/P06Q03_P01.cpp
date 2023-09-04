#include <iostream>
#include <cctype> // Incluir a biblioteca cctype para usar isprint

using namespace std;

char ch1, ch2, ch3;

int main(void) {
    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    cout << "Digite um outro caractere: " << endl;
    cin >> ch2;

    // Calcula o caractere que antecede ch1
    ch3 = ch1 - 1;

   
    // Verifica se ch3 é um caractere imprimível
    if (isprint(ch3)) {
        cout << "Caractere antecessor " << ch1 << ": " << ch3 << endl;
    // Imprime ch3 em formatos decimal, octal, hexadecimal e como caractere
        cout << "Caractere antecessor " << ch1 << " em formato decimal: " << int(ch3) << endl;
        cout << "Caractere antecessor " << ch1 << " em formato octal: " << oct << int(ch3) << endl;
        cout << "Caractere antecessor " << ch1 << " em formato hexadecimal: " << hex << int(ch3) << endl;
    } else {
        cout << "Caractere antecessor " << ch1 << ": _ (não imprimível)" << endl;
    }

    return 0;
}
