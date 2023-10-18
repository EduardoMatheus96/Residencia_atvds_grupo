#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
class Lista_generica
{
private:
    vector<T> lista;

public:
    Lista_generica(){};
    Lista_generica(vector<T> lista)
    {
        this -> lista = lista;
    }

    void adicionar(T dado)
    {
        this->lista.push_back(dado);
    }

    void remove(T dado)
    {
        auto it = find(this->lista.begin(), this->lista.end(), dado);
        if (it != this->lista.end())
        {
            this->lista.erase(it);
        }
    }

    void lista_lista()
    {
        for (auto &&i : this->lista)
        {
            cout << i << endl;
        }
    }
};

#endif