#include <iostream>
#include <limits>

using namespace std;

int main() {
    int a;
    cout << "Digite um número inteiro: " << endl;
    cin >> a;

    cout << (a > numeric_limits<short int>::max() ? "É maior que um short int!" : "Este valor pertence ao intervalo dos short int!") << endl;

    return 0;
}