#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ItemSet
{
private:
    vector<string> itemData;

public:
    void inserir(string s)
    {
        if (verificarItem(s))
        {
            cout << "Item duplicado." << endl;
        }
        else
        {
            itemData.push_back(s);
            cout << "Item inserido com sucesso." << endl;
        }
    }

    bool verificarItem(string s)
    {
        for (auto i = 0; i < itemData.size(); i++)
        {
            if (itemData[i] == s)
            {
                return true;
            }
        }
        return false;
    }

    void excluir(string s)
    {
        if (verificarItem(s))
        {
            auto it = itemData.begin();
            while (it != itemData.end())
            {
                if (*it == s)
                {
                    it = itemData.erase(it);
                }
                else
                {
                    ++it;
                }
            }
        }
        else
            cout << "Item inexistente!";
    }
};

int main()
{
    ItemSet itemSet;

    itemSet.inserir("item1");
    itemSet.inserir("item2");
    itemSet.inserir("item1"); // Deve exibir "Item duplicado."

    itemSet.excluir("item2");
    itemSet.excluir("item3"); // Deve exibir "Item inexistente!"

    return 0;
}