#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

const int IMAGE_WIDTH = 640;
const int IMAGE_HEIGHT = 480;
const int MAX_INTENSITY = 256;

int generateRandomIntensity() {
    return rand() % MAX_INTENSITY;
}

void generateRandomImage(vector<vector<int>>& image) {
    image.resize(IMAGE_HEIGHT, vector<int>(IMAGE_WIDTH));

    for (int i = 0; i < IMAGE_HEIGHT; ++i) {
        for (int j = 0; j < IMAGE_WIDTH; ++j) {
            image[i][j] = generateRandomIntensity();
        }
    }
}

void buildHistogram(const vector<vector<int>>& image, vector<int>& histogram) {
    histogram.resize(MAX_INTENSITY, 0);

    for (int i = 0; i < IMAGE_HEIGHT; ++i) {
        for (int j = 0; j < IMAGE_WIDTH; ++j) {
            int intensity = image[i][j];
            histogram[intensity]++;
        }
    }
}

void printHistogram(const vector<int>& histogram) {
    for (int i = 0; i < MAX_INTENSITY; ++i) {
        cout << "Intensidade " << i << ": " << histogram[i] << " pixels" << endl;
    }
}

void exercico04Parte01(){
    srand(static_cast<unsigned int>(time(nullptr)));

    vector<vector<int>> image;
    generateRandomImage(image);

    // Constroi histograma
    vector<int> histogram;
    buildHistogram(image, histogram);

    // Chama a função para imprimir o histograma
    printHistogram(histogram);
}