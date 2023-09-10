/*
Exercício 4: Manipulando arrays multidimensionais
    ● A seguinte expressão em C++ gera um valor inteiro aleatório entre 0 e 255:
    rand()%256. Utilizando esta expressão desenvolva uma aplicação que:
    
        a. Simule a captura de uma imagem de 640 por 480 pixels, onde a
        intensidade de iluminação é representada como um valor inteiro entre
        0 (preto ou sem iluminação) e 255 (branco ou totalmente iluminado).

        Pesquise mais sobre imagens em tons de cinza;

        b. Um histograma permite analisar a distribuição de frequências de cada
        intensidade em uma imagem. Pesquise mais sobre histogramas e
        implemente o código para construir o histograma da imagem que foi
        gerada;

    ● Como parte do exercício 3 foi se trabalhou com a geração de strings
    aleatórias. Modifique a sua implementação para:

        a. Em vez de gerar apenas duas strings, gerar uma lista de 10 strings
        aleatórias;

        b. Substitua o primeiro caractere de cada string por maiúscula;

*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int IMAGE_WIDTH = 640;
const int IMAGE_HEIGHT = 480;

// Função para gerar um valor aleatório entre 0 e 255
int randomIntensity() {
    return rand() % 256;
}

// Função para construir o histograma a partir da imagem
vector<int> buildHistogram(const vector<vector<int>>& image) {
    vector<int> histogram(256, 0); // Inicializa o histograma com zeros

    for (const vector<int>& row : image) {
        for (int intensity : row) {
            histogram[intensity]++;
        }
    }

    return histogram;
}

int main() {
    srand(time(nullptr)); // Semente para geração de números aleatórios

    // Criação da imagem
    vector<vector<int>> image(IMAGE_HEIGHT, vector<int>(IMAGE_WIDTH));
    for (int i = 0; i < IMAGE_HEIGHT; i++) {
        for (int j = 0; j < IMAGE_WIDTH; j++) {
            image[i][j] = randomIntensity();
        }
    }

    // Construção do histograma
    vector<int> histogram = buildHistogram(image);

    // Exibição do histograma
    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histogram[i] << " pixels" << endl;
    }

    return 0;
}
