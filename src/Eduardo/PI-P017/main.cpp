#include <iostream>
#include <string>
#include "classes/compras.hpp"

using namespace std;

int main(void)
{

    Produto produto1("Produto A", 10.99, 1001);
    Produto produto2("Produto B", 20.49, 1002);
    Produto produto3("Produto C", 5.99, 1003);

    // Exibindo informações dos produtos
    cout << "Produto 1:\nNome: " 
    << produto1.getNome() << "\nValor: " 
    << produto1.getValor() << "\nCódigo: " 
    << produto1.getCodigo() << "\n\n";
    
    cout << "Produto 2:\nNome: " 
    << produto2.getNome() << "\nValor: " 
    << produto2.getValor() << "\nCódigo: " 
    << produto2.getCodigo() << "\n\n";
    
    cout << "Produto 3:\nNome: " 
    << produto3.getNome() << "\nValor: " 
    << produto3.getValor() << "\nCódigo: " 
    << produto3.getCodigo() << "\n";
    
    return 0;
}
