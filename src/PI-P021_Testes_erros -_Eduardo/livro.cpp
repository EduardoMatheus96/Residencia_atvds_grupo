#include <iostream>
#include <string>
#include "biblioteca.hpp"

using namespace std;

Livro::Livro(string titulo, string autor, string edicao) : 
    titulo(titulo), autor(autor), edicao(edicao) {};

string Livro::getTitulo() const{
    return this-> titulo;
};

bool Livro::operator<(const Livro& outroLivro) const {
        // Vamos comparar com base nos títulos dos livros
        return titulo < outroLivro.getTitulo();
    }

void Livro::setTitulo(string titulo){
    this-> titulo = titulo;
};
string Livro::getAutor(){
    return this-> autor;
};
void Livro::setAutor(string autor){
    this-> autor = autor;
};
string Livro::getEdicao(){
    return this->edicao;
};
void Livro::setEdicao(string edicao){
    this-> edicao = edicao;
};