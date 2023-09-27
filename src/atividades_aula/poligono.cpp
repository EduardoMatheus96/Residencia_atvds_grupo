#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Ponto
{
    float x, y, z;

public:
    // Ponto() : x(0), y(0), z(0) {}

    void set_x(float x)
    {
        this->x = x;
    }
    void set_y(float y)
    {
        this->y = y;
    }

    void set_z(float z)
    {
        this->z = z;
    }

    float get_x()
    {
        return this->x;
    }
    float get_y()
    {
        return this->y;
    }

    float get_z()
    {
        return this->z;
    }

    void le_Ponto()
    {
        cout << "Digite as coordenadas do ponto" << endl;
        cin >> x >> y >> z;
    }

    string escreve_ponto()
    {
        return to_string(x) + ", " + to_string(y) + ", " + to_string(z);
    }

    float distancia(Ponto p1)
    {
        return sqrt(pow(x - p1.get_x(), 2) + pow(y - p1.get_y(), 2) + pow(z - p1.get_z(), 2));
    }
};

class Poligono
{
    vector<Ponto> pontos;

public:
    void le_pontos()
    {
        cout << "Criando um poligono" << endl;
        char sn;
        do
        {
            Ponto p;
            p.le_Ponto();
            pontos.push_back(p);
            cout << "Deseja inserir mais pontos (s/n)?";
            cin >> sn;
        } while (sn != 'n');
    }
    void listar_pontos()
    {
        cout << "As coordenadas digitadas foram" << endl;
        for (Ponto p : pontos)
        {
            cout << "(" << p.escreve_ponto() << ")" << endl;
        }
    }

    float perimetro()
    {
        float per = 0;
        vector<Ponto>::iterator it2;
        Ponto p1;
        Ponto p2;
        for (auto it = pontos.begin(); it != pontos.end() - 1; it++)
        {
            it2 = it;
            advance(it2, 1);
            p1 = *it;

            p2 = *it2;
            per += p1.distancia(p2);
        }
        it2 = pontos.begin();
        p1 = *it2;
        per += p1.distancia(p2);
        return per;
    }
};

int main()
{
    Poligono p1;
    p1.le_pontos();
    cout << p1.perimetro() << endl;

    // p1.set_x(3);
    // p1.set_y(6);
    // p1.set_z(8);

    // double distancia_p1 = p1.distancia(p1);
    // cout << "A distancia do ponto (3, 4) ate a origem e aproximadamente " << distancia_p1 << "." << endl;

    return 0;
}
