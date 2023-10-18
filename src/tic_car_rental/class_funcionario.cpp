#include "tic_car_rental.hpp"

Funcionario::Funcionario(string cpf, string nome, string endereco, string telefone, vector<Aluguel> historicoAlugueis) : Usuario(cpf, nome, endereco, telefone)
{
    this->historicoAlugueis = historicoAlugueis;
}
Aluguel Funcionario::alugarVeiculo(Cliente cliente, Veiculo veiculo, Data DataInicio, Data DataTermino)
{
    Aluguel temp;
    float desconto;
    temp.setIdentificador("ddasda"); // gerador de codigo aleatorio para identificador
    temp.setCliente(cliente);
    temp.setVeiculo(veiculo);
    temp.setDataInicio(DataInicio);
    temp.setDataTermino(DataTermino);
    temp.setDesconto(desconto);
    temp.setFuncionario(*this);
    historicoAlugueis.push_back(temp);
    return temp;
}

void Funcionario::finalizarAluguel(Aluguel aluguel, Data dataDevolucao)
{
    for (Aluguel n : historicoAlugueis)
    {
        if (n.getIdentificador() == aluguel.getIdentificador())
        {
            n.setDataDevolucao(dataDevolucao);
        }
    }
}

// Aluguel Funcionario::alugarVeiculo(Cliente cliente, Veiculo veiculo, Data DataInicio, Data DataTermino)
// {
//     Aluguel aluguel;
//     aluguel.setCliente(cliente);
//     aluguel.setVeiculo(veiculo);
//     aluguel.setDataInicio(DataInicio);
//     aluguel.setDataTermino(DataTermino);
//     return aluguel;
// }
