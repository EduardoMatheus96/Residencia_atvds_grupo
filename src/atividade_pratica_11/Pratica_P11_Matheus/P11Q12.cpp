#include <iostream>
#include <string>

using namespace std;

string letrasEmComum(string a, string b) {
    string c;

    for (char letra1 : a) {
        for (char letra2 : b) {
            if (letra1 == letra2) {
                //Função que adiciona as letras iguais que ainda não estão, na string C
                if (c.find(letra1) == string::npos) {
                    c += letra1;
                }
            }
        }
    }

    return c;
}

int main() {
    string a = "abcdef";
    string b = "bcdghij";

    string c = letrasEmComum(a, b);
    cout << "Letras em c: " << c << endl;

    return 0;
}