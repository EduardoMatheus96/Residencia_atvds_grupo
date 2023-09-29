#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

const int largura = 640;
const int altura = 480;
const int intensidadeMaxima = 256;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    ofstream arquivoPGM("imagem_tons_de_cinza.pgm");
    if (!arquivoPGM)
    {
        cerr << "Erro ao criar o arquivo PGM." << endl;
        return 1;
    }

    vector<vector<int>> imagem(altura, vector<int>(largura, 0));
    vector<int> histograma(intensidadeMaxima, 0);

    arquivoPGM << "P2" << endl;
    arquivoPGM << largura << " " << altura << endl;
    arquivoPGM << "255" << endl;

    for (int y = 0; y < altura; ++y)
    {
        for (int x = 0; x < largura; ++x)
        {
            int intensidade = rand() % intensidadeMaxima;
            imagem[y][x] = intensidade;
            histograma[intensidade]++;
            arquivoPGM << intensidade << " ";
        }
        arquivoPGM << endl;
    }

    arquivoPGM.close();

    cout << "Histograma:" << endl;
    for (int i = 0; i < intensidadeMaxima; ++i)
    {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    cout << "Imagem de tons de cinza simulada criada com sucesso." << endl;

    return 0;
}