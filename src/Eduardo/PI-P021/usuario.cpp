#include "header.hpp"

Usuario::Usuario(const string &nome) : nome(nome) {}

bool Usuario::operator<(const Usuario& outroUsuario) const {
        return nome < outroUsuario.nome;
    }

string Usuario::getNome() const
{
    return nome;
}