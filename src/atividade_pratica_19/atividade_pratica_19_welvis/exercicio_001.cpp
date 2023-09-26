/*
Etapa 1: Individual 
    Crie uma classe ItemSet (conjunto de itens) 
    Dentro desta classe crie um vector de String É onde serão armazenados os 
    itens (cada item é um String) 
    IMPORTANTE! Não pode haver repetição de itens num mesmo conjunto! 
    Crie o método inserir(string s) que insere o item s no conjunto, caso ele não exista. 
    Crie o método excluir(string s) que exclui o item s do conjunto, caso ele exista. 
    Crie uma função main() para facilitar seus testes
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ItemSet {
private:
    vector<string> items;

public:
    // Método para inserir um item no conjunto, se ele não existir
    void inserir(string s) {
        // Verifica se o item já está no conjunto
        for (const string& item : items) {
            if (item == s) {
                cout << "Item \"" << s << "\" ja existe no conjunto." << endl;
                return;
            }
        }
        
        // Se o item não existir, adiciona ao conjunto
        items.push_back(s);
        cout << "Item \"" << s << "\" foi inserido no conjunto." << endl;
    }

    // Método para excluir um item do conjunto, se ele existir
    void excluir(string s) {
        // Procura o item no conjunto
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (*it == s) {
                items.erase(it);
                cout << "Item \"" << s << "\" foi removido do conjunto." << endl;
                return;
            }
        }

        // Se o item não foi encontrado, exibe uma mensagem de erro
        cout << "Item \"" << s << "\" nao encontrado no conjunto." << endl;
    }

    // Método para imprimir todos os itens no conjunto
    void listarItens() {
        cout << "Itens no conjunto:" << endl;
        for (const string& item : items) {
            cout << item << endl;
        }
    }
};

int main() {
    ItemSet conjunto;

    conjunto.inserir("Item1");
    conjunto.inserir("Item2");
    conjunto.inserir("Item3");
    conjunto.inserir("Item2"); // Este item já existe, portanto, não será inserido novamente

    conjunto.listarItens();

    conjunto.excluir("Item2");
    conjunto.excluir("Item4"); // Este item não existe, portanto, não será excluído

    conjunto.listarItens();

    return 0;
}
