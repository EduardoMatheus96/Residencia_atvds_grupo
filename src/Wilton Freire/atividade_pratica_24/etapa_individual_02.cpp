#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Evento
{
public:
    Evento(string nome, string data) : nome(nome), data(data) {}
    string nome;
    string data;
};

class Roteiro : public Evento
{
public:
    Roteiro(string nome, string data, ::string descricao) : Evento(nome, data), descricao(descricao) {}
    string descricao;
};

class Deslocamento : public Evento
{
public:
    Deslocamento(string nome, string data, string meio_de_transporte) : Evento(nome, data), meio_de_transporte(meio_de_transporte) {}
    string meio_de_transporte;
};

class Pernoite : public Evento
{
public:
    Pernoite(string nome, string data, string hotel, string cidade) : Evento(nome, data), hotel(hotel), cidade(cidade) {}
    string hotel;
    string cidade;
};

class Dependente
{
public:
    Dependente(string nome, string data_de_nascimento) : nome(nome), data_de_nascimento(data_de_nascimento) {}
    string nome;
    string data_de_nascimento;
};

class Pacote
{
public:
    Pacote(string nome, double preco) : nome(nome), preco(preco) {}
    string nome;
    double preco;
    vector<Evento *> eventos;
};

class Cliente
{
public:
    Cliente(string nome, string endereco, string telefone) : nome(nome), endereco(endereco), telefone(telefone) {}
    string nome;
    string endereco;
    string telefone;
    vector<Pacote *> pacotes;
    vector<Dependente *> dependentes;
};

int main()
{
    Cliente cliente1("Joao Andrade", "Rua ABC, 123", "123-456-7890");

    Pacote pacote1("Pacote de Verao", 1000.0);

    cliente1.pacotes.push_back(&pacote1);

    Dependente dependente1("Joao Andrade Jr.", "10/05/2010");
    cliente1.dependentes.push_back(&dependente1);

    Roteiro roteiro1("Roteiro de Praias", "15/07/2023", "Visitar varias praias paradisiacas.");
    pacote1.eventos.push_back(&roteiro1);

    Deslocamento deslocamento1("Voo para o Destino", "14/07/2023", "Aviao");
    pacote1.eventos.push_back(&deslocamento1);

    Pernoite pernoite1("Hotel Luxuoso", "15/07/2023", "Hotel ABC", "Cidade da Praia");
    pacote1.eventos.push_back(&pernoite1);

    cout << "Nome do cliente: " << cliente1.nome << endl;
    cout << "Tipo de pacote: " << pacote1.nome << endl;
    cout << "Nome do dependente: " << dependente1.nome << endl;
    cout << "Roteiro: " << roteiro1.descricao << endl;
    cout << "Tipo de deslocamento: " << deslocamento1.meio_de_transporte << endl;
    cout << "Nome do Hotel para pernoite: " << pernoite1.hotel << endl;

    return 0;
}
