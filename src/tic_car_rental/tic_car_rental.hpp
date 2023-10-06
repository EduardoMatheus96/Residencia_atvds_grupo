#ifndef TIC_CAR_RENTAL_HPP
#define TIC_CAR_RENTAL_HPP
#include <string>
#include <vector>

using namespace std;

class Aluguel
{
};

class Veiculo
{
};

class Funcionario
{
};

class Usuario
{
};

class Cliente
{
private:
    string habilitacao;
    vector<Aluguel> historicoAlugueis;

public:
    Cliente(string habilitacao, vector<Aluguel> historicoAlugueis);

    float cotar_aluguel(Veiculo veiculo, string dataInicio, string dataFim) const;
    Aluguel solicitar_aluguel(Veiculo veiculo, string dataInicio, string dataFim) const;
    void devolver_veiculo(Aluguel aluguel, string dataDevolucao) const;
};



#endif