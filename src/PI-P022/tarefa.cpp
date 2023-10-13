#include <iostream>
#include <string>
#include "controle_de_tarefas.hpp"

using namespace std;

Tarefa::Tarefa(const string &descricao, bool concluida)
    : descricao(descricao), concluida(concluida) {
        this->concluida = false;
    };

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