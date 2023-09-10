/*
Exercício 2: Trabalhando com arrays

    ● A seguinte expressão em C++ gera um valor inteiro aleatório entre 1 e 20: 1
    + rand()%20. Utilizando esta expressão desenvolva uma aplicação que:

        a. Preencha um array com 100 elementos de tipo int, com valores
        aleatoriamente gerados entre 1 e 20;

        b. Utilize um array de 20 posições para determinar quantas vezes se
        repete cada um dos possíveis valores gerados no array;

        c. Determine qual ou quais os números que mais vezes aparecem no
        array;

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed para a geração de números aleatórios
    srand(time(0));

    const int tamanhoArray = 100;
    int array[tamanhoArray];

    // Preencher o array com valores aleatórios entre 1 e 20
    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = 1 + rand() % 20;
    }

    // Array para contar quantas vezes cada valor aparece
    const int tamanhoContagem = 20;
    int contagem[tamanhoContagem] = {0};

    // Contagem de quantas vezes cada valor aparece no array
    for (int i = 0; i < tamanhoArray; i++) {
        contagem[array[i] - 1]++;
    }

    // Encontrar o valor (ou valores) que mais vezes aparece no array
    int maxContagem = 0;
    int valorMaisFrequente = 0;

    for (int i = 0; i < tamanhoContagem; i++) {
        if (contagem[i] > maxContagem) {
            maxContagem = contagem[i];
            valorMaisFrequente = i + 1;
        }
    }

    cout << "Valores gerados no array e suas contagens:\n";

    for (int i = 0; i < tamanhoContagem; i++) {
        cout << "Valor " << i + 1 << ": " << contagem[i] << " vezes\n";
    }

    cout << "\nValor mais frequente: " << valorMaisFrequente << " (apareceu " << maxContagem << " vezes)\n";

    return 0;
}
