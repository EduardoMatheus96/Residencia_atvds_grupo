#include <iostream>
#include <vector>
#include <string>
#include "compras.hpp"
using namespace std;

CarrinhoDeCompras::CarrinhoDeCompras() {}
CarrinhoDeCompras::CarrinhoDeCompras(vector<Produto> produtos, vector<int> qtd)
    : produtos(produtos), qtd(qtd) {}

vector<Produto> CarrinhoDeCompras::getProdutos() const
{
  return produtos;
}
void CarrinhoDeCompras::adicionarProduto(Produto produto, int qndProduto, Estoque &estoque)
{
  this->qtd.push_back(qndProduto);
  while (qndProduto != 0 && qndProduto <= estoque.getQuantidae())
  {
    produtos.push_back(produto);
    qndProduto--;
    estoque.decrementarEstoque();
  }
}
double CarrinhoDeCompras::calculaValorTotal()
{
  double total = 0.0;
  for (Produto produto : produtos)
  {
    total += produto.getValor();
  }
  return total;
}
bool CarrinhoDeCompras::removerProduto(int codigoProduto, Estoque &estoque)
{
  // Percorre a lista de produtos
  for (auto it = produtos.begin(); it != produtos.end(); ++it)
  {
    // Verifica se o código do produto coincide
    if (it->getCodigo() == codigoProduto)
    {
      // Remove o produto encontrado da lista
      produtos.erase(it);
      estoque.adicionarEstoque();
      return true; // Produto removido com sucesso
    }
  }
  return false; // Produto não encontrado
}

void CarrinhoDeCompras::esvaziarCarrinho()
{
  produtos.clear();
}

void CarrinhoDeCompras::exibirCarrinho()
{
  int aux = 0;
  for (int qtd : this->qtd)
  {
    cout << "- " << produtos[aux].getNome() << " (" << produtos[aux].getValor() << ") " << qtd << endl;
    aux += (qtd - 1);
  }
}