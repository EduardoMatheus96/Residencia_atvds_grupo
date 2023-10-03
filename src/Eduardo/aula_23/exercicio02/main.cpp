#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Forma
{
private:
public:
    Forma() {}
    ~Forma() {}

    virtual double calcularArea() {}
};

class Retangulo : protected Forma
{
private:
    double base;
    double altura;

public:
    Retangulo(double base, double altura)
    {
        this->base = base;
        this->altura = altura;
    }
    ~Retangulo() {}
    double getBase()
    {
        return this->base;
    }
    double getAltura()
    {
        return this->altura;
    }

    void setBase(double base)
    {
        this->base = base;
    }
    void setAltura(double altura)
    {
        this->altura = altura;
    }

    double calcularArea() override
    {
        return base * altura;
    }
};

class Circulo : protected Forma
{
private:
    double raio;

public:
    const double PI = 3.14;
    Circulo(double raio)
    {
        this->raio = raio;
    }
    ~Circulo() {}
    double getRaio()
    {
        return this->raio;
    }
    void setRaio(double raio)
    {
        this->raio = raio;
    }
    double calcularArea() override
    {
        return PI * (raio * raio);
    }
};

int main(void)
{
    Retangulo retangulo(2.8,8);
    cout << "A área do retangulo é: " << retangulo.calcularArea() << endl;
    Circulo circulo(3.3);
    cout << "A área do circulo é: " << circulo.calcularArea() << endl;
    return 0;
}
