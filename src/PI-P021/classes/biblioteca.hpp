#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <vector>
#include <map>
#include <string>

using namespace std;

class Livro
{
private:
    string titulo;
    string autor;
    int numCopiasDisponiveis;

public:
    Livro(const string &titulo, const string &autor, int numCopias)
        : titulo(titulo), autor(autor), numCopiasDisponiveis(numCopias) {}

    string getTitulo();
    string getAutor();
    int getNumCopiasDisponiveis();

    void emprestarLivro();

    void devolverLivro();
};

class Usuario
{
private:
    string nome;

    struct Emprestimo
    {
        string nomeUsuario;
        string titulo;
    };

    vector<Livro> livros;
    vector<Emprestimo> emprestimos;

public:
    Usuario(const string &nome) : nome(nome) {}

    string getNome();

    void adicionarLivro(Livro livro);

    void emprestarLivro(const string &titulo, const string &nomeUsuario);

    void listarLivrosEmprestados(const string &nomeUsuario);
};

#endif