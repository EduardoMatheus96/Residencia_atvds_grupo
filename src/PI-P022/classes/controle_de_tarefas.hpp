#ifndef CONTROLE_HPP
#define CONTROLE_HPP
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Tarefa
{
public:
    Tarefa(const string &descricao, bool concluida = false)
        : descricao(descricao), concluida(concluida) {}

    void marcarConcluida()
    {
        concluida = true;
    }

    bool estaConcluida() const
    {
        return concluida;
    }

    string getDescricao() const
    {
        return descricao;
    }

private:
    string descricao;
    bool concluida;
};

class GerenciadorTarefas
{
public:
    static void adicionarTarefa(const string &descricao)
    {
        tarefas.push_back(Tarefa(descricao));
    }

    static void adicionarTarefaByInstance(const Tarefa &tarefa)
    {
        tarefas.push_back(tarefa);
    }

    static void marcarTarefaConcluida(int indice)
    {
        if (indice >= 0 && indice < tarefas.size())
        {
            tarefas[indice].marcarConcluida();
        }
    }

    static void listarTarefasPendentes()
    {
        int contador = 0;
        for (const Tarefa &tarefa : tarefas)
        {
            if (!tarefa.estaConcluida())
            {
                cout << contador << ". " << tarefa.getDescricao() << endl;
                contador++;
            }
        }
    }

    static vector<Tarefa> getTarefas()
    {
        return tarefas;
    }

    static void clearTarefas()
    {
        tarefas.clear();
    }

private:
    static vector<Tarefa> tarefas;
};

class BancoDeDados
{
public:
    static void salvarTarefas(const string &nomeArquivo)
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

    static void carregarTarefas(const string &nomeArquivo)
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
};

#endif