/*
    Exercício 10:
        Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
        vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
        encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
        encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
        para guardar o tamanho do vetor.
*/

#include <iostream>
#include <vector>
using namespace std;

void encontrarPosicoes(const string& str, char letra, vector<int>& posicoes, int* tamanhoVetor) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            posicoes.push_back(i);
        }
    }
    *tamanhoVetor = posicoes.size();
}

int main() {
    string str = "Hello, World!";
    char letra = 'l';
    vector<int> posicoes;
    int tamanhoVetor;

    encontrarPosicoes(str, letra, posicoes, &tamanhoVetor);

    cout << "Posicoes: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;

    cout << "Tamanho do vetor: " << tamanhoVetor << endl;

    return 0;
}
