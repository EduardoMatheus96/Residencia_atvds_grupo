#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class ListaGenerica
{
private:
    vector<T> lista;

public:
    ListaGenerica() {}
    void add(T item)
    {
        this->lista.push_back(item);
    }
    void remover(T item)
    {
        auto it = find(this->lista.begin(), this->lista.end(), item);
        if (it != this->lista.end())
        {
            this->lista.erase(it);
        }
    }
    void listar()
    {
        for (T item : this->lista)
        {
            cout << item << endl;
        }
    }
};

int main()
{
    ListaGenerica<string> l;
    l.add("aaaa");
    l.add("bbbb");
    l.add("cccc");
    l.listar();
    l.remover("aaaa");
    l.listar();

    return 0;
}
