/*
Exercício 1:
    Escreva uma função chamada maxmin que receba um vetor de números inteiros
    chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
    de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
    elemento de maior valor e o valor do elemento de menor valor.
    Protótipo da Função:

    void maxmin(int vetor[], int n, int &maximo, int &minimo);
    Escreva também uma função principal (main) que use a função maxmin
*/

#include <iostream>
using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = vetor[0]; // Define o primeiro elemento como máximo inicialmente
    minimo = vetor[0]; // Define o primeiro elemento como mínimo inicialmente

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i]; // Atualiza o máximo se encontrar um valor maior
        }

        if (vetor[i] < minimo) {
            minimo = vetor[i]; // Atualiza o mínimo se encontrar um valor menor
        }
    }
}

int main() {
    int vetor[] = {5, 2, 9, 1, 7};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int maximo, minimo;

    maxmin(vetor, n, maximo, minimo);

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
