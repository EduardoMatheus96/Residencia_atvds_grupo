#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

int main() {
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;
    while (N < 1 || N > 100) {
        cout << "Digite um valor entre 1 e 100: ";
        cin >> N;
        return 1;
    }
    vector<string> nomes;
    vector<float> notas;

    char incluirAluno = 's';
    while (incluirAluno == 's') {
        if (nomes.size() >= N) {
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


    }

    bubbleSort(nomes, notas);

    char excluirAluno = 's';
    while (excluirAluno == 's') {
        cout << "Deseja excluir algum aluno (s/n)? ";
        cin >> excluirAluno;

        if (excluirAluno == 's') {
            string nomeParaExcluir;
            cout << "Digite o nome do aluno a ser excluído: ";
            cin.ignore();
            getline(cin, nomeParaExcluir);

            // Encontre o nome na lista e exclua-o
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaExcluir);
            if (it != nomes.end()) {
                int index = distance(nomes.begin(), it);

                nomes.erase(nomes.begin() + index);
                notas.erase(notas.begin() + (2 * index), notas.begin() + (2 * index + 2));

                cout << "Aluno excluído com sucesso." << endl;

                cout << "Deseja incluir mais alunos (s/n)? ";
                cin >> incluirAluno;
                while (incluirAluno == 's') {
                string nome;
                float nota1, nota2;
                if (nomes.size() >= N) {
                cout << "Limite de alunos atingido." << endl;
                break;}
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
            }


            } else {
                cout << "Aluno não encontrado." << endl;
            }
        }
    }
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
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaAlterar);
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
                if (novaMedia >= 7.0) {
                    cout << "Situação: Aprovado" << endl;
                } else {
                    cout << "Situação: Reprovado" << endl;
                }

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

/*
//Implementação da exclusão e inclusão de alunos

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
    char excluirAluno;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    vector<string> nomes;
    vector<float> notas;

    char incluirAluno = 's';
    while (incluirAluno == 's') {
        if (nomes.size() >= N) {
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

    do {
        
        cout << "Deseja excluir algum aluno (s/n)? ";
        fflush(stdin);
        scanf("$%c", &excluirAluno);
        // cin >> excluirAluno;

        if (excluirAluno == 's') {
            string nomeParaExcluir;
            cout << "Digite o nome do aluno a ser excluído: ";
            cin.ignore();
            getline(cin, nomeParaExcluir);

            // Encontre o nome na lista e exclua-o
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaExcluir);
            if (it != nomes.end()) {
                int index = distance(nomes.begin(), it);

                nomes.erase(nomes.begin() + index);
                notas.erase(notas.begin() + (2 * index), notas.begin() + (2 * index + 2));

                cout << "Aluno excluído com sucesso." << endl;
            } else {
                cout << "Aluno não encontrado." << endl;
            }
        } else if (excluirAluno != 'n') {
            cout << "Opção inválida. Use 's' para sim ou 'n' para não." << endl;
        }
    } while (incluirAluno != 'n');

    bubbleSort(nomes, notas);

    // Exibir a lista de alunos e notas
    cout << "\nListagem dos alunos e notas ordenados em ordem alfabética:\n";
    for (size_t i = 0; i < nomes.size(); ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        cout << endl;
    }

    return 0;
}
*/

//Correção do terceiro codigo
/*
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
*/

//Terceiro codigo

/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void bubbleSort(vector<string> &nomes, vector<float> &notas) {
    int n = nomes.size();
    bool trocou;

    do {
        trocou = false;
        for (int i = 0; i < n - 1; ++i) {
            if (nomes[i] > nomes[i + 1]) {
                // Trocar os nomes
                swap(nomes[i], nomes[i + 1]);
                // Também precisamos trocar as notas correspondentes
                swap(notas[i * 2], notas[i * 2 + 1]);
                swap(notas[(i + 1) * 2], notas[(i + 1) * 2 + 1]);
                trocou = true;
            }
        }
    } while (trocou);
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
        cin.ignore(); // Limpa o buffer do teclado
        getline(cin, nome);

        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;

        nomes.push_back(nome);
        notas.push_back(nota1);
        notas.push_back(nota2);
    }

    // Ordenar os nomes em ordem lexicográfica
    bubbleSort(nomes, notas);

    // Exibir os nomes e notas dos alunos ordenados
    cout << "\nListagem dos alunos e notas (ordenados):\n";
    for (int i = 0; i < N; ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        cout << endl;
    }

    return 0;
}
*/

//Segundo codigo

/*#include <iostream>
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
        cin.ignore(); // Limpa o buffer do teclado
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

}
*/

//Primeiro Codigo (solicite um limite de alunos)

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;
    vector<string> nomes(N);
    vector<float> notas(2 * N);
    cin.ignore(); // Limpa o buffer do teclado
    for (int i = 0; i < N; ++i) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);
        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> notas[2 * i];
        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> notas[2 * i + 1];
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
}
*/