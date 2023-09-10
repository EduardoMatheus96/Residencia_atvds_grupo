/*
Exercício 3:
    Faça um programa para um supermercado para a consulta de preço de produtos. O
    programa deverá armazenar de cada produto o seu código, seu nome e seu preço.
    Ao utilizar o programa o usuário deve poder:

        1. Inserir um novo produto
        2. Excluir um produto cadastrado
        3. Listar todos os produtos com seus respectivos códigos e preços
        4. Consultar o preço de um produto através de seu código.
        O código deve ser formado de uma string numérica de 13 caracteres
        O nome deve ter um tamanho de no máximo 20 caracteres
        O preço deve ter duas casas decimais
        O sistema deve permitir o cadastro de até 300 produtos diferentes.
        O sistema deve controlar para que não tenha produtos com o mesmo código ou
        mesmo nome, não permitindo o seu cadastro.
        O sistema deverá ser feito modularizados, com qualidade e utilizando estrutura na
        sua implementação.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

// Estrutura para representar um produto
struct Produto {
    string codigo;
    string nome;
    double preco;
};

const int MAX_PRODUTOS = 300;

// Vetor para armazenar os produtos
vector<Produto> produtos;

// Função para inserir um novo produto
void InserirProduto() {
    if (produtos.size() >= MAX_PRODUTOS) {
        cout << "Limite maximo de produtos atingido." << endl;
        return;
    }

    Produto novoProduto;
    string codigo;
    bool codigoDuplicado = false;

    cout << "Digite o codigo do produto (13 caracteres numericos): ";
    cin >> codigo;

    // Verifica se o código já existe
    for (const Produto& produto : produtos) {
        if (produto.codigo == codigo) {
            codigoDuplicado = true;
            break;
        }
    }

    if (codigoDuplicado) {
        cout << "Codigo ja cadastrado. Nao e permitido duplicar codigos." << endl;
        return;
    }

    novoProduto.codigo = codigo;
    cin.ignore(); // Limpar o buffer do teclado

    cout << "Digite o nome do produto (ate 20 caracteres): ";
    getline(cin, novoProduto.nome);

    cout << "Digite o preco do produto: ";
    cin >> novoProduto.preco;

    produtos.push_back(novoProduto);
    cout << "Produto cadastrado com sucesso!" << endl;
}

// Função para excluir um produto cadastrado
void ExcluirProduto() {
    string codigo;
    bool encontrado = false;

    cout << "Digite o codigo do produto que deseja excluir: ";
    cin >> codigo;

    for (auto it = produtos.begin(); it != produtos.end(); ++it) {
        if ((*it).codigo == codigo) {
            produtos.erase(it);
            encontrado = true;
            cout << "Produto excluido com sucesso!" << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Produto nao encontrado." << endl;
    }
}

// Função para listar todos os produtos com códigos e preços
void ListarProdutos() {
    if (produtos.empty()) {
        cout << "Nenhum produto cadastrado." << endl;
        return;
    }

    cout << "Lista de Produtos:" << endl;
    for (const Produto& produto : produtos) {
        cout << "Codigo: " << produto.codigo << " | Nome: " << produto.nome << " | Preco: R$" << fixed << setprecision(2) << produto.preco << endl;
    }
}

// Função para consultar o preço de um produto por código
void ConsultarPrecoPorCodigo() {
    string codigo;
    bool encontrado = false;

    cout << "Digite o codigo do produto que deseja consultar: ";
    cin >> codigo;

    for (const Produto& produto : produtos) {
        if (produto.codigo == codigo) {
            cout << "Preco do produto: R$" << fixed << setprecision(2) << produto.preco << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Produto nao encontrado." << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir Produto\n";
        cout << "2. Excluir Produto\n";
        cout << "3. Listar Produtos\n";
        cout << "4. Consultar Preco por Codigo\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                InserirProduto();
                break;
            case 2:
                ExcluirProduto();
                break;
            case 3:
                ListarProdutos();
                break;
            case 4:
                ConsultarPrecoPorCodigo();
                break;
            case 5:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 5);

    return 0;
}
