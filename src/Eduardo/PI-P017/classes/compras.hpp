#ifndef COMPRAS_HPP
#define COMPRAS_HPP
#include <string>
#include <vector>

using namespace std;

class Produto
{
private:
    string nome;
    double valor;
    static int proximoCodigo;

public:
    // Produto();
    // Produto(string nome, double valor, int proximoCodigo);
    string getNome();

    double getValor();
    int getCodigo();

    void setNome(string nome);

    void setValor(double valor);
    void setProximoCodigo(int proximoCodigo);
};

class CarrinhoDeCompras
{
     private :
        vector<Produto> produtos;
     public :

          string getProdutos();

          void setProduto(Produto produto);

          bool removerProduto(int codigoProduto);
};

class Estoque
{
private:
    string nome;
    int quantidade;

public:
    string getNome();

    int getQuantidae();

    void setNome(string nome);

    void setQuantidade(int quantidade);
    void atuaizarEstoque(int codigoProduto);
};

#endif
