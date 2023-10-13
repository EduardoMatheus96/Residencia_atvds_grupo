#include "controle_de_tarefas.hpp"

void GerenciadorTarefas::adicionarTarefa(const string &descricao)
{
    tarefas.push_back(Tarefa(descricao));
}

void GerenciadorTarefas::adicionarTarefaByInstance(const Tarefa &tarefa)
{
    tarefas.push_back(tarefa);
}

void GerenciadorTarefas::marcarTarefaConcluida(int indice)
{
    if (indice >= 0 && indice < tarefas.size())
    {
        tarefas[indice].marcarConcluida();
    }
}

void GerenciadorTarefas::listarTarefasPendentes()
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

vector<Tarefa> GerenciadorTarefas::getTarefas()
{
    return tarefas;
}

void GerenciadorTarefas::clearTarefas()
{
    tarefas.clear();
}

vector<Tarefa> GerenciadorTarefas::tarefas;