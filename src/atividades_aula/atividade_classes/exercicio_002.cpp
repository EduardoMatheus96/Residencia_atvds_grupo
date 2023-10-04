#include <iostream>
#include <cmath>

using namespace std;

// Classe base Forma
class Forma
{
public:
    // Método virtual puro para calcular a área
    virtual double calcularArea() = 0;
};

// Subclasse Retangulo que herda de Forma
class Retangulo : public Forma
{
public:
    // Construtor da classe Retangulo
    Retangulo(double largura, double altura) : largura(largura), altura(altura) {}

    // Implementação do método calcularArea() para Retangulo
    double calcularArea() override
    {
        return largura * altura;
    }

private:
    double largura;
    double altura;
};

// Subclasse Circulo que herda de Forma
class Circulo : public Forma
{
public:
    // Construtor da classe Circulo
    Circulo(double raio) : raio(raio) {}

    // Implementação do método calcularArea() para Circulo
    double calcularArea() override
    {
        return 3.14159265359 * pow(raio, 2); // Valor aproximado de pi
    }

private:
    double raio;
};

int main()
{
    double largura, altura, raio;

    cout << "Digite a largura e altura do retangulo: ";
    cin >> largura >> altura;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Cria objetos das subclasses Retangulo e Circulo
    Retangulo retangulo(largura, altura);
    Circulo circulo(raio);

    // Calcula e exibe as áreas das formas
    cout << "A area do retangulo e: " << retangulo.calcularArea() << endl;
    cout << "A area do circulo e: " << circulo.calcularArea() << endl;

    return 0;
}
