#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Entre com um número inteiro: ";
    cin >> a;
    cout << "Entre com outro número inteiro: ";
    cin >> b;

    if (a > b) {
        cout << a << " é maior que " << b << endl;
        if (a % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    } else if (b > a) {
        cout << b << " é maior que " << a << endl;
        if (b % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    } else {
        cout << "Ambos os números são iguais." << endl;
        if (b % 2 == 0) {
            cout << "PAR" << endl;
        } else {
            cout << "IMPAR" << endl;
        }
    }

    return 0;
}