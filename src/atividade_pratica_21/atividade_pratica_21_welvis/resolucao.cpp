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
            cout << "Não há cópias disponíveis deste livro." << endl;
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
        cout << "Livro não encontrado na biblioteca." << endl;
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
