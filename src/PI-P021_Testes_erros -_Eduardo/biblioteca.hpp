#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <vector>
#include <map>
#include <string>

using namespace std;

class Livro;
class Usuario;
class Emprestimo;

class Usuario
{
private:
    string nome;
public:
    Usuario() = default;
    Usuario(string nome);
    Usuario(Usuario &&) = default;
    Usuario(const Usuario &) = default;
    Usuario &operator=(Usuario &&) = default;
    Usuario &operator=(const Usuario &) = default;
    bool operator<(const Usuario& outroUsuario) const;
    ~Usuario() = default;

    string getNome() const;
    void setNome();
    
};

class Livro
{
private:
    string titulo;
    string autor;
    string edicao;
public:
    Livro() = default;
    Livro(string titulo, string autor, string edicao);
    Livro(Livro &&) = default;
    Livro(const Livro &) = default;
    Livro &operator=(Livro &&) = default;
    Livro &operator=(const Livro &) = default;
    bool operator<(const Livro& outroLivro) const;
    ~Livro() = default;
    
    string getTitulo() const;
    void setTitulo(string titulo);
    string getAutor();
    void setAutor(string autor);
    string getEdicao();
    void setEdicao(string edicao);
};

class Biblioteca
{
private:
    vector<Livro> livros;
    map<Usuario, map<Livro, string>> emprestimos;
    map<Livro, int> estoque;
public:
    Biblioteca() = default;
    Biblioteca(
    map<Livro, int> estoque
    );
    Biblioteca(Biblioteca &&) = default;
    Biblioteca(const Biblioteca &) = default;
    Biblioteca &operator=(Biblioteca &&) = default;
    Biblioteca &operator=(const Biblioteca &) = default;
    ~Biblioteca() = default;

    vector<Livro> getLivros() const;
    // void setLivros(Livro livro);
    void adicionaLivros(Livro livro);
    // Emprestimo getEmprestimo();
    void setEmprestimo(Usuario usuario, Livro livro, string data);
    bool verificaDisponibilidadeLivro(Livro livro);
    void listarLivrosEmprestados(const Usuario& usuario);
};


#endif