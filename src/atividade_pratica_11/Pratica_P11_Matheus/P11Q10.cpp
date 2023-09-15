#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> qntLetras(string frase, char letra, int &tamanho){

    vector<int> posicoes;
    for (int i= 0; i < frase.length(); i++){
        if (frase[i] == letra){
            posicoes.push_back(i);
        }
    }
    tamanho = posicoes.size();
    return posicoes;
}

int main(void){

    string frase;
    char letra;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Digite uma letra: ";
    cin >> letra;

    int tamanho;
    vector<int> posicoes = qntLetras(frase, letra, tamanho);

    cout << "Posicoes onde a letra foi encontrada:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;

    return 0;
}