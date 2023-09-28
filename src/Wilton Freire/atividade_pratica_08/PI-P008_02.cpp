/*A seguinte expressão em C++ gera um valor de ponto flutuante aleatório entre 10 e 40: 1 + 30.0*(rand()%100)/3000.0.
Supondo que se deseja simular uma rede de estações meteorológicas, implemente uma aplicação que:
a. Armazene num array as temperaturas reportadas por 250 estações meteorológicas.
b. Determine a temperatura máxima e mínima reportadas;
c. Determine a temperatura média entre as 250 estações;
d. Um modelo de predição estima que, dentro de uma hora, as estações que estão marcando temperatura acima da média
vão ficar 1 grau mais quente. Já as que estão marcando abaixo da média vão ficar 2 graus mais frias. Atualize o
array com as temperaturas das estações, de acordo com a previsão do modelo.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define NUM_ESTACOES 250

float gerarTemperaturaAleatoria() {
    return 10 + 30.0 * (1.0 * rand()/RAND_MAX);
    //% 100) / 3000.0;
}

void armazenarTemperaturas(float temperaturas[]) {
    for (int i = 0; i < NUM_ESTACOES; i++) {
        temperaturas[i] = gerarTemperaturaAleatoria();
    cout << temperaturas[i] << endl;
    }
}

float calcularTemperaturaMaxima(float temperaturas[]) {
    float temperaturaMaxima = temperaturas[0];
    for (int i = 1; i < NUM_ESTACOES; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }
    }
    return temperaturaMaxima;
}

float calcularTemperaturaMinima(float temperaturas[]) {
    float temperaturaMinima = temperaturas[0];
    for (int i = 1; i < NUM_ESTACOES; i++) {
        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }
    return temperaturaMinima;
}

float calcularTemperaturaMedia(float temperaturas[]) {
    float somaTemperaturas = 0;
    for (int i = 0; i < NUM_ESTACOES; i++) {
        somaTemperaturas += temperaturas[i];
    }
    return somaTemperaturas / NUM_ESTACOES;
}

void atualizarTemperaturas(float temperaturas[], float temperaturaMedia) {
    for (int i = 0; i < NUM_ESTACOES; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1;
        } else {
            temperaturas[i] -= 2;
        }
    }
}

int main() {
    // Inicializar o gerador de números aleatórios
    srand(time(0)); 

    float temperaturas[NUM_ESTACOES];

    // Armazenar as temperaturas reportadas pelas estações
    armazenarTemperaturas(temperaturas);

    // Determinar a temperatura máxima e mínima reportadas
    float temperaturaMaxima = calcularTemperaturaMaxima(temperaturas);
    float temperaturaMinima = calcularTemperaturaMinima(temperaturas);

    // Determinar a temperatura média entre as estações
    float temperaturaMedia = calcularTemperaturaMedia(temperaturas);

    // Atualizar as temperaturas de acordo com o modelo de predição
    atualizarTemperaturas(temperaturas, temperaturaMedia);

    // Exibir os resultados
    cout << "Temperatuas reportadas: " << NUM_ESTACOES << endl;
    cout << "Temperaturas de todas as estacoes: " << gerarTemperaturaAleatoria() << endl;
    cout << "Temperatura maxima: " << temperaturaMaxima << endl;
    cout << "Temperatura minima: " << temperaturaMinima << endl;
    cout << "Temperatura media: " << temperaturaMedia << endl;

    return 0;
}