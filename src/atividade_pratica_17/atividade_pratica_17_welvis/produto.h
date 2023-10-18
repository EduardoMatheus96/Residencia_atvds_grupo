#ifndef TIME_H
#define TIME_H
#include <string>
#include <vector>
using namespace std;

class CarrinhoDeCompras
{
private:
    vector<Produto> produtos;

public:
    vector<Produto> getProdutos()
    {
        return this->produtos;
    }

    void setProduto(Produto produto)
    {
        this->produtos.push_back(produto);
    }

    bool removerProduto(int codigoProduto)
    {
        // Percorre a lista de produtos
        for (auto it = this->produtos.begin(); it != this->produtos.end(); ++it)
        {
            // Verifica se o código do produto coincide
            if (it->getCodigo() == codigoProduto)
            {
                // Remove o produto encontrado da lista
                this->produtos.erase(it);
                return true; // Produto removido com sucesso
            }
        }
        return false; // Produto não encontrado
    }
};

#endif

class Estoque
{
private:
    string nome;
    int quantidade;

public:
    string getNome()
    {
        this->nome;
    }

    int getQuantidae()
    {
        this->quantidade;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setQuantidade(int quantidade)
    {
        this->quantidade = quantidade;
    }

    void atuaizarEstoque(int codigoProduto)
    {
        if (this->quantidade > 0)
        {
            this->quantidade--;
        }
    }
};