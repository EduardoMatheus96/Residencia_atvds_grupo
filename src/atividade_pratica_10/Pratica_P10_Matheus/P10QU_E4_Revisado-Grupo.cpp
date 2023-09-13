#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSlide(vector<string> &nomes, vector<float> &notas)
{
    int n = nomes.size() - 1;
    bool trocou;
    do
    {
        trocou = false;
        for (int j = 0; j < n; j++)
        {
            if (nomes.at(j) > nomes.at(j + 1))
            {
                swap(nomes[j], nomes[j + 1]);

                // Manter notas correspondentes e na mesma ordem
                swap(notas[2 * j], notas[2 * j + 2]);
                swap(notas[2 * j + 1], notas[2 * j + 3]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);
}

// void bubbleSort(vector<string> &nomes, vector<float> &notas) {
//     int n = nomes.size();

//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (nomes[j] > nomes[j + 1]) {
//                 // Troque os nomes
//                 swap(nomes[j], nomes[j + 1]);

//                 // Mantenha as notas correspondentes na mesma ordem
//                 swap(notas[2 * j], notas[2 * j + 2]);
//                 swap(notas[2 * j + 1], notas[2 * j + 3]);
//             }
//         }
//     }
// }

float calcularMedia(float nota1, float nota2)
{
    return (nota1 + nota2) / 2.0;
}

int main()
{
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;
    while (N < 1 || N > 100)
    {
        cout << "Digite um valor entre 1 e 100: ";
        cin >> N;
        return 1;
    }
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
        double nota1, nota2;

        cout << "Digite o nome do aluno: ";
        cin.ignore();
        getline(cin, nome);
        // nome = toupper(nome);
        transform(nome.begin(), nome.end(), nome.begin(), ::tolower);
        nome.at(0) = toupper(nome.at(0));

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;

        nomes.push_back(nome);
        notas.push_back(nota1);
        notas.push_back(nota2);
    }

    bubbleSlide(nomes, notas);

    char excluirAluno = 's';
    while (excluirAluno == 's')
    {
        cout << "Deseja excluir algum aluno (s/n)? ";
        cin >> excluirAluno;

        if (excluirAluno == 's')
        {
            string nomeParaExcluir;
            cout << "Digite o nome do aluno a ser excluído: ";
            cin.ignore();
            getline(cin, nomeParaExcluir);

            // Encontra o nome na lista e permite excluir
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaExcluir);
            if (it != nomes.end())
            {
                int index = distance(nomes.begin(), it);

                nomes.erase(nomes.begin() + index);
                notas.erase(notas.begin() + (2 * index), notas.begin() + (2 * index + 2));

                cout << "Aluno excluído com sucesso." << endl;

                cout << "Deseja incluir mais alunos (s/n)? ";
                cin >> incluirAluno;
                while (incluirAluno == 's')
                {
                    string nome;
                    float nota1, nota2;
                    if (nomes.size() >= N)
                    {
                        cout << "Limite de alunos atingido." << endl;
                        break;
                    }
                    cout << "Digite o nome do aluno: ";
                    cin.ignore();
                    getline(cin, nome);
                    transform(nome.begin(), nome.end(), nome.begin(), ::tolower);
                    nome.at(0) = toupper(nome.at(0));

                    cout << "Digite a primeira nota do aluno: ";
                    cin >> nota1;

                    cout << "Digite a segunda nota do aluno: ";
                    cin >> nota2;

                    for (size_t i = 0; i < nomes.size(); i++)
                    {
                        if(nome < nomes.at(i))
                        {
                            nomes.insert(nomes.begin() + i, nome);
                            notas.insert(notas.begin() + (2 * i), nota1);
                            notas.insert(notas.begin() + ((2 * i) + 1), nota2);
                            break;

                        }
                    }
                    // nomes.push_back(nome);
                    // notas.push_back(nota1);
                    // notas.push_back(nota2);

                    // bubbleSlide(nomes, notas);
                }
            }
            else
            {
                cout << "Aluno não encontrado." << endl;
            }
        }
    }
    char alterarNota;
    do
    {
        cout << "Deseja alterar alguma nota (s/n)? ";
        cin >> alterarNota;

        if (alterarNota == 's')
        {
            string nomeParaAlterar;
            cout << "Digite o nome do aluno cuja nota será alterada: ";
            cin.ignore();
            getline(cin, nomeParaAlterar);

            // Encontra nome na lista
            vector<string>::iterator it = find(nomes.begin(), nomes.end(), nomeParaAlterar);
            if (it != nomes.end())
            {
                int index = distance(nomes.begin(), it);

                cout << "Notas atuais do aluno " << nomeParaAlterar << ": " << notas[2 * index] << " e " << notas[2 * index + 1] << endl;

                char opcao;
                do
                {
                    cout << "Alterar a primeira nota (1), a segunda nota (2) ou nenhuma (0)? ";
                    cin >> opcao;

                    if (opcao == '1')
                    {
                        cout << "Digite a nova primeira nota: ";
                        cin >> notas[2 * index];
                    }
                    else if (opcao == '2')
                    {
                        cout << "Digite a nova segunda nota: ";
                        cin >> notas[2 * index + 1];
                    }
                    else if (opcao != '0')
                    {
                        cout << "Opção inválida. Use '1', '2' ou '0'." << endl;
                    }
                } while (opcao != '0');

                cout << "Notas atualizadas do aluno " << nomeParaAlterar << ": " << notas[2 * index] << " e " << notas[2 * index + 1] << endl;

                // Recalcula a média
                float novaMedia = calcularMedia(notas[2 * index], notas[2 * index + 1]);

                cout << "Média atualizada do aluno " << nomeParaAlterar << ": " << novaMedia << endl;

                // Verifica situação do aluno   
                if (novaMedia >= 7.0)
                {
                    cout << "Situação: Aprovado" << endl;
                }
                else
                {
                    cout << "Situação: Reprovado" << endl;
                }
            }
            else
            {
                cout << "Aluno não encontrado." << endl;
            }
        }
    } while (alterarNota != 'n');

    // Listagem de alunos e notas
    cout << "\nListagem dos alunos e notas ordenados em ordem alfabética:\n";
    for (size_t i = 0; i < nomes.size(); ++i)
    {
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
