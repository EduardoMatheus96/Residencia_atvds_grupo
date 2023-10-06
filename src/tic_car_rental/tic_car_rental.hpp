#ifndef TIC_CAR_RENTAL_HPP
#define TIC_CAR_RENTAL_HPP
#include <string>
#include <vector>

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
    Aluguel(string identificador,
            Veiculo veiculo,
            Cliente cliente,
            Funcionario funcionario,
            Data dataInicio,
            Data dataTermino,
            Data dataDevolucao,
            float desconto,
            float adicional);

    void setIdentificador(string identificador);
    void setVeiculo(Veiculo veiculo);
    void setCliente(Cliente cliente);
    void setFuncionario(Funcionario funcionario);
    void setDataInicio(Data dataInicio);
    void setDataTermino(Data dataTermino);
    void setDataDevolucao(Data dataDevolucao);
    void setAdicional(float adicional);
    void setDesconto(float desconto);
    string getIdentificador();
    Cliente getCliente();
    Funcionario getFuncionario();
    Data getDataInicio();
    Data getDataTermino();
    Data getDataDevolucao();
    float getDesconto();
    float getAdicional();
    float calcularValorFinal();
};

class Veiculo
{
private:
    string placa;
    string marca;
    string modelo;
    int ano;
    float valor_diaria;

public:
    Veiculo(string placa, string marca, string modelo, int ano, float valor_diaria);

    void setPlaca(string placa);
    void setMarca(string marca);
    void setModelo(string modelo);
    void setAno(int ano);
    void setValorDiaria(float valor_diaria);
    string getPlaca();
    string getMarca();
    string getModelo();
    int getAno();
    float getValorDiaria();
};

class Funcionario
{
};

class Usuario
{
private:
    string cpf;
    string nome;
    string endereco;
    string telefone;

public:
    Usuario(string cpf, string nome, string endereco, string telefone);
    void setCPF(string cpf);
    void setNome(string nome);
    void setEndereco(string endereco);
    void setTelefone(string telefone);

    string getCPF();
    string getNome();
    string getEndereco();
    string getTelefone();
};

class Cliente
{
private:
    string habilitacao;
    vector<Aluguel> historicoAlugueis;

public:
    Cliente(string habilitacao, vector<Aluguel> historicoAlugueis);

    float cotar_aluguel(Veiculo veiculo, string dataInicio, string dataFim);
    Aluguel solicitar_aluguel(Veiculo veiculo, string dataInicio, string dataFim);
    void devolver_veiculo(Aluguel aluguel, string dataDevolucao);
};

#endif
