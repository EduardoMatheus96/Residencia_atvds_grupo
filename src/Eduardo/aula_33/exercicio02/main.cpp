#include "classes.hpp"

int main(void)
{
    Circulo circulo;
    Triangulo triangulo;
    Retangulo retangulo;
    
    Desenhavel* item01 = &circulo;
    Desenhavel* item02 = &triangulo;
    Desenhavel* item03 = &retangulo;

    item01->desenhar();
    item02->desenhar();
    item03->desenhar();


    return 0;
}
