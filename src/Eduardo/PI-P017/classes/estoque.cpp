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
void Estoque::atualizarEstoque(int codigoProduto)
{
  if (this->quantidade > 0)
  {
    this->quantidade--;
  }
}

// class Estoque
// {
//      private :
//         string nome;
//         int quantidade;
//      public :

//           string getNome(){
//             this->nome;
//           }

//           int getQuantidae(){
//             this->quantidade;
//           }

//           void setNome(string nome){
//             this->nome = nome;
//           }

//           void setQuantidade(int quantidade){
//             this->quantidade = quantidade;
//           }
//           void atuaizarEstoque(int codigoProduto) {
//             if(this->quantidade > 0){
//                 this->quantidade--;
//             }
//         }
// };
