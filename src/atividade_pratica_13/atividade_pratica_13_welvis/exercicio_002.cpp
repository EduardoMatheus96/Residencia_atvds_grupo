/*
Exercício 2:
    Crie um tipo estruturado (struct) empregado para armazenar dados (nome,
    sobrenome, ano de nascimento, RG, ano de admissão, salário) de empregados de
    uma empresa. Defina um vetor de empregados para armazenar até 50 empregados.
    Faça uma função chamada “Reajusta_dez_porcento( )” que receba por parâmetro o
    vetor de empregados e a quantidade de elementos no vetor e atualize o salário de
    cada empregado em 10%. Crie uma função main para testar a função.

*/

#include <iostream>
#include <string>
using namespace std;

// Definição da estrutura empregado
struct Empregado {
    string nome;
    string sobrenome;
    int anoNascimento;
    string RG;
    int anoAdmissao;
    double salario;
};

// Função para reajustar o salário de todos os empregados em 10%
void Reajusta_dez_porcento(Empregado empregados[], int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        empregados[i].salario *= 1.10; // Aumenta o salário em 10%
    }
}

int main() {
    const int tamanhoMaximo = 50;
    Empregado empregados[tamanhoMaximo];

    // Preencha o vetor de empregados com dados fictícios (você pode adicionar mais)
    empregados[0] = {"Joao", "Silva", 1980, "123456789", 2005, 3000.0};
    empregados[1] = {"Maria", "Santos", 1990, "987654321", 2010, 3500.0};

    int quantidadeEmpregados = 2; // Defina o número real de empregados no vetor

    // Chame a função para reajustar os salários em 10%
    Reajusta_dez_porcento(empregados, quantidadeEmpregados);

    // Imprima os salários reajustados
    for (int i = 0; i < quantidadeEmpregados; ++i) {
        cout << "Empregado: " << empregados[i].nome << " " << empregados[i].sobrenome << endl;
        cout << "Salario apos reajuste: R$" << empregados[i].salario << endl;
    }

    return 0;
}
