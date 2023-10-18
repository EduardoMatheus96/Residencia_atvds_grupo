#include <iostream>
using namespace std;

class Desenhavel
{
public:
    virtual void desenhar() = 0;
};

class Circulo : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhar Circulo" << endl;
    };

private:
};
class Retangulo : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhar Retangulo" << endl;
    };

private:
};
class Triangulo : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhar Triangulo" << endl;
    };

private:
};

int main()
{

    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    Desenhavel *desenhavel1 = &circulo;
    Desenhavel *desenhavel2 = &retangulo;
    Desenhavel *desenhavel3 = &triangulo;

    desenhavel1->desenhar();
    desenhavel2->desenhar();
    desenhavel3->desenhar();

    return 0;
}