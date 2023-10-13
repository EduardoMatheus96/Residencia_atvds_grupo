#include "header.hpp"

int main() {
    // Criando alguns livros e usuários
    Livro livro1("Livro 1", "Autor 1", 10);
    Livro livro2("Livro 2", "Autor 2", 2);
    Livro livro3("Livro 3", "Autor 3", 4);

    Usuario usuario1("Usuário 1");
    Usuario usuario2("Usuário 2");

    // Adicionando livros à biblioteca
    Biblioteca::adicionarLivro(livro1);
    Biblioteca::adicionarLivro(livro2);
    Biblioteca::adicionarLivro(livro3);

    // Registrando empréstimos
    Biblioteca::registrarEmprestimo(usuario1, livro1);
    Biblioteca::registrarEmprestimo(usuario1, livro2);
    Biblioteca::registrarEmprestimo(usuario2, livro3);

    // Listando livros emprestados para usuários
    Biblioteca::listarLivrosEmprestadosPorUsuario(usuario1);
    Biblioteca::listarLivrosEmprestadosPorUsuario(usuario2);

    return 0;
}
