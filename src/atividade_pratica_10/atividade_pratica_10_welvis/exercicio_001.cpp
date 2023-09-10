/*
Sistema de controle de notas de estudantes 
    Etapa 1: individual 
        Elabore um sistema que solicite um limite de alunos N e, em seguida, os nomes e as 
        notas de cada um dos alunos (2 notas para cada). 
        Utilize vectors para os nomes (strings) e para as notas (float) 
        Não permita que sejam inseridos mais do que N estudantes

*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    vector<string> nomes;
    vector<float> notas1, notas2;

    for (int i = 0; i < N; i++) {
        string nome;
        float nota1, nota2;

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome;

        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;

        nomes.push_back(nome);
        notas1.push_back(nota1);
        notas2.push_back(nota2);
    }

    // Exibir os nomes e notas dos alunos
    cout << "\nLista de Alunos e Notas:\n";
    for (int i = 0; i < N; i++) {
        cout << "Aluno: " << nomes[i] << ", Nota 1: " << notas1[i] << ", Nota 2: " << notas2[i] << endl;
    }

    return 0;
}
