#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_ESTACOES = 250;
const double TEMPERATURA_MIN = 10.0;
const double TEMPERATURA_MAX = 40.0;

double gerarTemperaturaAleatoria()
{
    return TEMPERATURA_MIN + static_cast<double>(rand()) / RAND_MAX * (TEMPERATURA_MAX - TEMPERATURA_MIN);
}

void atualizarTemperaturas(double temperaturas[], double media)
{
    for (int i = 0; i < NUM_ESTACOES; ++i)
    {
        if (temperaturas[i] > media)
        {
            temperaturas[i] += 1.0; // Estações acima da média ficam 1 grau mais quentes
        }
        else
        {
            temperaturas[i] -= 2.0; // Estações abaixo da média ficam 2 graus mais frias
        }
    }
}

void parte02()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    double temperaturas[NUM_ESTACOES];

    // Preenche o array com temperaturas aleatórias
    for (int i = 0; i < NUM_ESTACOES; ++i)
    {
        temperaturas[i] = gerarTemperaturaAleatoria();
    }

    // Determina a temperatura máxima, mínima e média
    double temperaturaMaxima = temperaturas[0];
    double temperaturaMinima = temperaturas[0];
    double somaTemperaturas = temperaturas[0];

    for (int i = 1; i < NUM_ESTACOES; ++i)
    {
        if (temperaturas[i] > temperaturaMaxima)
        {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima)
        {
            temperaturaMinima = temperaturas[i];
        }
        somaTemperaturas += temperaturas[i];
    }

    double temperaturaMedia = somaTemperaturas / NUM_ESTACOES;

    cout << "Temperatura Maxima: " << temperaturaMaxima << " graus Celsius" << endl;
    cout << "Temperatura Minima: " << temperaturaMinima << " graus Celsius" << endl;
    cout << "Temperatura Media: " << temperaturaMedia << " graus Celsius" << endl;

    // Atualiza as temperaturas de acordo com o modelo de predição
    atualizarTemperaturas(temperaturas, temperaturaMedia);

    cout << "\nTemperaturas atualizadas:" << endl;
    for (int i = 0; i < NUM_ESTACOES; ++i)
    {
        cout << "Estacao " << i + 1 << ": " << temperaturas[i] << " graus Celsius" << endl;
    }
}