#include "biblioteca.hpp"

Usuario::Usuario(string nome_usuario, string nome) : 
    nome_usuario(nome_usuario), nome(nome) {};

string Usuario::getNome_Usuario() const {
    return this->nome_usuario;
}

void Usuario::setNome_Usuario(string nome_usuario){
    this->nome_usuario = nome_usuario;
}

string Usuario::getNome() const {
    return this-> nome;
}

void Usuario::setNome(string nome) {
    this->nome = nome;
}

void Usuario::postar_tweet(Tweet& tweet) const {
    
}

void Usuario::seguir_usuario(Usuario& usuario) {
    this->seguindo.push_back(usuario);
    usuario.seguidores.push_back(*this);
}

vector<Usuario> Usuario::receber_feed() const {
    
}