#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Digite um número inteiro: ";
    cin >> x;

    cout << "Os divisores de " << x << " são: ";

    cout << 1 << endl;

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            cout << i << " ";
        }
    }

    cout << x << endl;

    return 0;
}
