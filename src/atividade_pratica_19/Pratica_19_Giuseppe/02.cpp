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
            cout << "Item " << s << " inserido com sucesso." << endl;
        }
    }

    bool verificarItem(string s){
        for (auto i = 0; i < itemData.size(); i++)
        {
            if (itemData[i] == s)
            {
                return true;
            }
        }
        return false;
    }

    void excluir(string s){
        if (verificarItem(s))
        {
            auto it = itemData.begin();
            while (it != itemData.end())
            {
                if (*it == s)
                {
                    it = itemData.erase(it);
                    cout << "Item " << s << " excluido com sucesso!" << endl;
                }
                else
                {
                    ++it;
                }
            }
        }
        else
            cout << "Item inexistente!" << endl;
    }

    ItemSet& operator=(ItemSet atribuir){

        if (this != &atribuir)
        {
            itemData = atribuir.itemData;
        }
        return *this;
    }

    void listar(){
        cout << "Itens no conjunto:" << endl;
        for (const string &item : itemData)
        {
            cout << item << endl;
        }
    }

    bool operator==(ItemSet comparar){
        if (this->itemData == comparar.itemData)
        {
            return true;
        }
        else return false;
    }

};

int main()
{
    ItemSet itemSet;
    ItemSet itemSet2;
    bool resultado;
    itemSet2.inserir("Pastel");
    itemSet2.inserir("CaldoDeCana");
    itemSet2.inserir("Coxinha");
    itemSet.inserir("item1");
    itemSet.inserir("item2");
    itemSet.inserir("item1"); // Deve exibir "Item duplicado."

    itemSet.excluir("item2");
    itemSet.excluir("item3"); // Deve exibir "Item inexistente!"
    itemSet = itemSet2; // Atribui o vector do itemSet2 para o ItemSet.
    resultado = itemSet==itemSet2; // Compara os vectores.
    cout << resultado;
    return 0;
}
