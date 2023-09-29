#include <iostream>
#include <string>

using namespace std;

string letrasEmComum(string a, string b) {
    string c;

    for (char letra1 : a) {
        for (char letra2 : b) {
            if (letra1 == letra2) {
                if (c.find(letra1) == string::npos) {
                    c += letra1;
                }
            }
        }
    }

    return c;
}

void exercicio12()
{
    string a = "testando os caracteres comuns";
    string b = "existem caracteres em comum";

    string c = letrasEmComum(a, b);
    cout << "Letras em c: " << c << endl;

}