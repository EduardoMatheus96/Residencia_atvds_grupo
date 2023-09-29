#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool is_primo(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int conta_primos(const vector<int> &vetor) {
    int count = 0;

    for (int num : vetor) {
        if (is_primo(num))
            ++count;
    }

    return count;
}

void exercicio08(){
    // Inicializa a semente para geração de números aleatórios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gera o tamanho aleatório entre 10 e 20
    int tamanho = rand() % 11 + 10;

    // Cria o vetor com tamanho aleatório e preenche com valores aleatórios entre 1 e 100
    vector<int> vetor(tamanho);
    for (int i = 0; i < tamanho; ++i) {
        vetor[i] = rand() % 100 + 1;
    }

    cout << "Vetor:" << endl;
    for (int num : vetor) {
        cout << num << " ";
    }
    cout << endl;

    // Chama a função para contar os números primos no vetor
    int qtd_primos = conta_primos(vetor);

    cout << "Quantidade de números primos: " << qtd_primos << endl;

}