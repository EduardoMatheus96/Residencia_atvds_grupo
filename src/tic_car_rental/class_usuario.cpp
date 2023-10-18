#include "tic_car_rental.hpp"

Usuario::Usuario(string cpf, string nome, string endereco, string telefone) : cpf(cpf), nome(nome), endereco(endereco), telefone(telefone)
{
    this->cpf = cpf;
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

void Usuario::setCPF(string cpf)
{
    this->cpf = cpf;
}

void Usuario::setNome(string nome)
{
    this->nome = nome;
}
void Usuario::setEndereco(string endereco)
{
    this->endereco = endereco;
}
void Usuario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Usuario::getCPF()
{
    return cpf;
}
string Usuario::getNome()
{
    return nome;
}
string Usuario::getEndereco()
{
    return endereco;
}
string Usuario::getTelefone()
{
    return telefone;
}
