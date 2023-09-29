#include <iostream>
#include <vector>

using namespace std;

void maxmin(const vector<int>& vetor, int& maximo, int& minimo) {
    if (vetor.empty()) {
        cerr << "Vetor vazio." << endl;
        return;
    }

    maximo = vetor[0];  // Inicializa maximo com o primeiro elemento do vetor
    minimo = vetor[0];  // Inicializa minimo com o primeiro elemento do vetor

    for (size_t i = 1; i < vetor.size(); ++i) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

void exercicio01() {
    vector<int> vetor = {10, 5, 20, -3, 8};
    int maximo, minimo;

    // Chama a função para calcular o máximo e o mínimo do vetor
    maxmin(vetor, maximo, minimo);

    // Exibe os resultados
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;


}

/*
Coesão:
A coesão desta função é alta, pois a função tem uma única responsabilidade bem definida: 
calcular o máximo e o mínimo de um vetor de inteiros.

Acoplamento:
O acoplamento nesta função é moderado. A função depende do vetor de inteiros 
e do seu tamanho para calcular o máximo e o mínimo. No entanto, não depende de 
nenhum estado externo ou outras funções para realizar sua tarefa.
*/