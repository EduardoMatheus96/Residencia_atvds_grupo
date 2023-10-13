#include "header.hpp"

    void Biblioteca::adicionarLivro(const Livro& livro) {
        livros.push_back(livro);
    }

    void Biblioteca::registrarEmprestimo(Usuario& usuario, Livro& livro) {
        // Verifica a disponibilidade do livro antes de emprestar
        if (livro.getNumCopiasDisponiveis() > 0) {
            livro.emprestarLivro();
            emprestimos[usuario].push_back(livro);
        } else {
            cout << "Livro não disponível para empréstimo." << endl;
        }
    }

    void Biblioteca::listarLivrosEmprestadosPorUsuario(const Usuario& usuario) {
        if (emprestimos.find(usuario) != emprestimos.end()) {
            cout << "Livros emprestados por " << usuario.getNome() << ":\n";
            for (const auto& livro : emprestimos[usuario]) {
                cout << "- " << livro.getTitulo() << "\n";
            }
        } else {
            cout << "Nenhum livro emprestado por " << usuario.getNome() << "\n";
        }
    }

vector<Livro> Biblioteca::livros;
map<Usuario, vector<Livro>> Biblioteca::emprestimos;
