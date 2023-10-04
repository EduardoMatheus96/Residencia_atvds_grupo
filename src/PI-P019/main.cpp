#include <iostream>
#include "classes/classes.hpp"

using namespace std;

int main(void)
{
    // Testando a classe ItemSet
    ItemSet conjuntoA;
    conjuntoA.inserir("item1");
    conjuntoA.inserir("item2");

    // Criando um novo conjunto B a partir do conjunto A
    ItemSet conjuntoB(conjuntoA);

    // Exibindo os itens do conjunto B
    conjuntoB.inserir("item3"); // Adicionando um item em B
    conjuntoB.inserir("item2"); // Tentando adicionar um item que já existe

    ItemSet conjuntoC;
    conjuntoC.inserir("item4");
    conjuntoC.inserir("item5");

    ItemSet conjuntoUniaoBC = conjuntoB + conjuntoC;
    ItemSet interseccaoBC = conjuntoB * conjuntoC; // Intersecção de B e C
    ItemSet diferencaBC = conjuntoB - conjuntoC;   // Diferença de B e C
    ItemSet uniaoSimetricaBC = conjuntoB.uniaoSimetrica(conjuntoC);

    if (conjuntoA == conjuntoB)
    {
        cout << "Os conjuntos são iguais." << endl;
    }
    else
    {
        cout << "Os conjuntos são diferentes." << endl;
    }
}
