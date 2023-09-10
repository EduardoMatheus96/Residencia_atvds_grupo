/*
Exercício 2: Trabalhando com arrays

    ● A seguinte expressão em C++ gera um valor de ponto flutuante aleatório
    entre 10 e 40: 1 + 30.0*(rand()%100)/3000.0. Supondo que se
    deseja simular uma rede de estações meteorológicas, implemente uma
    aplicação que:

        a. Armazene num array as temperaturas reportadas por 250 estações
        meteorológicas.

        b. Determine a temperatura máxima e mínima reportadas;

        c. Determine a temperatura média entre as 250 estações;

        d. Um modelo de predição estima que, dentro de uma hora, as estações
        que estão marcando temperatura acima da média vão ficar 1 grau
        mais quente. Já as que estão marcando abaixo da média vão ficar 2
        graus mais frias. Atualize o array com as temperaturas das estações,
        de acordo com a previsão do modelo

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed para a geração de números aleatórios
    srand(time(0));

    const int numEstacoes = 250;
    double temperaturas[numEstacoes];

    // Preenche o array com temperaturas aleatórias entre 10 e 40 graus
    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 1000.0;
    }

    // Determina a temperatura máxima e mínima reportadas
    double temperaturaMaxima = temperaturas[0];
    double temperaturaMinima = temperaturas[0];

    for (int i = 1; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }

    // Determina a temperatura média entre as 250 estações
    double temperaturaMedia = 0.0;

    for (int i = 0; i < numEstacoes; i++) {
        temperaturaMedia += temperaturas[i];
    }

    temperaturaMedia /= numEstacoes;

    cout << "Temperatura maxima reportada: " << temperaturaMaxima << " graus Celsius\n";
    cout << "Temperatura minima reportada: " << temperaturaMinima << " graus Celsius\n";
    cout << "Temperatura media reportada: " << temperaturaMedia << " graus Celsius\n";

    // Atualiza as temperaturas de acordo com o modelo de predição
    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0; // Aumenta 1 grau se acima da média
        } else {
            temperaturas[i] -= 2.0; // Diminui 2 graus se abaixo da média
        }
    }

    cout << "\nTemperaturas atualizadas de acordo com o modelo de predicao:\n";
    for (int i = 0; i < numEstacoes; i++) {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << " graus Celsius\n";
    }

    return 0;
}
