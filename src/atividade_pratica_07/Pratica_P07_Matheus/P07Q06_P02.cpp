#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    char caracter = 'A';
    int numCaracteres = 1;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < numCaracteres; j++) {
            cout << caracter;
            caracter++;
        }
        cout << endl;

        numCaracteres++;
    }

    return 0;
}