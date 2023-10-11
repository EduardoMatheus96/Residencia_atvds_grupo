#include <iostream>
#include <string>
#include <vector>
#include "tic_car_rental.hpp"
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
    void setIdentificador(string identificador)
    {
        this->identificador = identificador;
    }

    void setVeiculo(Veiculo veiculo)
    {
        this->veiculo = veiculo;
    }
    void setCliente(Cliente cliente)
    {
        this->cliente = cliente;
    }
    void setFuncionario(Funcionario funcionario)
    {
        this->funcionario = funcionario;
    }
    void setDataInicio(Data dataInicio)
    {
        this->dataInicio = dataInicio;
    }
    void setDataTermino(Data dataTermino)
    {
        this->dataTermino = dataTermino;
    }
    void setDataDevolucao(Data dataDevolucao)
    {
        this->dataDevolucao = dataDevolucao;
    }
    void setDesconto(float desconto)
    {
        this->desconto = desconto;
    }
    void setAdicional(float adicional)
    {
        this->adicional = adicional;
    }
    Veiculo getVeiculo()
    {
        return veiculo;
    }
    string getIdentificador()
    {
        return identificador;
    }
    Cliente getCliente()
    {
        return cliente;
    }
    Funcionario getFuncionario()
    {
        return funcionario;
    }
    Data getDataInicio()
    {
        return dataInicio;
    }
    Data getDataTermino()
    {
        return dataTermino;
    }
    Data getDataDevolucao()
    {
        return dataDevolucao;
    }
    float getDesconto()
    {
        return desconto;
    }
    float getAdicional()
    {
        return adicional;
    }

    float calcularValorFinal()
    {
        float valorFinal = 0;
        valorFinal = (veiculo.getValorDiaria() * cliente.daysBetweenDates(getDataDevolucao(), getDataInicio())) + (getAdicional() - getDesconto());
        return valorFinal;
    }

    float getValorEntreDatas(Data dataInicio, Data dataFim)
    {

        int daysDifference = daysBetweenDates(dataInicio, dataFim);

        // Obter a data atual
        time_t currentTime = time(nullptr);
        struct tm *localTime = localtime(&currentTime);

        // Converte a data atual em struct Date
        Data currentDate;
        currentDate.dia = localTime->tm_mday;
        currentDate.mes = localTime->tm_mon + 1;     // tm_mon começa em 0
        currentDate.ano = localTime->tm_year + 1900; // tm_year é o número de anos desde 1900

        return veiculo.getValorDiaria() * daysDifference;
    }
    int daysBetweenDates(const Data &date1, const Data &date2)
    {
        // Converte as datas em structs tm
        struct tm tm1 = {0};
        tm1.tm_year = date1.ano - 1900;
        tm1.tm_mon = date1.mes - 1;
        tm1.tm_mday = date1.dia;

        struct tm tm2 = {0};
        tm2.tm_year = date2.ano - 1900;
        tm2.tm_mon = date2.mes - 1;
        tm2.tm_mday = date2.dia;

        // Converte as structs tm em timestamps
        time_t t1 = mktime(&tm1);
        time_t t2 = mktime(&tm2);

        // Calcula a diferença em segundos
        double difference = difftime(t2, t1);

        // Converte a diferença de segundos em dias
        int daysDifference = static_cast<int>(difference / (60 * 60 * 24));

        return daysDifference;
    }

    bool isDatePast(const Data &date)
    {
        // Obter a data atual
        time_t currentTime = time(nullptr);
        struct tm *localTime = localtime(&currentTime);

        // Converte a data atual em struct Date
        Data currentDate;
        currentDate.dia = localTime->tm_mday;
        currentDate.mes = localTime->tm_mon + 1;     // tm_mon começa em 0
        currentDate.ano = localTime->tm_year + 1900; // tm_year é o número de anos desde 1900

        // Compara a data fornecida com a data atual
        if (date.ano < currentDate.ano ||
            (date.ano == currentDate.ano && date.mes < currentDate.mes) ||
            (date.ano == currentDate.ano && date.mes == currentDate.mes && date.dia < currentDate.dia))
        {
            return true; // A data fornecida já passou
        }

        return false; // A data fornecida é igual ou futura em relação à data atual
    }
};