#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cliente
{
private:
    string nome;
    string cpf;

public:
    Cliente(/* args */);

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getCPF()
    {
        return cpf;
    }

    void setCPF(string cpf)
    {
        this->cpf = cpf;
    }
};

class Dependente
{
private:
    string nome;
    int idade;
    Cliente *dependenteDe;

public:
    Dependente(/* args */) {}

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }
    int getIdade()
    {
        return idade;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    Cliente getDependente()
    {

        return *dependenteDe;
    }

    void setDependente(Cliente *dependenteDe)
    {
        this->dependenteDe = dependenteDe;
    }
};

class Evento
{
private:
    string nome;
    string duracao;

public:
    Evento(string nome, string duracao){
        this->nome = nome;
        this-> duracao = duracao;
    }

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getDuracao()
    {
        return duracao;
    }

    void setDuracao(string duracao)
    {
        this->duracao = duracao;
    }

    
};

class Pacote
{
private:
    string nome;
    vector<Evento*> eventos;

public:
    Pacote(/* args */) {}

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void adicionarEvento(Evento *evento)
    {
        eventos.push_back(evento);
    }
};

class Roteiro : public Evento
{
private:
    string local;
    string atracao;

public:
    Roteiro(string nome, string duracao, string local, string atracao): Evento(nome, duracao) {
        this->local = local;
        this->atracao = atracao;
    }

    string getLocal()
    {
        return local;
    }

    void setLocal(string local)
    {
        this->local = local;
    }

    string getAtracao()
    {
        return atracao;
    }

    void setAtracao(string atracao)
    {
        this->atracao = atracao;
    }
};

class Deslocamento : public Evento
{
private:
    float distancia;
    string tipoTransporte;

public:
    Deslocamento(string nome, string duracao, float distancia, string tipoTransporte): Evento(nome, duracao) {
        this->distancia = distancia;
        this->tipoTransporte = tipoTransporte;
    }

    float getDistancia()
    {
        return distancia;
    }

    void setDistancia(float distancia)
    {
        this->distancia = distancia;
    }

    string getTipoTransporte()
    {
        return tipoTransporte;
    }

    void setTipoTransporte(string tipoTransporte)
    {
        this->tipoTransporte = tipoTransporte;
    }
};

class Pernoite : public Evento
{
private:
    string local;

public:
    Pernoite(string nome, string distancia, string local): Evento(nome, distancia) {
        this->local = local;
    }

    string getLocal()
    {
        return local;
    }

    void setLocal(string local)
    {
        this->local = local;
    }
};

Evento criarEvento() {
    int menu = 0;
    

    while (menu != 4) {
        cout << "Selecione o tipo do evento:\n"
             << "(1) Roteiro\n"
             << "(2) Deslocamento\n"
             << "(3) Pernoite\n"
             << "(4) Sair\n";
        cin >> menu;

        string nome, duracao, local, atracao, tipoTransporte;
        float distancia;

        if (menu == 1) {
            cout << "Digite o nome do Roteiro: " << endl;
            cin >> nome;
            cout << "Digite a duração do Roteiro: " << endl;
            cin >> duracao;
            cout << "Digite o local do Roteiro: " << endl;
            cin >> local;
            cout << "Digite a atração do Roteiro: " << endl;
            cin >> atracao;
            return Roteiro(nome, duracao, local, atracao);

        } else if (menu == 2) {
            cout << "Digite o nome do Deslocamento: ";
            cin >> nome;
            cout << "Digite a duração do Deslocamento: ";
            cin >> duracao;
            cout << "Digite a distância do Deslocamento: ";
            cin >> distancia;
            cout << "Digite o tipo de transporte do Deslocamento: ";
            cin >> tipoTransporte;

            return Deslocamento(nome, duracao, distancia, tipoTransporte);

        } else if (menu == 3) {
            cout << "Digite o nome da Pernoite: ";
            cin >> nome;
            cout << "Digite a duração da Pernoite: ";
            cin >> duracao;
            cout << "Digite o local da Pernoite: ";
            cin >> local;
            return Pernoite(nome, duracao, local);
        } else if (menu == 4) {
            cout << "Saindo do menu.\n";
        } else {
            cout << "Opção inválida. Tente novamente.\n";
        }
    }

}


int main(void){
    vector<Evento> eventos;
    eventos.push_back(criarEvento());
    return 0;
}
