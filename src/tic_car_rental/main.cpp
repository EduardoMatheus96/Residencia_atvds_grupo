#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "tic_car_rental.hpp"

using namespace std;

int main(int argc, const char **argv)
{
    vector<Funcionario> funcionarios;
    vector<Veiculo> veiculos;
    vector<Cliente> clientes;
    vector<Aluguel> alugueis;
    Funcionario matheus("04324242","Matheus Fonseca", "Rua Joao", "73934924923", alugueis);
    Veiculo corrola("PKJ-94D32", "Toyota", "Corola", 2020, 150);
    Cliente cliente1("0604234254", "Eduardo", "Rua Pedro", "739995403503", "0492132103129", alugueis);
    funcionarios.push_back(matheus);
    veiculos.push_back(corrola);
    clientes.push_back(cliente1);
    Data data1;
    Data data2;
    data1.dia = 20;
    data1.mes = 10;
    data1.ano = 2023;

    data2.dia = 25;
    data2.mes = 10;
    data2.ano = 2023;
    cout << "O valor da cotacao e: "<< cliente1.cotar_aluguel(corrola, data1, data2)<< endl;

    return 0;
}