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

    Estoque estoque1("Maca", 10);
    Estoque estoque2("Arroz", 5);
    Estoque estoque3("Leite", 12);
    
    CarrinhoDeCompras carrinho;
    carrinho.adicionarProduto(produto1, 3, estoque1);
    carrinho.adicionarProduto(produto2, 2, estoque2);
    carrinho.adicionarProduto(produto3, 1, estoque3);

    double valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total da compra: " << valorTotal << endl;

    carrinho.removerProduto(produto2.getCodigo(), estoque2);
    valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total após remoção: " << valorTotal << endl;

    carrinho.esvaziarCarrinho();
    valorTotal = carrinho.calculaValorTotal();
    cout << "Valor total após esvaziar o carrinho: " << valorTotal << endl;

    carrinho.exibirCarrinho();

    return 0;
}
