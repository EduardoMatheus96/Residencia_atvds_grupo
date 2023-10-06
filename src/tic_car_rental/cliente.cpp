#include <string>
#include <vector>
#include "tic_car_rental.hpp"

using namespace std;

Cliente::Cliente(string habilitacao, vector<Aluguel> historicoAlugueis) : habilitacao(habilitacao), historicoAlugueis(historicoAlugueis){};

float Cliente::cotar_aluguel(Veiculo veiculo, string dataInicio, string dataFim) {
    // if(){
    //     return ;
    // }
    // return -1;
};

Aluguel Cliente::solicitar_aluguel(Veiculo veiculo, string dataInicio, string dataFim) {

};

void Cliente::devolver_veiculo(Aluguel aluguel, string dataDevolucao) {

};


