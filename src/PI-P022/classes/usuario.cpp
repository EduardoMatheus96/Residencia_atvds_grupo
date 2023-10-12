#include <iostream>
#include <string>
#include "biblioteca.hpp"

using namespace std;

Usuario::Usuario(const string &nome) : nome(nome) {}

string Usuario::getNome() { return nome; }

void Usuario::adicionarLivro(Livro livro)
{
    livros.push_back(livro);
}

void Usuario::emprestarLivro(string &titulo, string &nomeUsuario)
{
    for (Livro &livro : livros)
    {
        if (livro.getTitulo() == titulo)
        {
            livro.emprestarLivro();
            emprestimos.push_back({nomeUsuario, titulo});
            cout << "Livro emprestado com sucesso para " << nomeUsuario << "." << endl;
            return;
        }
    }
    cout << "Livro não encontrado na biblioteca." << endl;
}

void Usuario::listarLivrosEmprestados(string &nomeUsuario)
{
    cout << "Livros emprestados por " << nomeUsuario << ":" << endl;
    for (auto &emprestimo : emprestimos)
    {
        if (emprestimo.nomeUsuario == nomeUsuario)
        {
            cout << "  - " << emprestimo.titulo << endl;
        }
    }
}