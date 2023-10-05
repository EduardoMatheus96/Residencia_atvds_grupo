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
    Produto(string nome, double valor);
    string getNome() const;
    double getValor() const;
    int getCodigo() const;
    void setNome(string nome) const;
    void setValor(double valor) const;
    void setCodigo(int codigo) const;
    unsigned int geraCodigo();
};

class CarrinhoDeCompras
{
    private :
        vector<Produto> produtos;
        vector<int> qtd;
    public :
        CarrinhoDeCompras();
        CarrinhoDeCompras(vector<Produto> produtos, vector<int> qtd);    
        vector<Produto> getProdutos() const;
        void adicionarProduto(Produto produto, int qntProdutos, Estoque &estoque);
        double calculaValorTotal();
        bool removerProduto(int codigoProduto, Estoque &estoque);
        void esvaziarCarrinho();
        void exibirCarrinho();
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
    void adicionarEstoque();
    void decrementarEstoque();
};

#endif
