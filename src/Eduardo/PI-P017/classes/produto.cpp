#include <iostream>
#include <string>

using namespace std;

class Produto
{
private:
    string nome;
    double valor;
    static int proximoCodigo;

public:
    Produto()
    {
        this->nome = "nome";
        this->valor = 0.0;
        this->proximoCodigo = 0;
    }
    Produto(string nome, double valor, int proximoCodigo)
    {
        this->nome = nome;
        this->valor = valor;
        this->proximoCodigo = proximoCodigo;
    }
    string getNome()
    {
        return this->nome;
    }
    double getValor()
    {
        return this->valor;
    }
    int getCodigo()
    {
        return this->proximoCodigo;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    void setValor(double valor)
    {
        this->valor = valor;
    }

    void setProximoCodigo(int proximoCodigo)
    {
        this->proximoCodigo = proximoCodigo;
    }
};
