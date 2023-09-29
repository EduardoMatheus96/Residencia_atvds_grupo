#include <iostream>
#include <vector>

using namespace std;

vector<int> intercala(const vector<int> &vet1, const vector<int> &vet2) {
    vector<int> vetor_intercalado;
    size_t tam1 = vet1.size();
    size_t tam2 = vet2.size();
    size_t i = 0, j = 0;

    // Intercala os elementos dos vetores
    while (i < tam1 && j < tam2) {
        vetor_intercalado.push_back(vet1[i++]);
        vetor_intercalado.push_back(vet2[j++]);
    }

    // Se um dos vetores tem mais elementos, copia o restante
    while (i < tam1) {
        vetor_intercalado.push_back(vet1[i++]);
    }

    while (j < tam2) {
        vetor_intercalado.push_back(vet2[j++]);
    }

    return vetor_intercalado;
}

void exercicio06(){
    vector<int> vet1 = {1, 3, 5};
    vector<int> vet2 = {10, 4, 6, 8};

    // Chama a função para intercalar os vetores
    vector<int> vetor_intercalado = intercala(vet1, vet2);

    cout << "Vetor intercalado:" << endl;
    for (int num : vetor_intercalado) {
        cout << num << " ";
    }
    cout << endl;
}