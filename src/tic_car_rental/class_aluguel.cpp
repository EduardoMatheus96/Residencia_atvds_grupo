#include <iostream>
#include <string>
#include <vector>
#include "header.hpp"
using namespace std;


struct Data
{
    int ano;
    short mes;
    short dia;
};


class Aluguel
{
private:
    string identificador;
    Veiculo veiculo;
    Cliente cliente;
    Funcionario funcionario;
    Data dataInicio;
    Data dataTermino;
    Data dataDevolucao;
    float desconto;
    float adicional;
public:

    void setIdentificador(string identificador){
        this->identificador = identificador;
    }

    void setVeiculo(Veiculo veiculo){
        this->veiculo = veiculo;
    }
    void setCliente(Cliente cliente){
        this->cliente = cliente;
    }
    void setFuncionario(Funcionario funcionario){
        this->funcionario = funcionario;
    }
    void setDataInicio(Data dataInicio){
        this->dataInicio = dataInicio;
    }
    void setDataTermino(Data dataTermino){
        this->dataTermino = dataTermino;
    }
    void setDataDevolucao(Data dataDevolucao){
        this->dataDevolucao = dataDevolucao;
    }
    void setDesconto(float desconto){
        this->desconto = desconto;
    }
    void setAdicional(float adicional){
        this->adicional = adicional;
    }

    string getIdentificador(){
        return identificador;
    }
    Cliente getCliente(){
        return cliente;
    }
    Funcionario getFuncionario(){
        return funcionario;
    }
    Data getDataInicio(){
        return dataInicio;
    }
    Data getDataTermino(){
        return dataTermino;
    }
    Data getDataDevolucao(){
        return dataDevolucao;
    }
    float getDesconto(){
        return desconto;
    }
    float getAdicional(){
        return adicional;
    }

    float calcularValorFinal() {
        float valorFinal = 0;
        valorFinal = ( veiculo.precoPorDia() * daysBetweenDates(getDataDevolucao(),getDataInicio()) )  + (getAdicional() - getDesconto()) ;
        return valorFinal;
    }
    
};