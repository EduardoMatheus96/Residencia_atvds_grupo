#include <iostream>
#include <map>
#include <string>
#include <limits> 

using namespace std;

string codificar(const string &texto) {
    string resultado = texto;
    for (char &c : resultado) {
        if (isalpha(c)) {
            c = (c == 'Z' || c == 'z') ? c - 25 : c + 1;
        }
    }
    return resultado;
}

string decodificar(const string &texto) {
    string resultado = texto;
    for (char &c : resultado) {
        if (isalpha(c)) {
            c = (c == 'A' || c == 'a') ? c + 25 : c - 1;
        }
    }
    return resultado;
}

void exercicio11(){
    string texto;
    

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Pedir ao usuário para inserir um texto
    cout << "Digite o texto: ";
    getline(cin, texto);

    cout << "Texto original: " << texto << endl;

    // Codificar o texto
    string texto_codificado = codificar(texto);
    cout << "Texto codificado: " << texto_codificado << endl;

    // Decodificar o texto
    string texto_decodificado = decodificar(texto_codificado);
    cout << "Texto decodificado: " << texto_decodificado << endl;
}