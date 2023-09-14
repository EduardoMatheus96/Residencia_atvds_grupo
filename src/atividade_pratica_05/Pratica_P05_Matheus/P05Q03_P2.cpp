#include <iostream>
#include <limits>

using namespace std;

int main() {
    int a;
    cout << "Digite um numero inteiro: " << endl;
    cin >> a;

    cout << (a > numeric_limits<short int>::max() ? "Eh maior que um short int!" : "Este valor pertence ao intervalo dos short int!") << endl;

    return 0;
}