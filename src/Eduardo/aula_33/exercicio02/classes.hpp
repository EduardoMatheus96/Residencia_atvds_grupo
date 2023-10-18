#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>

using namespace std;


class Desenhavel
{
public:
    // Desenhavel() = default;
    // Desenhavel(Desenhavel &&) = default;
    // Desenhavel(const Desenhavel &) = default;
    // Desenhavel &operator=(Desenhavel &&) = default;
    // Desenhavel &operator=(const Desenhavel &) = default;
    // ~Desenhavel() = default;

    virtual void desenhar() = 0;

private:
    
};

class Circulo : public Desenhavel
{
public:
    // Circulo() = default;
    // Circulo(Circulo &&) = default;
    // Circulo(const Circulo &) = default;
    // Circulo &operator=(Circulo &&) = default;
    // Circulo &operator=(const Circulo &) = default;
    // ~Circulo() = default;

    void desenhar() override;

private:
    
};

class Retangulo : public Desenhavel
{
public:
    // Retangulo() = default;
    // Retangulo(Retangulo &&) = default;
    // Retangulo(const Retangulo &) = default;
    // Retangulo &operator=(Retangulo &&) = default;
    // Retangulo &operator=(const Retangulo &) = default;
    // ~Retangulo() = default;


    void desenhar() override;

private:
    
};

class Triangulo : public Desenhavel
{
public:
    // Triangulo() = default;
    // Triangulo(Triangulo &&) = default;
    // Triangulo(const Triangulo &) = default;
    // Triangulo &operator=(Triangulo &&) = default;
    // Triangulo &operator=(const Triangulo &) = default;
    // ~Triangulo() = default;


    void desenhar() override;

private:
    
};

#endif