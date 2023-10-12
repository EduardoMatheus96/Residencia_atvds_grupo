#include <iostream>
#include <string>
#include "biblioteca.hpp"

using namespace std;

Usuario::Usuario(string nome): nome(nome) {};

string Usuario::getNome() const{
    return this-> nome;
}

bool Usuario::operator<(const Usuario& outroUsuario) const {
        // Vamos comparar com base nos títulos dos livros
        return nome < outroUsuario.getNome();
    }