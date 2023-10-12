#include <iostream>
#include <map>
#include <string>
#include "classes/biblioteca.hpp"

using namespace std;

int main()
{
    // Adicionar alguns livros à biblioteca
    Usuario::adicionarLivro(Livro("Livro 1", "Autor 1", 5));
    Usuario::adicionarLivro(Livro("Livro 2", "Autor 2", 3));
    Usuario::adicionarLivro(Livro("Livro 3", "Autor 3", 2));

    // Realizar alguns empréstimos
    Usuario::emprestarLivro("Livro 1", "Usuário A");
    Usuario::emprestarLivro("Livro 2", "Usuário B");
    Usuario::emprestarLivro("Livro 1", "Usuário C");

    // Listar livros emprestados por um usuário específico
    Usuario::listarLivrosEmprestados("Usuário A");

    return 0;
}
