#include <iostream>
#include <vector>
#include <string>
#include "compras.hpp"
using namespace std;

CarrinhoDeCompras::CarrinhoDeCompras(vector<Produto> produtos) : produtos(produtos) {}

vector<Produto> CarrinhoDeCompras::getProdutos() const
{
  return produtos;
}
void CarrinhoDeCompras::setProduto(Produto produto)
{
  produtos.push_back(produto);
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