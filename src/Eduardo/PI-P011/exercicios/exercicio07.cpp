#include <iostream>
#include <vector>

using namespace std;

void multiplica_por_n(vector<int> &vetor, int multiplicador) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        vetor[i] *= multiplicador;
    }
}

void exercicio07(){
    vector<int> vetor = {1, 2, 3, 4, 5};
    int multiplicador;

    cout << "Informe o valor a ser multiplicado: ";
    cin >> multiplicador;
    cout << endl;

    cout << "Vetor antes da multiplicação:" << endl;
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;

    // Chama a função para multiplicar os elementos do vetor
    multiplica_por_n(vetor, multiplicador);

    cout << "Vetor após a multiplicação:" << endl;
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;
}