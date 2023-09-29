#include <iostream>

using namespace std;

int main() 
{
    int altura;
    
    cout << "Digite o valor dimensionador do padrao: ";
    cin >> altura;

    cout << "\nPadrao i):\n";
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPadrao ii):\n";
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPadrao iii):\n";
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}