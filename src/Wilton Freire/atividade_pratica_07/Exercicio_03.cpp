#include <iostream>

using namespace std;

int main() 
{
    int x;

    cout << "Digite um numero inteiro: ";
    cin >> x;

    cout << "Os divisores de " << x << " sao: ";

    cout << 1 << ", ";

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            cout << i << ", ";
        }
    }

    cout << x << "." <<endl;

    return 0;
}