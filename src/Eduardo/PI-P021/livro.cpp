#include "header.hpp"

Livro::Livro(const string &titulo, const string &autor, int numCopias) 
    : titulo(titulo), autor(autor), numCopiasDisponiveis(numCopias) {};

string Livro::getTitulo() const
{
    return titulo;
}

string Livro::getAutor() const
{
    return autor;
}

int Livro::getNumCopiasDisponiveis()
{
    return numCopiasDisponiveis;
}

void Livro::emprestarLivro()
{
    if (numCopiasDisponiveis > 0)
    {
        numCopiasDisponiveis--;
    }
}

void Livro::devolverLivro()
{
    numCopiasDisponiveis++;
}

