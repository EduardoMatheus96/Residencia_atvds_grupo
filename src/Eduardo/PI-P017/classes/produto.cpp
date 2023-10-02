#include <iostream>
#include <string>
#include "compras.hpp"

using namespace std;

Produto::Produto(string nome, double valor, int codigo) : nome(nome), valor(valor), codigo(codigo) {}


string Produto::getNome() const {
    return nome;
}

double Produto::getValor() const {
    return valor;
}

int Produto::getCodigo() const {
    return codigo;
}
