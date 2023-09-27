#include <iostream>
#include <string>
// #include "funcoes/celular_funcoes.cpp"

using namespace std;

class Celular
{
private:
    string sistemaOp;
    string marca;
    string modelo;
    string camera;
    string memoria;
    string numSerie;
    float porcBateria;

public:
    // Celular();
    //  ~Celular();

    // void setSistemaOperacional(const string& sistemaOp);
    // void setMarca(const string& marca);
    // void setModelo(const string& modelo);
    // void setCamera(const string& camera);
    // void setMemoria(const string& memoria);

    // // Métodos get
    // string getSistemaOperacional() const;
    // string getMarca() const;
    // string getModelo() const;
    // string getCamera() const;
    // string getMemoria() const;
    // string getNumSerie() const;
    // float getPorcBateria() const;

    void setSistemaOperacional(const string &sistemaOp)
    {
        this->sistemaOp = sistemaOp;
    }

    void setMarca(const string &marca)
    {
        this->marca = marca;
    }

    void setModelo(const string &modelo)
    {
        this->modelo = modelo;
    }

    void setCamera(const string &camera)
    {
        this->camera = camera;
    }

    void setMemoria(const string &memoria)
    {
        this->memoria = memoria;
    }

    string getSistemaOperacional() const
    {
        return sistemaOp;
    }

    string getMarca() const
    {
        return marca;
    }

    string getModelo() const
    {
        return modelo;
    }

    string getCamera() const
    {
        return camera;
    }

    string getMemoria() const
    {
        return memoria;
    }

    string getNumSerie() const
    {
        return numSerie;
    }
    float getPorcBateria() const
    {
        return porcBateria;
    }
};

// Celular(/* args */)
// {
// }

// ~Celular()
// {
// }
