#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"
using namespace std;

class Funcionario: public Usuario
{
private:

    vector<Aluguel> historicoAlugueis;
public:
    Funcionario (string cpf, string nome, string endereco, string telefone)
    : Usuario (cpf,nome,endereco,telefone){
    };

    Aluguel alugarVeiculo(Cliente cliente, Veiculo veiculo, Data DataInicio, Data DataTermino){
        Aluguel temp;
        float desconto;
        temp.setIdentificador("ddasda"); //gerador de codigo aleatorio para identificador
        temp.setCliente(cliente);
        temp.setVeiculo(veiculo);
        temp.setDataInicio(DataInicio);
        temp.setDataTermino(DataTermino);
        temp.setDesconto(desconto);
        temp.setFuncionario(*this);
        historicoAlugueis.push_back(temp);
        return temp;
    }

    void finalizarAluguel(Aluguel aluguel, Data dataDevolucao){
    
    
    }
    
};

int main(void){

    Funcionario joao("0645353054350","Joao Pereira", "Rua 1", "73-999531310");

}

