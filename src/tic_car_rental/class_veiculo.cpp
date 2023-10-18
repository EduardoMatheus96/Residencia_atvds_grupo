#include "tic_car_rental.hpp"

Veiculo::Veiculo(string placa, string marca, string modelo, int ano, float valor_diaria) :
    placa(placa), marca(marca), modelo(modelo), ano(ano), valor_diaria(valor_diaria) {}

    bool Veiculo::getDisponivel(){
        return this->disponivel;
    }
    void Veiculo::setDisponivel(bool disponivel){
        this->disponivel = disponivel;
    }
    void Veiculo::setPlaca(string placa)
    {
        this->placa = placa;
    };

    void Veiculo::setMarca(string marca)
    {
        this->marca = marca;
    };

    void Veiculo::setModelo(string modelo)
    {
        this->modelo = modelo;
    };

    void Veiculo::setAno(int ano)
    {
        this->ano = ano;
    };

    void Veiculo::setValorDiaria(float valor_diaria)
    {
        this->valor_diaria = valor_diaria;
    };
    
    string Veiculo::getPlaca()
    {
        return this->placa;
    };

    string Veiculo::getMarca()
    {
        return this->marca;
    };

    string Veiculo::getModelo()
    {
        return this->modelo;
    };

    int Veiculo::getAno()
    {
        return this->ano;
    };

    float Veiculo::getValorDiaria()
    {
        return this->valor_diaria;
    };

    

