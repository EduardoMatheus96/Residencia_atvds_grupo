#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "classes.hpp"

using namespace std;

// ItemSet::ItemSet(){};
ItemSet::ItemSet(const ItemSet &other) : items(other.items) {}

ItemSet &ItemSet::operator=(const ItemSet &other)
{
    if (this == &other)
        return *this;

    items = other.items;
    return *this;
}

ItemSet ItemSet::operator+(const ItemSet& other) const {
    ItemSet result(*this);  // Cria uma cópia do conjunto atual
    for (const auto& item : other.items) {
        result.inserir(item);  // Insere os itens do outro conjunto no resultado
    }
    return result;
}

// Sobrecarga do operador * para a intersecção de conjuntos
ItemSet ItemSet::operator*(const ItemSet& other) const {
    ItemSet result;  // Cria um novo conjunto para armazenar a intersecção
    for (const auto& item : items) {
        if (other.contem(item)) {
            result.inserir(item);
        }
    }
    return result;
}

// Sobrecarga do operador - para a diferença de conjuntos (A = B - C)
ItemSet ItemSet::operator-(const ItemSet& other) const {
    ItemSet result;  // Cria um novo conjunto para armazenar a diferença
    for (const auto& item : items) {
        if (!other.contem(item)) {
            result.inserir(item);
        }
    }
    return result;
}

ItemSet ItemSet::uniaoSimetrica(const ItemSet& other) const {
    ItemSet result(*this);  // Cria uma cópia do conjunto atual

    // Adiciona os itens de other que não estão no conjunto atual
    for (const auto& item : other.items) {
        if (!contem(item)) {
            result.inserir(item);
        }
    }

    return result;
}

// Sobrecarga do operador == para a comparação de conjuntos
bool ItemSet::operator==(const ItemSet& other) const {
    // Verifica se todos os elementos do conjunto atual estão em 'other'
    for (const auto& item : items) {
        if (!other.contem(item)) {
            return false;
        }
    }

    // Verifica se todos os elementos de 'other' estão no conjunto atual
    for (const auto& item : other.items) {
        if (!contem(item)) {
            return false;
        }
    }

    return true;
}

// Método para verificar se o conjunto contém um item
bool ItemSet::contem(const std::string& item) const {
    return std::find(items.begin(), items.end(), item) != items.end();
}

void ItemSet::inserir(std::string s)
{
    // Verifica se o item já está no conjunto
    if (find(items.begin(), items.end(), s) == items.end())
    {
        items.push_back(s);
        cout << "Item '" << s << "' inserido no conjunto." << endl;
    }
    else
    {
        cout << "Item '" << s << "' já existe no conjunto. Não foi inserido." << endl;
    }
}

void ItemSet::excluir(std::string s) {
    auto it = std::find(items.begin(), items.end(), s);
    if (it != items.end()) {
        items.erase(it);
        std::cout << "Item '" << s << "' removido do conjunto." << std::endl;
    } else {
        std::cout << "Item '" << s << "' não encontrado no conjunto. Nada foi removido." << std::endl;
    }
}