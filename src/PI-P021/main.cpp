#include <iostream>
#include <map>
#include <string>
#include "biblioteca.hpp"

using namespace std;

int main(void)
{
    Usuario user01("Wilton");
    Livro livro01("Harry Potter", "JK H.", "Edicao 02");
    Livro livro02("Senhor dos Aneis", "Token", "Edicao 07");
    Livro livro03("As Cronicas de Narnia", "Desconhecido", "Edicao 05");
    map<Livro, int> estoque;
    estoque[livro01] = 20;
    estoque[livro02] = 70;
    estoque[livro03] = 2;
    Biblioteca biblioteca(estoque);
    biblioteca.adicionaLivros(livro01);
    biblioteca.adicionaLivros(livro02);
    biblioteca.adicionaLivros(livro03);
    biblioteca.setEmprestimo(user01, livro02, "10 de Outubro de 2017");
    // biblioteca.verificaDisponibilidadeLivro(livro01);
    // biblioteca.verificaDisponibilidadeLivro(livro02);
    // biblioteca.verificaDisponibilidadeLivro(livro03);
    biblioteca.listarLivrosEmprestados(user01);
    return 0;
}
