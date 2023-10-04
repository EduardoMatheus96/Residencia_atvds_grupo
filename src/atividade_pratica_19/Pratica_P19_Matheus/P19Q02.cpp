#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

    ItemSet operator*(ItemSet comum){
        ItemSet resultado;
        for (string item : comum.itemData)
        {
             if (find(this->itemData.begin(), this->itemData.end(), item) != this->itemData.end()) {
            
            resultado.itemData.push_back(item);
            }  
        }
        return resultado;
        
    }

    ItemSet operator+(ItemSet soma) const {
        ItemSet resultado = *this; // Cria uma cópia do objeto atual
        for (string item : soma.itemData) {
        // Verifica se o item não está na cópia atual
            if (find(resultado.itemData.begin(), resultado.itemData.end(), item) == resultado.itemData.end()) {
            // Se não estiver, adiciona à cópia
            resultado.itemData.push_back(item);
            }
        }
    return resultado; // Retorna a cópia atualizada
    }

    ItemSet operator-(ItemSet subtracao){
        ItemSet resultado;
        for (string item : this->itemData)
        {
             if (find(subtracao.itemData.begin(), subtracao.itemData.end(), item) == subtracao.itemData.end()) {
            
            resultado.itemData.push_back(item);
            }
        }
        return resultado;
    }

    ItemSet operator&(ItemSet delta){
            ItemSet resultado;
        for (string item : this->itemData)
        {
             if (find(delta.itemData.begin(), delta.itemData.end(), item) == delta.itemData.end()) {
            
            resultado.itemData.push_back(item);
            }
        }
        for (string item : delta.itemData)
        {
             if (find(this->itemData.begin(), this->itemData.end(), item) == this->itemData.end()) {
            
            resultado.itemData.push_back(item);
            }  
        }
        return resultado;
    }


};

int main()
{
    ItemSet itemSet;
    ItemSet itemSet2;
    ItemSet itemSet3;
    bool resultado;
    itemSet2.inserir("Pastel");
    itemSet2.inserir("CaldoDeCana");
    itemSet2.inserir("Coxinha");
    itemSet3.inserir("Pastel");
    itemSet3.inserir("Numero");
    itemSet3.inserir("DDD");
    itemSet.inserir("item1");
    itemSet.inserir("item2");
    itemSet.inserir("item1"); // Deve exibir "Item duplicado."

    itemSet.excluir("item2");
    itemSet.excluir("item3"); // Deve exibir "Item inexistente!"
    itemSet = itemSet2 & itemSet3; 
    itemSet.listar();
    resultado = itemSet==itemSet2; // Compara os vectores.
    cout << resultado;
    return 0;
}
