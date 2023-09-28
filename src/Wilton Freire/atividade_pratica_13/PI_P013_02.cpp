/*Crie um tipo estruturado (struct) empregado para armazenar dados (nome,
sobrenome, ano de nascimento, RG, ano de admissão, salário) de empregados de
uma empresa. Defina um vetor de empregados para armazenar até 50 empregados.*/

/*Faça uma função chamada “Reajusta_dez_porcento( )” que receba por parâmetro o
vetor de empregados e a quantidade de elementos no vetor e atualize o salário de
cada empregado em 10%. Crie uma função main para testar a função*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empregado {
    string nome;
    string sobrenome;
    int ano_nascimento;
    int RG;
    int ano_admissao;
    float salario;
};

void Reajusta_dez_porcento(vector<Empregado> &empregados, int n) {
    for (int i = 0; i < 50; i++) {
        empregados[i].salario *= 1.1; // Aumenta o salário em 10%
    }
}

int main() {
    // Vetor Empregado
    vector<Empregado> empregados;

    // Exemplos de empregados
    Empregado emp1 = {"Joao", "Silva", 1990, 123456789, 2010, 1200.0};
    Empregado emp2 = {"Maria", "Santos", 1985, 987654321, 2008, 1500.0};
    Empregado emp3 = {"Joao", "Silva", 1990, 123456789, 2010, 1200.0};
    Empregado emp4 = {"Maria", "Santos", 1985, 987654321, 2008, 1500.0};
    empregados.push_back(emp1);
    empregados.push_back(emp2);
    empregados.push_back(emp3);
    empregados.push_back(emp4);

    // Reajuste e atualização de salarios
    Reajusta_dez_porcento(empregados, empregados.size());

    // Salarios atualizados
    for (int i = 0; i < empregados.size(); i++)
    {
        cout << "Salario de " << empregados[i].nome << " " << empregados[i].sobrenome << ": " << empregados[i].salario << endl;
        cout << "Salario de " << empregados[i].nome << " " << empregados[i].sobrenome << ": " << empregados[i].salario << endl;
    }

    return 0;
}
