#include <iostream>
#include <string>
#include "controle_de_tarefas.hpp"

using namespace std;

Livro::Livro(const string &titulo, const string &autor, int numCopias)
    : titulo(titulo), autor(autor), numCopiasDisponiveis(numCopias) {}

string Livro::getTitulo() { return titulo; }
string Livro::getAutor() { return autor; }
int Livro::getNumCopiasDisponiveis() { return numCopiasDisponiveis; }

void Livro::emprestarLivro()
{
    if (numCopiasDisponiveis > 0)
    {
        numCopiasDisponiveis--;
    }
    else
    {
        cout << "Nao ha copias disponiveis deste livro." << endl;
    }
}

void Livro::devolverLivro()
{
    numCopiasDisponiveis++;
}