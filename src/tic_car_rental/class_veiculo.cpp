#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
private:
    string placa;
    string marca;
    string modelo;
    int ano;
    float valor_diaria;
    bool disponivel;

public:
    bool getDisponivel(){
        return this->disponivel;
    }
    void setDisponivel(bool disponivel){
        this->disponivel = disponivel;
    }
    void setPlaca(string placa)
    {
        this->placa = placa;
    };

    void setMarca(string marca)
    {
        this->marca = marca;
    };

    void setModelo(string modelo)
    {
        this->modelo = modelo;
    };

    void setAno(int ano)
    {
        this->ano = ano;
    };

    void setValorDiaria(float valor_diaria)
    {
        this->valor_diaria = valor_diaria;
    };
    
    string getPlaca()
    {
        return this->placa;
    };

    string getMarca()
    {
        return this->marca;
    };

    string getModelo()
    {
        return this->modelo;
    };

    int getAno()
    {
        return this->ano;
    };

    float getValorDiaria()
    {
        return this->valor_diaria;
    };

    

};