#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

const int largura = 640;
const int altura = 480;
const int intensidadeMaxima = 256;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Crie um arquivo PGM (Portable GrayMap) para a imagem em tons de cinza
    ofstream arquivoPGM("imagem_tons_de_cinza.pgm");
    if (!arquivoPGM) {
        cerr << "Erro ao criar o arquivo PGM." << endl;
        return 1;
    }

    // Gere a imagem e o histograma
    vector<vector<int>> imagem(altura, vector<int>(largura, 0));
    vector<int> histograma(intensidadeMaxima, 0);

    // Escreva o cabeçalho PGM no arquivo
    arquivoPGM << "P2" << endl;
    arquivoPGM << largura << " " << altura << endl;
    arquivoPGM << "255" << endl;

    // Gere os valores dos pixels e escreva no arquivo
    for (int y = 0; y < altura; ++y) {
        for (int x = 0; x < largura; ++x) {
            int intensidade = rand() % intensidadeMaxima; // Gere um valor aleatório entre 0 e 255
            imagem[y][x] = intensidade;
            histograma[intensidade]++;
            arquivoPGM << intensidade << " ";
        }
        arquivoPGM << endl;
    }

    // Feche o arquivo PGM
    arquivoPGM.close();

    // Exiba o histograma
    cout << "Histograma:" << endl;
    for (int i = 0; i < intensidadeMaxima; ++i) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    cout << "Imagem de tons de cinza simulada criada com sucesso." << endl;

    return 0;
}
