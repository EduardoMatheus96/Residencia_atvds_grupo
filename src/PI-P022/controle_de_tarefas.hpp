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
    Tarefa(const string &descricao, bool concluida = false);

    void marcarConcluida();

    bool estaConcluida() const;

    string getDescricao() const;

private:
    string descricao;
    bool concluida;
};

class GerenciadorTarefas
{
public:

    GerenciadorTarefas() = default;
    
    static void adicionarTarefa(const string &descricao);

    static void adicionarTarefaByInstance(const Tarefa &tarefa);

    static void marcarTarefaConcluida(int indice);

    static void listarTarefasPendentes();

    static vector<Tarefa> getTarefas();

    static void clearTarefas();

private:
    static vector<Tarefa> tarefas;
};

class BancoDeDados
{
public:
    static void salvarTarefas(const string &nomeArquivo);
    static void carregarTarefas(const string &nomeArquivo);
};

#endif