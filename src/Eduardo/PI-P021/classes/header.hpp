#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Livro
{
private:
    string titulo;
    string autor;
    int numCopiasDisponiveis;
public:
    Livro() = default;
    Livro(const string& titulo, const string& autor, int numCopiasDisponivel);
    Livro(Livro &&) = default;
    Livro(const Livro &) = default;
    Livro &operator=(Livro &&) = default;
    Livro &operator=(const Livro &) = default;
    ~Livro() = default;

    string getTitulo() const;
    string getAutor() const;
    int getNumCopiasDisponiveis();
    void emprestarLivro();
    void devolverLivro();
};

class Usuario
{
private:
    string nome;
public:
    Usuario() = default;
    Usuario(const string& nome);
    Usuario(Usuario &&) = default;
    Usuario(const Usuario &) = default;
    Usuario &operator=(Usuario &&) = default;
    Usuario &operator=(const Usuario &) = default;
    bool operator<(const Usuario& outroUsuario) const;
    ~Usuario() = default;

    string getNome() const;
    
};

class Biblioteca
{
private:
    static vector<Livro> livros;
    static map<Usuario, vector<Livro>> emprestimos;
public:
    Biblioteca() = default;
    Biblioteca(Biblioteca &&) = default;
    Biblioteca(const Biblioteca &) = default;
    Biblioteca &operator=(Biblioteca &&) = default;
    Biblioteca &operator=(const Biblioteca &) = default;
    ~Biblioteca() = default;

    static void adicionarLivro(const Livro& livro);
    static void registrarEmprestimo(Usuario& usuario, Livro& livro);
    static void listarLivrosEmprestadosPorUsuario(const Usuario& usuario);
    
};

#endif