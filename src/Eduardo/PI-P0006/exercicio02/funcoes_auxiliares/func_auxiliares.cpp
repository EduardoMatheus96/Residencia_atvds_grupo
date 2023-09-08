#include <iostream>
#include <cmath>

int verificaInt(int x)
{
    return fmod(x, 1);
}

double expressaoSemParenteses(int x, int y)
{
    return 4 * x + (double)y / 3 - 5;
}

double expressaoComParenteses(int x, int y)
{
    return 4 * (x + (double)y) / (3 - 5);
}

double expressaoSemParentesesOutroExemplo(int x, int y)
{
    return 5 * x - y;
}

double expressaoComParentesesOutroExemplo(int x, int y)
{
    return 5 * (x - y);
}