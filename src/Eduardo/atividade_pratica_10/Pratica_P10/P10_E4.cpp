#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Função para ordenar os nomes e suas respectivas notas em ordem alfabética
void ordenarAlunos(vector<string> &nomes, vector<float> &notas) {
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

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

int main() {
    int limiteAlunos;
    cout << "Digite o limite de alunos (N): ";
    cin >> limiteAlunos;

    while (limiteAlunos < 1 || limiteAlunos > 100) {
        cout << "Digite um valor entre 1 e 100: ";
        cin >> limiteAlunos;
    }

    vector<string> nomes;
    vector<float> notas;

    char incluirAluno = 's';
    while (incluirAluno == 's') {
        if (nomes.size() >= limiteAlunos) {
            cout << "Limite de alunos atingido." << endl;
            break;
        }

        string nome;
        float nota1, nota2;

        cout << "Digite o nome do aluno: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;

        nomes.push_back(nome);
        notas.push_back(nota1);
        notas.push_back(nota2);

        cout << "Deseja incluir mais alunos (s/n)? ";
        cin >> incluirAluno;
    }

    ordenarAlunos(nomes, notas);

    char excluirAluno;
    do {
        cout << "Deseja excluir algum aluno (s/n)? ";
        cin >> excluirAluno;

        if (excluirAluno == 's') {
            string nomeParaExcluir;
            cout << "Digite o nome do aluno a ser excluído: ";
            cin.ignore();
            getline(cin, nomeParaExcluir);

            // Encontre o nome na lista e exclua-o
            auto it = find(nomes.begin(), nomes.end(), nomeParaExcluir);
            if (it != nomes.end()) {
                int index = distance(nomes.begin(), it);

                nomes.erase(nomes.begin() + index);
                notas.erase(notas.begin() + (2 * index), notas.begin() + (2 * index + 2));

                cout << "Aluno excluído com sucesso." << endl;
            } else {
                cout << "Aluno não encontrado." << endl;
            }
        }
    } while (excluirAluno != 'n');

    char alterarNota;
    do {
        cout << "Deseja alterar alguma nota (s/n)? ";
        cin >> alterarNota;

        if (alterarNota == 's') {
            string nomeParaAlterar;
            cout << "Digite o nome do aluno cuja nota será alterada: ";
            cin.ignore();
            getline(cin, nomeParaAlterar);

            // Encontre o nome na lista
            auto it = find(nomes.begin(), nomes.end(), nomeParaAlterar);
            if (it != nomes.end()) {
                int index = distance(nomes.begin(), it);

                cout << "Notas atuais do aluno " << nomeParaAlterar << ": " << notas[2 * index] << " e " << notas[2 * index + 1] << endl;

                char opcao;
                do {
                    cout << "Alterar a primeira nota (1), a segunda nota (2) ou nenhuma (0)? ";
                    cin >> opcao;

                    if (opcao == '1') {
                        cout << "Digite a nova primeira nota: ";
                        cin >> notas[2 * index];
                    } else if (opcao == '2') {
                        cout << "Digite a nova segunda nota: ";
                        cin >> notas[2 * index + 1];
                    } else if (opcao != '0') {
                        cout << "Opção inválida. Use '1', '2' ou '0'." << endl;
                    }
                } while (opcao != '0');

                cout << "Notas atualizadas do aluno " << nomeParaAlterar << ": " << notas[2 * index] << " e " << notas[2 * index + 1] << endl;

                // Recalcula a média
                float novaMedia = calcularMedia(notas[2 * index], notas[2 * index + 1]);
                cout << "Média atualizada do aluno " << nomeParaAlterar << ": " << novaMedia << endl;

                // Verifica se o aluno está aprovado ou reprovado
                cout << "Situação: " << (novaMedia >= 7.0 ? "Aprovado" : "Reprovado") << endl;
            } else {
                cout << "Aluno não encontrado." << endl;
            }
        } 
    } while (alterarNota != 'n');   

    // Exibir a lista de alunos e notas
    cout << "\nListagem dos alunos e notas ordenados em ordem alfabética:\n";
    for (size_t i = 0; i < nomes.size(); ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        float media = calcularMedia(notas[2 * i], notas[2 * i + 1]);
        cout << "Média: " << media << endl;
        cout << "Situação: " << (media >= 7.0 ? "Aprovado" : "Reprovado") << endl;
        cout << endl;
    }

    return 0;
}