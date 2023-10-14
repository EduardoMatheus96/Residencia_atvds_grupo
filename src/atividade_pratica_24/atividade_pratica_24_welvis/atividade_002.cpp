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
    Evento(string nome, string duracao)
    {
        this->nome = nome;
        this->duracao = duracao;
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

    virtual void imprimir() const
    {
        cout << "Nome: " << nome << endl;
        cout << "Duração: " << duracao << endl;
    }
};

class Pacote
{
private:
    string nome;
    vector<Evento *> eventos;

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
    Roteiro(string nome, string duracao, string local, string atracao) : Evento(nome, duracao)
    {
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

    void imprimir() const
    {
        Evento::imprimir();
        cout << "Local: " << local << endl;
        cout << "Atração: " << atracao << endl;
    }
};

class Deslocamento : public Evento
{
private:
    float distancia;
    string tipoTransporte;

public:
    Deslocamento(string nome, string duracao, float distancia, string tipoTransporte) : Evento(nome, duracao)
    {
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

    void imprimir() const
    {
        Evento::imprimir();
        cout << "Distância: " << distancia << " km" << endl;
        cout << "Tipo de Transporte: " << tipoTransporte << endl;
    }
};

class Pernoite : public Evento
{
private:
    string local;

public:
    Pernoite(string nome, string distancia, string local) : Evento(nome, distancia)
    {
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
    void imprimir() const
    {
        Evento::imprimir();
        cout << "Local: " << local << " " << endl;
    }
};