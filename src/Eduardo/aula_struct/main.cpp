#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Produto
{
    string nomeProduto;
    unsigned int qntProduto;
    double valorUnitario;
};

void adicionarProduto(Produto *prod, string nome, int qnt, double valor, vector<Produto> *estoque)
{
    prod->nomeProduto = nome;
    prod->qntProduto = qnt;
    prod->valorUnitario = valor;
    estoque->push_back(*prod);
}

void atualizarEstoque(Produto *prod)
{
    prod->qntProduto--;
}

double calcularTotal(vector<Produto *> estoque)
{
    double total = 0;
    for (size_t i = 0; i < estoque.size(); i++)
    {
        total += estoque[i]->qntProduto;
    }
    return total;
}

void listarProdutos(vector<Produto *> estoque)
{
    for (size_t i = 0; i < estoque.size(); i++)
    {
        cout
            << "Produto "
            << i
            << ": "
            << estoque[i]->nomeProduto
            << "Quantidade: "
            << estoque[i]->qntProduto
            << "Valor unitario: "
            << estoque[i]->valorUnitario
            << endl;
    }
}

int main(int argc, const char **argv)
{
    Produto produto;
    vector<Produto> estoque;
    adicionarProduto(&produto, "Celular", 7, 3000, &estoque);
    adicionarProduto(&produto, "Laptop", 3, 5000, &estoque);

    cout << estoque[0].nomeProduto << endl;
    cout << estoque[1].nomeProduto << endl;
    return 0;
}