#include <iostream>
#include <vector>
#include "biblioteca.hpp"

using namespace std;

Biblioteca::Biblioteca(
    map<Livro, int> estoque
    ) : estoque(estoque) {};

    vector<Livro> Biblioteca::getLivros(){
        return this->livros;
    };
    void Biblioteca::adicionaLivros(Livro livro){
        this->livros.push_back(livro);
    };
    bool Biblioteca::verificaDisponibilidadeLivro(Livro livro){
        return this->estoque[livro];
    };
    void Biblioteca::setEmprestimo(Usuario usuario, Livro livro, string data){
        map<Livro, string> emprestimo;
        emprestimo[livro] = data;
        Biblioteca::emprestimos[usuario] = emprestimo;
        if (this->estoque[livro])
        {
            this->estoque[livro]-=1;
        } else {
            cout << "Não tem mais no estoque";
        }
        
    };
    void Biblioteca::listarLivrosEmprestados(const Usuario& usuario){
         auto it = emprestimos.find(usuario);
        if (it == emprestimos.end()) {
            cout << "O usuario nao possui emprestimos." << std::endl;
            return;
        }

        cout << "Livros emprestados por " << usuario.getNome() << ":" << endl;
        const map<Livro, string>& emprestimosUsuario = it->second;
        for (auto itLivro = emprestimosUsuario.begin(); itLivro != emprestimosUsuario.end(); ++itLivro) {
            cout << "Livro: " << itLivro->first.getTitulo() << ", Data de devolucao: " << itLivro->second << endl;
        }
        
    };