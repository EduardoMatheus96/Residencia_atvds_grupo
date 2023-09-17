/*
Exercício 12:
    Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
    terceira string C com os caracteres que aparecem tanto em A quanto em B. O
    tamanho das string A e B pode ser diferente.
*/

#include <iostream>
#include <string>
using namespace std;

string caracteresComuns(string A, string B) {
    string C;

    for (char c : A) {
        if (B.find(c) != string::npos) {
            C += c;
        }
    }

    return C;
}

int main() {
    string string1 = "abcdef";
    string string2 = "defghi";
    
    string resultado = caracteresComuns(string1, string2);
    
    cout << "Caracteres comuns: " << resultado << endl;
    
    return 0;
}
