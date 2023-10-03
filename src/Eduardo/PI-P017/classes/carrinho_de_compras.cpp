#include <iostream>
#include <vector>
#include <string>
#include "compras.hpp"
using namespace std;

CarrinhoDeCompras::CarrinhoDeCompras(){}
CarrinhoDeCompras::CarrinhoDeCompras(vector<Produto> produtos)
: produtos(produtos) {}

vector<Produto> CarrinhoDeCompras::getProdutos() const
{
  return produtos;
}
void CarrinhoDeCompras::adicionarProduto(Produto produto, int qndProduto)
{
  while (qndProduto)
  {
    produtos.push_back(produto);
    qndProduto--;
  }
  
}
double CarrinhoDeCompras::calculaValorTotal(){
  double total = 0.0;
  for (Produto produto : produtos)
  {
    total += produto.getValor();
  }
  return total;
}
bool CarrinhoDeCompras::removerProduto(int codigoProduto)
{
  // Percorre a lista de produtos
  for (auto it = produtos.begin(); it != produtos.end(); ++it)
  {
    // Verifica se o código do produto coincide
    if (it->getCodigo() == codigoProduto)
    {
      // Remove o produto encontrado da lista
      produtos.erase(it);
      return true; // Produto removido com sucesso
    }
  }
  return false; // Produto não encontrado
}

void CarrinhoDeCompras::esvaziarCarrinho(){
  produtos.clear();
}