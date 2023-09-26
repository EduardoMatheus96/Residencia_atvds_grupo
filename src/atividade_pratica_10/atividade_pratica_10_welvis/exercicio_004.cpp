/*Etapa 4: Individual
    O programa deve listar o resultado fila dos alunos  com suas respectivas notas
    e médias, indicando para cada aluno se está aprovado (média >= 7) ou
    reprovado (média < 7)

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float calcularMedia(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

void bubbleSort(vector<string> &nomes, vector<float> &notas)
{
    int n = nomes.size();

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (nomes[j] > nomes[j + 1])
            {
                // Troque os nomes
                swap(nomes[j], nomes[j + 1]);

                // Mantenha as notas correspondentes na mesma ordem
                swap(notas[2 * j], notas[2 * j + 2]);
                swap(notas[2 * j + 1], notas[2 * j + 3]);
            }
        }
    }
}

int main()
{
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    vector<string> nomes;
    vector<float> notas;

    char incluirAluno = 's';
    while (incluirAluno == 's')
    {
        if (nomes.size() >= N)
        {
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

    do
    {
        char excluirAluno;
        cout << "Deseja excluir algum aluno (s/n)? ";
        cin >> excluirAluno;

        if (excluirAluno == 's')
        {
            string nomeParaExcluir;
            cout << "Digite o nome do aluno a ser excluído: ";
            cin.ignore();
            getline(cin, nomeParaExcluir);

            // Encontre o nome na lista e exclua-o
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaExcluir);
            if (it != nomes.end())
            {
                int index = distance(nomes.begin(), it);

                nomes.erase(nomes.begin() + index);
                notas.erase(notas.begin() + (2 * index), notas.begin() + (2 * index + 2));

                cout << "Aluno excluído com sucesso." << endl;
            }
            else
            {
                cout << "Aluno não encontrado." << endl;
            }
        }
        else if (excluirAluno != 'n')
        {
            cout << "Opção inválida. Use 's' para sim ou 'n' para não." << endl;
        }
    } while (incluirAluno != 'n');

    bubbleSort(nomes, notas);

    // Exibir a lista de alunos e notas
    cout << "\nListagem dos alunos e notas ordenados em ordem alfabética:\n";

    for (size_t i = 0; i < nomes.size(); ++i)
    {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas[2 * i] << endl;
        cout << "Nota 2: " << notas[2 * i + 1] << endl;

        float media = calcularMedia(notas[2 * i], notas[2 * i + 1]);
        cout << "Média: " << media << endl;
        
        cout << "Situação: " << (media >= 7 ? "Aprovado" : "Reprovado") << endl;

        cout << endl;
    }

    return 0;
}