/*
Exercício 2: Trabalhando com arrays

    ● A seguinte expressão em C gera valores aleatórios de ponto flutuante entre 0
    e 10: ((float)rand()/RAND_MAX)*10. Utilizando esta expressão implemente
    uma aplicação que:

        a. Simule as notas de uma turma de 15 alunos em uma avaliação e
        guarde num array;

        b. Simule as notas da mesma turma numa segunda avaliação e guarde
        em um segundo array;

        c. Compare as notas de cada aluno na segunda avaliação, em relação à
        primeira, e imprima na tela as mensagens “Melhorou”, “Piorou” ou
        “Manteve a nota” de acordo com o desempenho de cada aluno;

        d. Preencha um um terceiro array com a média de cada aluno nas duas
        avaliações.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed para a geração de números aleatórios
    srand(time(0));

    const int numAlunos = 15;
    float notasPrimeiraAvaliacao[numAlunos];
    float notasSegundaAvaliacao[numAlunos];
    float mediaAlunos[numAlunos];

    // Simula as notas da primeira avaliação e guarda em notasPrimeiraAvaliacao
    cout << "Notas da Primeira Avaliacao:\n";
    for (int i = 0; i < numAlunos; i++) {
        notasPrimeiraAvaliacao[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << i + 1 << ": " << notasPrimeiraAvaliacao[i] << endl;
    }

    // Simula as notas da segunda avaliação e guarda em notasSegundaAvaliacao
    cout << "\nNotas da Segunda Avaliacao:\n";
    for (int i = 0; i < numAlunos; i++) {
        notasSegundaAvaliacao[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << i + 1 << ": " << notasSegundaAvaliacao[i] << endl;
    }

    // Compara as notas e imprime as mensagens de desempenho
    cout << "\nDesempenho dos Alunos na Segunda Avaliacao:\n";
    for (int i = 0; i < numAlunos; i++) {
        if (notasSegundaAvaliacao[i] > notasPrimeiraAvaliacao[i]) {
            cout << "Aluno " << i + 1 << ": Melhorou\n";
        } else if (notasSegundaAvaliacao[i] < notasPrimeiraAvaliacao[i]) {
            cout << "Aluno " << i + 1 << ": Piorou\n";
        } else {
            cout << "Aluno " << i + 1 << ": Manteve a nota\n";
        }
    }

    // Calcula a média de cada aluno nas duas avaliações e guarda em mediaAlunos
    for (int i = 0; i < numAlunos; i++) {
        mediaAlunos[i] = (notasPrimeiraAvaliacao[i] + notasSegundaAvaliacao[i]) / 2;
    }

    cout << "\nMedia de Cada Aluno nas Duas Avaliacaes:\n";
    for (int i = 0; i < numAlunos; i++) {
        cout << "Aluno " << i + 1 << ": " << mediaAlunos[i] << endl;
    }

    return 0;
}
