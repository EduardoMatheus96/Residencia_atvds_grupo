/*
Exercício 11:
    Escreva uma função que codifica uma string em um código secreto. A regra secreta
    de codificação é extremamente simples: substitui cada letra pela letra seguinte (Z é
    codificado como A). Por exemplo, “Estruturas de Dados” se transformaria em
    “Ftusvuvsbt ef Ebept”. Escreva uma função para codificar e uma para decodificar
    cadeias segundo este código. Suas funções devem escrever a string produzida em
    uma string diferente da fornecida como entrada.
*/

#include <iostream>
#include <string>
using namespace std;

string codificarString(const string& texto) {
    string codificado = texto;
    for (char& c : codificado) {
        if (isalpha(c)) {
            if (c == 'Z') {
                c = 'A';
            } else if (c == 'z') {
                c = 'a';
            } else {
                c++;
            }
        }
    }
    return codificado;
}

string decodificarString(const string& texto) {
    string decodificado = texto;
    for (char& c : decodificado) {
        if (isalpha(c)) {
            if (c == 'A') {
                c = 'Z';
            } else if (c == 'a') {
                c = 'z';
            } else {
                c--;
            }
        }
    }
    return decodificado;
}

int main() {
    string mensagem = "Estruturas de Dados";
    string mensagemCodificada = codificarString(mensagem);
    string mensagemDecodificada = decodificarString(mensagemCodificada);
    
    cout << "Mensagem original: " << mensagem << endl;
    cout << "Mensagem codificada: " << mensagemCodificada << endl;
    cout << "Mensagem decodificada: " << mensagemDecodificada << endl;
    
    return 0;
}
