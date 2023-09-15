#include <iostream>
#include <vector>

using namespace std;

void multiplicaVetor(vector<int> &vetor,int qnt, int multiplicador) {
    for (int i = 0; i < qnt; i++) {
        vetor[i] *= multiplicador;
    }
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<int> vetor(tamanho);

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    int multiplicador;
    cout << "Digite o multiplicador: ";
    cin >> multiplicador;

    multiplicaVetor(vetor, tamanho, multiplicador);

    cout << "Vetor resultado: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}