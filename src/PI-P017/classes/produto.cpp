#include <iostream>
#include <string>
#include "compras.hpp"

using namespace std;

Produto::Produto(string nome, double valor) : nome(nome), valor(valor), codigo(codigo) {
    codigo = geraCodigo();
}

string Produto::getNome() const {
    return nome;
}

double Produto::getValor() const {
    return valor;
}

int Produto::getCodigo() const {
    return codigo;
}

unsigned int Produto::geraCodigo(){
    return 1 + rand()%1000;
}
