#ifndef TIC_CAR_RENTAL_HPP
#define TIC_CAR_RENTAL_HPP
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Aluguel;
class Usuario;
class Cliente;
class Veiculo;
class Funcionario;

struct Data
{
    int ano;
    int mes;
    int dia;
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
    Aluguel();
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
    void setFuncionario(Funcionario& funcionario);
    void setDataInicio(Data dataInicio);
    void setDataTermino(Data dataTermino);
    void setDataDevolucao(Data dataDevolucao);
    void setAdicional(float adicional);
    void setDesconto(float desconto);
    Veiculo getVeiculo();
    string getIdentificador();
    Cliente getCliente();
    Funcionario getFuncionario();
    Data getDataInicio();
    Data getDataTermino();
    Data getDataDevolucao();
    float getDesconto();
    float getAdicional();
    float calcularValorFinal();
    float getValorEntreDatas();
};

class Veiculo
{
private:
    string placa;
    string marca;
    string modelo;
    int ano;
    float valor_diaria;
    bool disponivel;

public:
    Veiculo(string placa, string marca, string modelo, int ano, float valor_diaria);
    bool getDisponivel();
    void setDisponivel(bool disponivel);
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

class Funcionario : public Usuario
{
private:
    vector<Aluguel> historicoAlugueis;

public:
Funcionario();
    Funcionario(string cpf, string nome, string endereco, string telefone, vector<Aluguel> historicoAlugueis)
        : Usuario(cpf, nome, endereco, telefone)
    {
        this->historicoAlugueis = historicoAlugueis;
    };

    Aluguel alugarVeiculo(Cliente cliente, Veiculo veiculo, Data DataInicio, Data DataTermino);

    void finalizarAluguel(Aluguel aluguel, Data dataDevolucao);
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

class Cliente : public Usuario
{
private:
    string habilitacao;
    vector<Aluguel> historicoAlugueis;

public:
    Cliente(string cpf, string nome, string endereco, string telefone, string habilitacao, vector<Aluguel> historicoAlugueis) : Usuario(cpf, nome, endereco, telefone)
    {
        this->habilitacao = habilitacao;
        this->historicoAlugueis = historicoAlugueis;
    };

    float cotar_aluguel(Veiculo veiculo, Data &dataInicio, Data &dataFim);
    Aluguel solicitar_aluguel(Veiculo veiculo, Data &dataInicio, Data &dataFim);
    void devolver_veiculo(Aluguel aluguel, string dataDevolucao);
    int daysBetweenDates(const Data &date1, const Data &date2);
    int daysBetweenDates(const Data &Data1, const Data &date2);
    ;
    bool isDatePast(const Data &date);
};

#endif
