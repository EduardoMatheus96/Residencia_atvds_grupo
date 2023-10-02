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
    int codigo;

public:
    // Produto();
    Produto(string nome, double valor, int codigo);
    string getNome() const;
    double getValor() const;
    int getCodigo() const;
    void setNome(string nome) const;
    void setValor(double valor) const;
    void setCodigo(int codigo) const;
};

class CarrinhoDeCompras
{
    private :
        vector<Produto> produtos;
    public :
        CarrinhoDeCompras(vector<Produto> produtos);    
        vector<Produto> getProdutos() const;
        void setProduto(Produto produto);
        bool removerProduto(int codigoProduto);
};

class Estoque
{
private:
    string nome;
    int quantidade;

public:
    Estoque(string nome, int quantidade);
    string getNome() const;
    int getQuantidae() const;
    void setNome(string nome);
    void setQuantidade(int quantidade);
    void atualizarEstoque(int codigoProduto);
};

#endif
