/*
Parte em Grupos (até 5 pessoas por grupo):

Exercício 3: Sistema de Cadastro de Produtos
    Crie um sistema de cadastro de produtos em um supermercado. Cada grupo deve
    projetar as classes Produto, Estoque e CarrinhoDeCompras. O Produto deve ter
    atributos como nome, preço e código. O Estoque deve controlar a quantidade de cada
    produto. O CarrinhoDeCompras deve permitir adicionar e remover produtos, calcular
    o valor total e exibir o conteúdo.

    Testes para o Exercício do Carrinho de Compras:

    Produto p1("Maçã", 2.5);
    Produto p2("Arroz", 10.0);
    Produto p3("Leite", 4.0);

    CarrinhoDeCompras carrinho;
    carrinho.adicionarProduto(p1, 3);
    carrinho.adicionarProduto(p2, 2);
    carrinho.adicionarProduto(p3, 1);

    double valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total da compra: " << valorTotal << endl;
    // Resposta: Valor total da compra: 31.5

    carrinho.removerProduto(p2, 1);
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após remoção: " << valorTotal << endl;
    // Resposta: Valor total após remoção: 21.5

    carrinho.esvaziarCarrinho();
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após esvaziar o carrinho: " << valorTotal << endl;
    // Resposta: Valor total após esvaziar o carrinho: 0.0

    Produto p4("Chocolate", 3.0);
    carrinho.adicionarProduto(p4, 10); // Supondo estoque limitado a 5 unidades
    cout << "Quantidade de chocolates no carrinho: " << carrinho.getQuantidadeProduto(p4) << endl;
    // Resposta: Quantidade de chocolates no carrinho: 5

    carrinho.adicionarProduto(p1, 2);
    carrinho.adicionarProduto(p2, 3);
    carrinho.adicionarProduto(p3, 1);
    carrinho.adicionarProduto(p4, 2);

    carrinho.exibirCarrinho();
    // Resposta: Carrinho de Compras:
    // - Maçã (2.5) x 2
    // - Arroz (10.0) x 3
    // - Leite (4.0) x 1
    // - Chocolate (3.0) x 2
*/
