#include <iostream>
#include <string>

using namespace std;

class Celular
{
private:
    string sistemaOp;
    string marca;
    string modelo;
    string camera;
    string memoria;

public:
    Celular(/* args */);
    ~Celular();

    void setSistemaOperacional(const string& sistemaOp);
    void setMarca(const string& marca);
    void setModelo(const string& modelo);
    void setCamera(const string& camera);
    void setMemoria(const string& memoria);

    // Métodos get
    string getSistemaOperacional() const;
    string getMarca() const;
    string getModelo() const;
    string getCamera() const;
    string getMemoria() const;
};

Celular::Celular(/* args */)
{
}

Celular::~Celular()
{
}
