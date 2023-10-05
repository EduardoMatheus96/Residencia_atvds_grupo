#include <iostream>
#include <string>
#include "compras.hpp"

using namespace std;

Estoque::Estoque(string nome, int quantidade) : nome(nome), quantidade(quantidade){};

string Estoque::getNome() const
{
  return nome;
}
int Estoque::getQuantidae() const
{
  return quantidade;
}
void Estoque::setNome(string nome)
{
  this->nome = nome;
}
void Estoque::setQuantidade(int quantidade)
{
  this->quantidade = quantidade;
}
void Estoque::decrementarEstoque()
{
  if (this->quantidade > 0)
  {
    this->quantidade--;
  }
}

void Estoque::adicionarEstoque()
{
    this->quantidade++;
}

