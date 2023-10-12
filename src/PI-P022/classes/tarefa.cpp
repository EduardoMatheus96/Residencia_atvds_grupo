#include <iostream>
#include <string>
#include "controle_de_tarefas.hpp"

using namespace std;

Tarefa::Tarefa(const string &descricao, bool concluida = false)
    : descricao(descricao), concluida(concluida) {}

void Tarefa::marcarConcluida()
{
    concluida = true;
}

bool Tarefa::estaConcluida() const
{
    return concluida;
}

string Tarefa::getDescricao() const
{
    return descricao;
}