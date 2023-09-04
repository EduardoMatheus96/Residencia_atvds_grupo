#include <iostream>
#include <cctype> 

using namespace std;

char ch1, ch2, ch3;

int main(void) {
    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    cout << "Digite outro caractere: " << endl;
    cin >> ch2;

    // Verifica se ch1 ou ch2 é um dígito e atribui '1' ou ' ' a ch3 usando o operador condicional
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    // Imprime o valor de ch3 na tela
    cout << "Valor de ch3: " << ch3 << endl;

    return 0;
}
