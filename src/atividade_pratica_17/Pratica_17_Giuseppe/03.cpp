#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Produto {
private:
    string nome;
    float preco;
    static int proximoCodigo;

public:
    Produto(string nome, float preco) {
        this->nome = nome;
        this->preco = preco;
        this->proximoCodigo = proximoCodigo++;
    }

    string getNome() {
        return nome;
    }

    float getPreco() {
        return preco;
    }

    int getCodigo() {
        return proximoCodigo;
    }
};

int Produto::proximoCodigo = 1;

class CarrinhoDeCompras {
private:
    vector<Produto> compras;
    vector<int> quantidade;

public:
    void adicionarProduto(Produto p1, int qnt) {
        quantidade.push_back(qnt);
        compras.push_back(p1);
    }

    void removerProdutoPorNome(string nome) {
        for (int i = 0; i < compras.size(); i++) {
            if (compras[i].getNome() == nome) {
                compras.erase(compras.begin() + i);
                quantidade.erase(quantidade.begin() + i);
                break;  // Saia do loop depois de encontrar o primeiro correspondente
            }
        }
    }

    void listarProdutosNoCarrinho() {
        cout << "Produtos no carrinho:" << endl;
        for (size_t i = 0; i < compras.size(); i++) {
            cout << "Produto: " << compras[i].getNome() << " | Quantidade: " << quantidade[i] << endl;
        }
    }

    float calcTotal() {
        float total = 0;
        for (size_t i = 0; i < compras.size(); i++) {
            total += compras[i].getPreco() * quantidade[i];
        }
        return total;
    }
};

class Estoque {
    private:

    vector<Produto> prod;
    vector<int> estoque;

    public: 


    void listarProdutosEstoque() {
        cout << "Produtos no estoque:" << endl;
        for (size_t i = 0; i < estoque.size(); i++) {
            cout << "Produto: " << prod[i].getNome() << " | Quantidade: " << estoque[i] << endl;
        }
    }
    
    void setProdutoEstoque(Produto prod, int quantidade){
        this->prod.push_back(prod);
        this-> estoque.push_back(quantidade);
    }

};

int main() {
    CarrinhoDeCompras carrinho;
    Estoque estoqueEmpresa;
    Produto p1("Leite", 5.99);
    estoqueEmpresa.setProdutoEstoque(p1, 50);
    Produto p2("Chá", 3.55);
    estoqueEmpresa.setProdutoEstoque(p2, 20);
    Produto p3("Queijo", 13.60);
    estoqueEmpresa.setProdutoEstoque(p3, 30);

    carrinho.adicionarProduto(p1, 5);
    carrinho.adicionarProduto(p2, 7);
    carrinho.adicionarProduto(p3, 3);

    cout << "Valor total: " << carrinho.calcTotal() << endl;

    carrinho.listarProdutosNoCarrinho();
    estoqueEmpresa.listarProdutosEstoque();

    // Remover um item do carrinho pelo nome (por exemplo, "Leite")
    carrinho.removerProdutoPorNome("Leite");

    cout << "Valor total após remover item: " << carrinho.calcTotal() << endl;

    return 0;
}
