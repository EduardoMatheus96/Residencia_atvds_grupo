#include <iostream>
#include <string>
#include "../celular.cpp"

void Celular::setSistemaOperacional(const string& sistemaOp) {
    this->sistemaOp = sistemaOp;
}

void Celular::setMarca(const string& marca) {
    this->marca = marca;
}

void Celular::setModelo(const string& modelo) {
    this->modelo = modelo;
}

void Celular::setCamera(const string& camera) {
    this->camera = camera;
}

void Celular::setMemoria(const string& memoria) {
    this->memoria = memoria;
}

string Celular::getSistemaOperacional() const {
    return sistemaOp;
}

string Celular::getMarca() const {
    return marca;
}

string Celular::getModelo() const {
    return modelo;
}

string Celular::getCamera() const {
    return camera;
}

string Celular::getMemoria() const {
    return memoria;
}

string Celular::getNumSerie() const {
    return numSerie;
}
float Celular::getPorcBateria() const {
    return porcBateria;
}