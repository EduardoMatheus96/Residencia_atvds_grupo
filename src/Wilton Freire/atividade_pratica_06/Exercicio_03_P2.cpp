#include <iostream>

using namespace std;

int main() 
{
    int a, b;
    cout << "Entre com um numero inteiro: ";
    cin >> a;
    cout << "Entre com outro numero inteiro: ";
    cin >> b;

    if (a > b) {
        cout << a << " e maior que " << b << endl;
        if (a % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    } else if (b > a) {
        cout << b << " e maior que " << a << endl;
        if (b % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    } else {
        cout << "Ambos os numeros sao iguais." << endl;
        if (b % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    }

    return 0;
}