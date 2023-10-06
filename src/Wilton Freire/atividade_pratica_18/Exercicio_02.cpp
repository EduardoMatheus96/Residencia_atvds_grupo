#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Ponto
{

private:
    float x, y;

public:
    Ponto(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
    }

    void le_Ponto()
    {
        cout << "Exemplo: 1 2\n";
        cout << "Digite as coordenadas do ponto x e y: ";
        cin >> x >> y;
    }

    static float distancia(Ponto p1)
    {
        return sqrt((pow(0 - p1.get_x(), 2)) + pow(0 - p1.get_y(), 2));
    }
};

int main()
{
    Ponto p1, p2;
    double dist;
    p1.le_Ponto();

    dist = Ponto::distancia(p1);

    cout << endl
         << "A distancia entre os pontos eh: " << dist << endl;
    return 0;
}