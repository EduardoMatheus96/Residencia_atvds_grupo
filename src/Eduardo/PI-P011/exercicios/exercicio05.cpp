#include <iostream>
#include <vector>

using namespace std;

void insere_meio(vector<int> &vetor, int elemento) {
    int meio = vetor.size() / 2;  // Calcula o índice do meio

    // Insere o elemento no meio
    vetor.insert(vetor.begin() + meio, elemento);
}

void exercicio05(){
    vector<int> vetor = {1, 2, 3, 4, 5, 6};

    cout << "Vetor antes da inserção:" << endl;
    for (int i : vetor)
        cout << i << " ";
    cout << endl;

    int elemento;
    cout << "Insira o numero a ser inserido no vetor: ";
    cin >> elemento;
    cout << endl;
    // Chama a função para inserir o elemento no meio
    insere_meio(vetor, elemento);

    cout << "Vetor após a inserção:" << endl;
    for (int i : vetor)
        cout << i << " ";
    cout << endl;
}