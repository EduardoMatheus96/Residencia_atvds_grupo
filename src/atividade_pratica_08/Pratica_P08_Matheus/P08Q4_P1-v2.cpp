#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    const int largura = 640;
    const int altura = 480;

    int imagem[altura][largura];

    for (int y = 0; y < altura; y++) {
        for (int x = 0; x < largura; x++) {
            imagem[y][x] = rand() % 256; 
        }
    }

    vector<int> histograma(256, 0);

    for (int y = 0; y < altura; y++) {
        for (int x = 0; x < largura; x++) {
            int intensidade = imagem[y][x];
            histograma[intensidade]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
