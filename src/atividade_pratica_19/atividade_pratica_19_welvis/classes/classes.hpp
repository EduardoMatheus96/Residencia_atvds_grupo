#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <string>
#include <vector>

using namespace std;

class ItemSet
{
private:
    vector<string> items;
public:
    // ItemSet();
    // ItemSet(vector<string> items);

    // Construtor padrão
    ItemSet() = default;

    ItemSet(const ItemSet& other);

    // Sobrecarga do operador de atribuição
    ItemSet& operator=(const ItemSet& other);

    // Sobrecarga do operador + para a união de conjuntos
    ItemSet operator+(const ItemSet& other) const;

    // Sobrecarga do operador * para a intersecção de conjuntos
    ItemSet operator*(const ItemSet& other) const;

    // Sobrecarga do operador - para a diferença de conjuntos (A = B - C)
    ItemSet operator-(const ItemSet& other) const;

    // Método para calcular a união simétrica de conjuntos (A = B <> C)
    ItemSet uniaoSimetrica(const ItemSet& other) const;

    // Sobrecarga do operador == para a comparação de conjuntos
    bool operator==(const ItemSet& other) const;

    void inserir(string s);
    void excluir(string s);

    // Método para verificar se o conjunto contém um item
    bool contem(const std::string& item) const;
};

#endif