#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    vector<string> nomes;
    vector<float> notas;

    for (int i = 0; i < N; ++i) {
        string nome;
        float nota1, nota2;

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin.ignore();
        getline(cin, nome);

        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;

        nomes.push_back(nome);
        notas.push_back(nota1);
        notas.push_back(nota2);
    }

    // Exibir os nomes e notas dos alunos
    cout << "\nListagem dos alunos e notas:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        cout << endl;
    }

    return 0;