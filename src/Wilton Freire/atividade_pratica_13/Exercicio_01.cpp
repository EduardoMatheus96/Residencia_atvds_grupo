#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

struct Passageiro
{
    int numeroAssento;
    string dataHora;
    string CPF;
    string nome;
    int idade;
};

double calcularTotalArrecadado(const vector<Passageiro> &passageiros)
{
    return passageiros.size() * 80.0;
}

double calcularTotalArrecadadoNoMes(const vector<Passageiro> &passageiros, int mes)
{
    double total = 0.0;
    for (const Passageiro &passageiro : passageiros)
    {
        int mesPassageiro = stoi(passageiro.dataHora.substr(5, 2));
        if (mesPassageiro == mes)
        {
            total += 80.0;
        }
    }
    return total;
}

string encontrarNomePassageiro(const vector<Passageiro> &passageiros, int numeroAssento)
{
    for (const Passageiro &passageiro : passageiros)
    {
        if (passageiro.numeroAssento == numeroAssento)
        {
            return passageiro.nome;
        }
    }
    return "Poltrona vazia";
}

string encontrarHorarioMaisRentavel1(const vector<Passageiro> &passageiros)
{
    vector<int> contagemHorarios(5, 0);

    for (const Passageiro &passageiro : passageiros)
    {
        int horaViagem = stoi(passageiro.dataHora.substr(11, 2));
        contagemHorarios[horaViagem]++;
    }

    int horarioMaisRentavel = 0;
    int passageirosNoHorarioMaisRentavel = contagemHorarios[0];
    for (int i = 1; i < 5; ++i)
    {
        if (contagemHorarios[i] > passageirosNoHorarioMaisRentavel)
        {
            horarioMaisRentavel = i;
            passageirosNoHorarioMaisRentavel = contagemHorarios[i];
        }
    }

    // Supondo que os horários sejam "08:00", "10:00", "12:00", "14:00" e "16:00"
    string horario = "0" + to_string(8 + 2 * horarioMaisRentavel) + ":00";
    return horario;
}

string encontrarHorarioMaisRentavel(const vector<Passageiro> &passageiros)
{
    map<string, int> passageirosPorHorario;

    for (const Passageiro &passageiro : passageiros)
    {
        string horario = passageiro.dataHora.substr(11, 2);
        passageirosPorHorario[horario]++;
    }

    string horarioComMaisPassageiros;
    int maiorNumeroPassageiros = 0;

    for (const auto &pair : passageirosPorHorario)
    {
        if (pair.second > maiorNumeroPassageiros)
        {
            horarioComMaisPassageiros = pair.first;
            maiorNumeroPassageiros = pair.second;
        }
    }

    return horarioComMaisPassageiros;
}

double calcularMediaIdade(const vector<Passageiro> &passageiros)
{
    int totalIdade = 0;
    for (const Passageiro &passageiro : passageiros)
    {
        totalIdade += passageiro.idade;
    }
    if (!passageiros.empty())
    {
        return static_cast<double>(totalIdade) / passageiros.size();
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    vector<Passageiro> passageiros;

    Passageiro passageiro1 = {1, "2023-09-01 08:00:00", "12345678901", "Joao", 30};
    Passageiro passageiro2 = {2, "2023-09-01 10:00:00", "23456789012", "Maria", 25};
    Passageiro passageiro3 = {3, "2023-09-01 10:00:00", "23456789756", "Pedro", 22};
    passageiros.push_back(passageiro1);
    passageiros.push_back(passageiro2);
    passageiros.push_back(passageiro3);

    double totalViagem = calcularTotalArrecadado(passageiros);
    cout << "Total arrecadado para a viagem: R$" << totalViagem << endl;

    double totalSetembro = calcularTotalArrecadadoNoMes(passageiros, 9);
    cout << "Total arrecadado em setembro: R$" << totalSetembro << endl;

    int poltrona = 1;
    string nomePoltrona = encontrarNomePassageiro(passageiros, poltrona);
    cout << "Nome do passageiro da poltrona " << poltrona << ": " << nomePoltrona << endl;

    string horarioRentavel = encontrarHorarioMaisRentavel(passageiros);
    cout << "Horario de viagem mais rentavel: " << horarioRentavel << endl;

    double mediaIdade = calcularMediaIdade(passageiros);
    cout << "Media de idade dos passageiros: " << fixed << setprecision(0) << mediaIdade << " anos" << endl;

    return 0;
}