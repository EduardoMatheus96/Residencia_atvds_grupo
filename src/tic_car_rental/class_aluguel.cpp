#include "tic_car_rental.hpp"
// struct Data
// {
//     int ano;
//     short mes;
//     short dia;
// };

Aluguel::Aluguel(string identificador,
            Veiculo veiculo,
            Cliente cliente,
            Funcionario funcionario,
            Data dataInicio,
            Data dataTermino,
            Data dataDevolucao,
            float desconto,
            float adicional) :
            identificador(identificador),
            veiculo(veiculo),
            cliente(cliente),
            funcionario(funcionario),
            dataInicio(dataInicio),
            dataTermino(dataTermino),
            dataDevolucao(dataDevolucao),
            desconto(desconto),
            adicional(adicional) {}


    void Aluguel::setIdentificador(string identificador)
    {
        this->identificador = identificador;
    }

    void Aluguel::setVeiculo(Veiculo veiculo)
    {
        this->veiculo = veiculo;
    }
    void Aluguel::setCliente(Cliente cliente)
    {
        this->cliente = cliente;
    }
    void Aluguel::setFuncionario(Funcionario& funcionario)
    {
        this->funcionario = funcionario;
    }
    void Aluguel::setDataInicio(Data dataInicio)
    {
        this->dataInicio = dataInicio;
    }
    void Aluguel::setDataTermino(Data dataTermino)
    {
        this->dataTermino = dataTermino;
    }
    void Aluguel::setDataDevolucao(Data dataDevolucao)
    {
        this->dataDevolucao = dataDevolucao;
    }
    void Aluguel::setDesconto(float desconto)
    {
        this->desconto = desconto;
    }
    void Aluguel::setAdicional(float adicional)
    {
        this->adicional = adicional;
    }
    Veiculo Aluguel::getVeiculo()
    {
        return veiculo;
    }
    string Aluguel::getIdentificador()
    {
        return identificador;
    }
    Cliente Aluguel::getCliente()
    {
        return cliente;
    }
    Funcionario Aluguel::getFuncionario()
    {
        return funcionario;
    }
    Data Aluguel::getDataInicio()
    {
        return dataInicio;
    }
    Data Aluguel::getDataTermino()
    {
        return dataTermino;
    }
    Data Aluguel::getDataDevolucao()
    {
        return dataDevolucao;
    }
    float Aluguel::getDesconto()
    {
        return desconto;
    }
    float Aluguel::getAdicional()
    {
        return adicional;
    }

    float Aluguel::calcularValorFinal()
    {
        float valorFinal = 0;
        valorFinal = (veiculo.getValorDiaria() * cliente.daysBetweenDates(getDataDevolucao(), getDataInicio())) + (getAdicional() - getDesconto());
        return valorFinal;
    }

    int Aluguel::daysBetweenDates(const Data &date1, const Data &date2)
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

    float Aluguel::getValorEntreDatas(Data dataInicio, Data dataFim)
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
    

    bool Aluguel::isDatePast(const Data &date)
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
