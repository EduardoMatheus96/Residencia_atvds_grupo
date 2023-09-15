#include <iostream>
#include <string>
#include <vector>

using namespace std;

void bubbleSort(vector<string> &nomes, vector<float> &notas) {
    int n = nomes.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (nomes[j] > nomes[j + 1]) {
                // Troque os nomes
                swap(nomes[j], nomes[j + 1]);

                // Mantenha as notas correspondentes na mesma ordem
                swap(notas[2 * j], notas[2 * j + 2]);
                swap(notas[2 * j + 1], notas[2 * j + 3]);
            }
        }
    }
}

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

    // Chame a função bubbleSort para ordenar os nomes
    bubbleSort(nomes, notas);

    // Exibir os nomes e notas dos alunos ordenados
    cout << "\nListagem dos alunos e notas ordenados em ordem alfabética:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        cout << endl;
    }

    return 0;
}