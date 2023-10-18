#include "classes.hpp"

int main(void)
{
    vector<string> nomes = {"Eduardo", "Wilton", "Welvis"};
    Lista_generica<string> strings(nomes);
    strings.adicionar("Matheus");
    strings.remove("Wilton");
    strings.lista_lista();

    vector<int> numeros = {1, 3, 5, 7, 9};
    Lista_generica<int> lista_numeros;
    lista_numeros.adicionar(11);
    lista_numeros.adicionar(1);
    lista_numeros.adicionar(3);
    lista_numeros.adicionar(5);
    lista_numeros.remove(3);
    lista_numeros.lista_lista();

    return 0;
}
