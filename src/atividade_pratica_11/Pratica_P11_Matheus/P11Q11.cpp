#include <iostream>
#include <vector>
#include <string>

using namespace std;

string codificador(string frase){

    string codificada;
    for (int i = 0; i < frase.length(); i++)
    { 
        if (frase[i] == 'z'){
            codificada += 'a';
        }
        else codificada += frase[i] + 1 ;
    }
    return codificada;
}
string decodificador(string frase){
    string decodificada;
    for (int i = 0; i < frase.length(); i++)
    { 
        if (frase[i] == 'a'){
            decodificada += 'z';
        }
        else decodificada += frase[i] - 1 ;
    }
    return decodificada;
}

int main(void){

    string frase;
    cout << "Digite uma frase sem espaco: " << endl;
    getline(cin, frase);

    string codificada = codificador(frase);
    string decodificada = decodificador(frase);

    cout << "A frase original eh: " << frase << endl;
    cout << "A frase codificada eh: " << codificada << endl;
    cout << "A frase decodificada eh: " << decodificada << endl;

    return 0;
}