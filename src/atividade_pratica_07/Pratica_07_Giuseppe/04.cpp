#include <iostream>

using namespace std;

int main() {
    cout << "Números primos de 1 a 100:" << endl;

    for (int i = 2; i <= 100; i++) {
        bool ehPrimo = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = false;
                break;
            }
        }

        if (ehPrimo) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}