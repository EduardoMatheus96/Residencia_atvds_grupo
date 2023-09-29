#include <iostream>
#include <string>

using namespace std;

struct Empregado {
    string nome;
    string sobrenome;
    int ano_nascimento;
    string RG;
    int ano_admissao;
    float salario;
};

void Reajusta_dez_porcento(Empregado empregados[], int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        empregados[i].salario *= 1.10;  // Aumento de 10%
    }
}

int main() {
    const int MAX_EMPREGADOS = 50;
    Empregado empregados[MAX_EMPREGADOS] = {
        {"Joao", "Silva", 1980, "123456789", 2005, 3000.0},
        {"Maria", "Santos", 1990, "987654321", 2010, 3500.0},
        // Adicione mais empregados conforme necessário
    };

    int quantidade_empregados = 2;  // Número atual de empregados

    // Antes do reajuste
    cout << "Salarios antes do reajuste:" << endl;
    for (int i = 0; i < quantidade_empregados; ++i) {
        cout << empregados[i].nome << " " << empregados[i].sobrenome << ": " << empregados[i].salario << endl;
    }

    // Reajusta os salários em 10%
    Reajusta_dez_porcento(empregados, quantidade_empregados);

    // Após o reajuste
    cout << "\nSalarios apos o reajuste:" << endl;
    for (int i = 0; i < quantidade_empregados; ++i) {
        cout << empregados[i].nome << " " << empregados[i].sobrenome << ": " << empregados[i].salario << endl;
    }

    return 0;
}
