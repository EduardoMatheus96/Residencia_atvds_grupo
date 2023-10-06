#include <string>
#include <vector>
#include "tic_car_rental.hpp"
#include <ctime>

using namespace std;

Cliente::Cliente(string habilitacao, vector<Aluguel> historicoAlugueis) : habilitacao(habilitacao), historicoAlugueis(historicoAlugueis), {};

float Cliente::cotar_aluguel(Veiculo veiculo, Data &dataInicio, Data &dataFim)
{

    int daysDifference = daysBetweenDates(dataInicio, dataFim);
    bool disponivel = true;

    if (disponivel)
    {
        return veiculo.getValorDiaria() * daysDifference;
    }

    return -1;
};

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

Aluguel Cliente::solicitar_aluguel(Veiculo veiculo, Data &dataInicio, Data &dataFim)
{
    // int daysDifference = daysBetweenDates(dataInicio, dataFim);
    // return veiculo.getValorDiaria * daysDifference;
    
    // Obter a data atual
    time_t currentTime = time(nullptr);
    struct tm *localTime = localtime(&currentTime);

    // Converte a data atual em struct Date
    Data currentDate;
    currentDate.dia = localTime->tm_mday;
    currentDate.mes = localTime->tm_mon + 1;     // tm_mon começa em 0
    currentDate.ano = localTime->tm_year + 1900; // tm_year é o número de anos desde 1900

    return Aluguel(
        1,
        veiculo,
        *this,
        NULL,
        dataInicio,
        dataFim,
        currentDate,
        desconto,
        adicional);
};

void Cliente::devolver_veiculo(Aluguel aluguel, string dataDevolucao){

};
