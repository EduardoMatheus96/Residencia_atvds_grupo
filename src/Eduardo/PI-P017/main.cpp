#include <iostream>
#include <string>
#include "classes/compras.hpp"

using namespace std;

int main(void)
{
    srand(static_cast<unsigned>(time(nullptr)));

    Produto produto1("Maca", 2.5);
    Produto produto2("Arroz", 10.00);
    Produto produto3("Leite", 4.0);
    
    CarrinhoDeCompras carrinho;
    carrinho.adicionarProduto(produto1, 3);
    carrinho.adicionarProduto(produto2, 2);
    carrinho.adicionarProduto(produto3, 1);

    double valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total da compra: " << valorTotal << endl;

    carrinho.removerProduto(produto2.getCodigo());
    valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total após remoção: " << valorTotal << endl;

    carrinho.esvaziarCarrinho();
    valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total após esvaziar o carrinho: " << valorTotal << endl;

    return 0;
}
