#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

struct empregado {
    string nome;
    string sobrenome;
    string anoNascimento;
    string RG;
    string anoAdmissao;
    float salario;
};

// Função para gerar dados aleatórios de um empregado
empregado gerarEmpregadoAleatorio(mt19937 &gen) {
    empregado e;

    // Gerar nomes aleatórios (apenas exemplos)
    static const vector<string> nomes = {"Alice", "Bob", "Carlos", "Daniela", "Eduardo"};
    static const vector<string> sobrenomes = {"Silva", "Santos", "Ferreira", "Oliveira", "Pereira"};

    uniform_int_distribution<int> nomesDist(0, nomes.size() - 1);
    uniform_int_distribution<int> sobrenomesDist(0, sobrenomes.size() - 1);
    uniform_int_distribution<int> anoNascimentoDist(1970, 2000);
    uniform_int_distribution<int> RGDist(1000000, 9999999);
    uniform_int_distribution<int> anoAdmissaoDist(2010, 2022);
    uniform_real_distribution<float> salarioDist(2000.0, 5000.0);

    e.nome = nomes[nomesDist(gen)];
    e.sobrenome = sobrenomes[sobrenomesDist(gen)];
    e.anoNascimento = to_string(anoNascimentoDist(gen));
    e.RG = to_string(RGDist(gen));
    e.anoAdmissao = to_string(anoAdmissaoDist(gen));
    e.salario = salarioDist(gen);

    return e;
}

void Reajusta_dez_porcento(vector<empregado> &empregados) {
    int tam = empregados.size();
    for (size_t i = 0; i < tam; i++) {
        empregados[i].salario = 1.1 * empregados[i].salario;
    }
}

int main() {
    vector<empregado> empregados(10);

    random_device rd;
    mt19937 gen(rd()); // Cria o gerador de números aleatórios com a semente do dispositivo random

    // Preencher o vetor com dados aleatórios
    for (empregado &e : empregados) {
        e = gerarEmpregadoAleatorio(gen);
    }
    //Impressão antes do reajuste
    for (const empregado e : empregados) {
        cout << "Nome: " << e.nome << " " << e.sobrenome << ", Salario: " << e.salario << endl;
    }

    Reajusta_dez_porcento(empregados);
    cout << "Salario apos reajuste: " << endl;
    // Apos o reajuste
    for (const empregado e : empregados) {
        cout << "Nome: " << e.nome << " " << e.sobrenome << ", Salario: " << e.salario << endl;
    }

    return 0;
}
