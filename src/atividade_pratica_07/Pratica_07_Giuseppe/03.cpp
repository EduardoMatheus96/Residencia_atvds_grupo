#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " são: " <<endl;

    cout << "1 ";
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }


    cout << num << endl;

    return 0;
}