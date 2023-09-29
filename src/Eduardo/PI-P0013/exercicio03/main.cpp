#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

const int MAX_PRODUCTS = 300;

struct Product {
    string code;
    string name;
    double price;
};

vector<Product> products;

bool addProduct(const Product& product) {
    for (const auto& p : products) {
        if (p.code == product.code || p.name == product.name) {
            cout << "Produto com código ou nome já existe." << endl;
            return false;
        }
    }

    if (products.size() >= MAX_PRODUCTS) {
        cout << "Limite de produtos atingido." << endl;
        return false;
    }

    products.push_back(product);
    cout << "Produto adicionado com sucesso." << endl;
    return true;
}

bool removeProduct(const string& code) {
    auto it = find_if(products.begin(), products.end(),
                           [code](const Product& p) { return p.code == code; });

    if (it != products.end()) {
        products.erase(it);
        cout << "Produto removido com sucesso." << endl;
        return true;
    }

    cout << "Produto com código " << code << " não encontrado." << endl;
    return false;
}

void listAllProducts() {
    cout << "Lista de Produtos:" << endl;
    cout << left << setw(15) << "Código"
              << setw(20) << "Nome"
              << "Preço" << endl;

    for (const auto& product : products) {
        cout << left << setw(15) << product.code
                  << setw(20) << product.name
                  << fixed << setprecision(2) << product.price << endl;
    }
}

double getPrice(const string& code) {
    auto it = find_if(products.begin(), products.end(),
                           [code](const Product& p) { return p.code == code; });

    if (it != products.end()) {
        return it->price;
    }

    return -1.0;  // Indica que o produto não foi encontrado
}

int main() {
    while (true) {
        cout << "\nEscolha uma opção:" << endl;
        cout << "1. Inserir um novo produto" << endl;
        cout << "2. Excluir um produto cadastrado" << endl;
        cout << "3. Listar todos os produtos" << endl;
        cout << "4. Consultar o preço de um produto por código" << endl;
        cout << "5. Sair" << endl;

        int choice;
        cout << "Digite sua escolha: ";
        cin >> choice;

        if (choice == 5)
            break;

        switch (choice) {
            case 1: {
                Product product;
                cout << "Digite o código do produto (13 caracteres): ";
                cin.ignore();
                getline(cin, product.code);

                cout << "Digite o nome do produto (máximo 20 caracteres): ";
                getline(cin, product.name);

                cout << "Digite o preço do produto: ";
                cin >> product.price;

                addProduct(product);
                break;
            }
            case 2: {
                string code;
                cout << "Digite o código do produto a ser removido: ";
                cin.ignore();
                getline(cin, code);

                removeProduct(code);
                break;
            }
            case 3:
                listAllProducts();
                break;
            case 4: {
                string code;
                cout << "Digite o código do produto para consultar o preço: ";
                cin.ignore();
                getline(cin, code);

                double price = getPrice(code);
                if (price != -1.0)
                    cout << "Preço do produto com código " << code << " é: " << price << endl;
                else
                    cout << "Produto com código " << code << " não encontrado." << endl;
                break;
            }
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }

    return 0;
}
