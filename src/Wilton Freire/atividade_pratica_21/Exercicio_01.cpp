#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Livro
{
public:
    Livro(const string &titulo, const string &autor, int numCopias)
        : titulo(titulo), autor(autor), numCopiasDisponiveis(numCopias) {}

    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getNumCopiasDisponiveis() const { return numCopiasDisponiveis; }

    void emprestarLivro()
    {
        if (numCopiasDisponiveis > 0)
        {
            numCopiasDisponiveis--;
        }
        else
        {
            cout << "Nao ha copias disponíveis deste livro." << endl;
        }
    }

    void devolverLivro()
    {
        numCopiasDisponiveis++;
    }

private:
    string titulo;
    string autor;
    int numCopiasDisponiveis;
};

class Usuario
{
public:
    Usuario(const string &nome) : nome(nome) {}

    string getNome() const { return nome; }

    static void adicionarLivro(Livro livro)
    {
        livros.push_back(livro);
    }

    static void emprestarLivro(const string &titulo, const string &nomeUsuario)
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
        cout << "Livro nao encontrado na biblioteca." << endl;
    }

    static void listarLivrosEmprestados(const string &nomeUsuario)
    {
        cout << "Livros emprestados por " << nomeUsuario << ":" << endl;
        for (const auto &emprestimo : emprestimos)
        {
            if (emprestimo.nomeUsuario == nomeUsuario)
            {
                cout << "  - " << emprestimo.titulo << endl;
            }
        }
    }

private:
    string nome;

    struct Emprestimo
    {
        string nomeUsuario;
        string titulo;
    };

    static vector<Livro> livros;
    static vector<Emprestimo> emprestimos;
};

vector<Livro> Usuario::livros;
vector<Usuario::Emprestimo> Usuario::emprestimos;

int main()
{
    // Adicionar alguns livros à biblioteca
    Usuario::adicionarLivro(Livro("Dom Quixote", "Miguel de Cervantes", 3));
    Usuario::adicionarLivro(Livro("Um conto de duas cidades", "Charles Dickens", 4));
    Usuario::adicionarLivro(Livro("O Alquimista", "Paulo Coelho", 2));
    Usuario::adicionarLivro(Livro("O Pequeno Principe", "Antoine de Saint-Exupéry", 5));
    Usuario::adicionarLivro(Livro("Harry Potter e a Pedra Filosofal", "J. K. Rowling", 2));
    Usuario::adicionarLivro(Livro("O Hobbit", "J.R.R. Tolkien", 2));

    // Realizar alguns empréstimos
    Usuario::emprestarLivro("Dom Quixote", "Wilton");
    Usuario::emprestarLivro("O Alquimista", "Giusepp");
    Usuario::emprestarLivro("Harry Potter e a Pedra Filosofal", "Eduardo");
    Usuario::emprestarLivro("O Hobbit", "Mateus");
    Usuario::emprestarLivro("O Alquimista", "Welvis");
    Usuario::emprestarLivro("O Alquimista", "Wilton");
    Usuario::emprestarLivro("Dom Quixote", "Mateus");
    Usuario::emprestarLivro("O Pequeno Príncipe", "Eduardo");
    Usuario::emprestarLivro("Um conto de duas cidades", "Giusepp");


    // Listar livros emprestados por um usuário específico
    Usuario::listarLivrosEmprestados("Wilton");
    Usuario::listarLivrosEmprestados("Eduardo");
    Usuario::listarLivrosEmprestados("Welvis");
    Usuario::listarLivrosEmprestados("Mateus");
    Usuario::listarLivrosEmprestados("Giusepp");

    return 0;
}