#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_ALUNOS = 15;

float gerarNotaAleatoria()
{
    return ((float)rand() / RAND_MAX) * 10;
}

void compararNotas(float notas1[], float notas2[], float medias[])
{
    for (int i = 0; i < NUM_ALUNOS; ++i)
    {
        medias[i] = (notas1[i] + notas2[i]) / 2;

        if (notas2[i] > notas1[i])
        {
            cout << "Aluno " << i + 1 << ": Piorou" << endl;
        }
        else if (notas2[i] < notas1[i])
        {
            cout << "Aluno " << i + 1 << ": Melhorou" << endl;
        }
        else
        {
            cout << "Aluno " << i + 1 << ": Manteve a nota" << endl;
        }
    }
}

void parte03()
{
    srand(time(NULL));

    float notas1[NUM_ALUNOS];
    float notas2[NUM_ALUNOS];
    float medias[NUM_ALUNOS];

    // Simula as notas da primeira avaliação
    cout << "Notas da primeira avaliacao:" << endl;
    for (int i = 0; i < NUM_ALUNOS; ++i)
    {
        notas1[i] = gerarNotaAleatoria();
        cout << "Aluno " << i + 1 << ": " << notas1[i] << endl;
    }

    // Simula as notas da segunda avaliação
    cout << "\nNotas da segunda avaliacao:" << endl;
    for (int i = 0; i < NUM_ALUNOS; ++i)
    {
        notas2[i] = gerarNotaAleatoria();
        cout << "Aluno " << i + 1 << ": " << notas2[i] << endl;
    }

    // Compara as notas e calcula as médias
    cout << "\nComparacao das notas:" << endl;
    compararNotas(notas1, notas2, medias);

    // Imprime as médias
    cout << "\nMedias das avaliacoes:" << endl;
    for (int i = 0; i < NUM_ALUNOS; ++i)
    {
        cout << "Aluno " << i + 1 << ": " << medias[i] << endl;
    }
}