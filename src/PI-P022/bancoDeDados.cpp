#include <iostream>
#include <string>
#include "controle_de_tarefas.hpp"

using namespace std;

void BancoDeDados::salvarTarefas(const string &nomeArquivo)
{
    ofstream arquivo(nomeArquivo);
    if (arquivo.is_open())
    {
        for (const Tarefa &tarefa : GerenciadorTarefas::getTarefas())
        {
            arquivo << tarefa.getDescricao() << "," << tarefa.estaConcluida() << "\n";
        }
        arquivo.close();
        cout << "Tarefas salvas com sucesso." << endl;
    }
    else
    {
        cout << "Erro ao abrir o arquivo para salvar as tarefas." << endl;
    }
}

void BancoDeDados::carregarTarefas(const string &nomeArquivo)
{
    ifstream arquivo(nomeArquivo);
    if (arquivo.is_open())
    {
        GerenciadorTarefas::clearTarefas();
        string linha;
        while (getline(arquivo, linha))
        {
            size_t pos = linha.find(",");
            if (pos != string::npos)
            {
                string descricao = linha.substr(0, pos);
                bool concluida = stoi(linha.substr(pos + 1));
                GerenciadorTarefas::adicionarTarefaByInstance(Tarefa(descricao, concluida));
            }
        }
        arquivo.close();
        cout << "Tarefas carregadas com sucesso." << endl;
    }
    else
    {
        cout << "O arquivo de tarefas nao existe ou nao pode ser lido." << endl;
    }
}