//Implementa a exclusão e inclusão de alunos
/*
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

                // Mantem as notas correspondentes na mesma ordem
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

//Terceiro codigo (Rodando sem erros)


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
                // Trocar das notas correspondentes
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
        cin.ignore(); // Limpeza do buffer
        getline(cin, nome);

        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;

        nomes.push_back(nome);
        notas.push_back(nota1);
        notas.push_back(nota2);
    }

    // Ordena os nomes em ordem lexicográfica
    bubbleSort(nomes, notas);

    // Exibe os nomes e notas dos alunos ordenados
    cout << "\nListagem dos alunos e notas (ordenados):\n";
    for (int i = 0; i < N; ++i) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;
        cout << endl;
    }

    return 0;
}


//Segundo codigo (rodando perfeitamente)
/*
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
//Obs.: Tem um erro ao incluir o segundo nome do aluno

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