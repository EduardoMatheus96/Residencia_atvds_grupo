#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 100;
const int MAX_RANDOM = 20;

void exercicio02Parte01(){

    srand(static_cast<unsigned int>(time(nullptr)));

    int array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = 1 + rand() % MAX_RANDOM;
    }

    int frequency[MAX_RANDOM + 1] = {0};

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        frequency[array[i]]++;
    }

    // Encontrar o(s) número(s) que aparecem com mais frequência
    int maxFrequency = 0;
    cout << "Numeros que mais vezes aparecem:" << endl;
    for (int i = 1; i <= MAX_RANDOM; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
        }
    }

    for (int i = 1; i <= MAX_RANDOM; ++i) {
        if (frequency[i] == maxFrequency) {
            cout << "Numero: " << i << ", Frequencia: " << frequency[i] << " vezes" << endl;
        }
    }
}