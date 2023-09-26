#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

struct produto {
    string nome;
    string codigo;
    float preco;
};

// Função para verificar se um produto já existe no vetor
bool produtoExiste(const vector<produto> &produtos, const string &nome, const string &codigo) {
    for (const produto &p : produtos) {
        if (p.nome == nome || p.codigo == codigo) {
            return true; // Já existe um produto com o mesmo nome ou código
        }
    }
    return false; // Não existe um produto com o mesmo nome ou código
}

void InsiraProduto(vector<produto> &produtos) {
    produto temp;
    const int limiteMaximo = 300;

    if (produtos.size() >= limiteMaximo) {
        cout << "O limite máximo de produtos foi atingido." << endl;
        return;
    }
    cout << "Digite o nome do produto (limite de 20 caracteres): " << endl;
    cin.ignore();
    getline(cin, temp.nome);

    // Verificar se o nome ultrapassa o limite de caracteres
    if (temp.nome.length() > 20) {
        cout << "O nome do produto excede o limite de 20 caracteres." << endl;
        return;
    }

    // Verificar se o nome já existe
    if (produtoExiste(produtos, temp.nome, "")) {
        cout << "Produto com o mesmo nome já existe." << endl;
        return;
    }

    cout << "Digite o código do produto (limite de 13 caracteres): " << endl;
    cin >> temp.codigo;

    // Verificar se o código ultrapassa o limite de caracteres
    if (temp.codigo.length() > 13) {
        cout << "O código do produto excede o limite de 13 caracteres." << endl;
        return;
    }

    // Verificar se o código já existe
    if (produtoExiste(produtos, "", temp.codigo)) {
        cout << "Produto com o mesmo código já existe." << endl;
        return;
    }

    cout << "Digite o preço do produto: " << endl;
    cin >> temp.preco;

    produtos.push_back(temp);
}

void ExcluirProduto(vector<produto> &produtos){

    char excluirProduto = 's';
    while (excluirProduto == 's') {
        cout << "Deseja excluir algum Produto (s/n)? ";
        cin >> excluirProduto;

        if (excluirProduto == 's') {
            string ProdutoparaExcluir;
            cout << "Digite o Nome do Produto a ser excluído: ";
            cin.ignore();
            getline(cin, ProdutoparaExcluir);

            for (size_t i = 0; i < produtos.size(); ++i) {
                if (produtos[i].nome == ProdutoparaExcluir) {
                    produtos.erase(produtos.begin() + i);
                    cout << "Produto excluído com sucesso." << endl;
                    break;
                }
            }
        }
    }
}

void ListarProdutos(vector<produto> produtos){
    for (size_t i = 0; i < produtos.size(); i++)
    {
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Codigo: " << produtos[i].codigo << endl;
        cout << "Preço: " << fixed << setprecision(2) << produtos[i].preco << endl;

    }
}

void ConsultarPreco(const vector<produto> &produtos) {
    string codigoBuscar;
    cout << "Digite o Codigo do Produto cujo preço será consultado: ";
    cin.ignore();
    getline(cin, codigoBuscar);

    for (size_t i = 0; i < produtos.size(); ++i) {
        if (produtos[i].codigo == codigoBuscar) {
            int index = i; // Índice do produto encontrado
            cout << "Preço do Produto " << produtos[index].nome << ": "
                << fixed << setprecision(2) << produtos[index].preco << endl;
            return; // Interrompe a busca após encontrar o produto
        }
    }

    // Se chegou até aqui, o produto não foi encontrado
    cout << "Produto com código " << codigoBuscar << " não encontrado." << endl;
}

int main(void) {

    vector<produto> produtos;
    char opcao;
    do {
        cout << "Menu:" << endl;
        cout << "1. Inserir Produto" << endl;
        cout << "2. Excluir Produto" << endl;
        cout << "3. Listar Produtos" << endl;
        cout << "4. Consultar Preço" << endl;

        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case '1':
                InsiraProduto(produtos);
                break;
            case '2':
                ExcluirProduto(produtos);
                break;
            case '3':
                ListarProdutos(produtos);
                break;
            case '4':
                ConsultarPreco(produtos);
                break;
            case '0':
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida." << endl;
        }
    } while (opcao != '0');

    return 0;
}

