#include <iostream>
#include <vector>
#include <string>
#include "produto.cpp"
using namespace std;


class CarrinhoDeCompras
{
     private :
        vector<Produto> produtos;
     public :

          vector<Produto> getProdutos(){
            return this->produtos;
          }

          void setProduto(Produto produto){
            this->produtos.push_back(produto);
          }
          bool removerProduto(int codigoProduto) {
            // Percorre a lista de produtos
            for (auto it = this->produtos.begin(); it != this->produtos.end(); ++it) {
                // Verifica se o código do produto coincide
                if (it->getCodigo() == codigoProduto) {
                    // Remove o produto encontrado da lista
                    this->produtos.erase(it);
                    return true; // Produto removido com sucesso
                }
            }
            return false; // Produto não encontrado
        }
};