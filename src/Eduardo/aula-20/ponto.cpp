#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Ponto
{
private:
    double x, y, z;

public:
    
    Ponto(double x = 0.0, double y = 0.0, double z = 0.0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
    double get_z()
    {
        return z;
    }
    void le_Ponto()
    {
        cout << "Digite as coordenadas do ponto: ";
        cin >> x >> y >> z;
        cout << endl;
    }
    string escreve_ponto()
    {
        return to_string(x) + " , " + to_string(y) + " , " + to_string(z);
    }
    double distancia(Ponto p1)
    {
        return sqrt(pow(x - p1.get_x(), 2) + pow(y - p1.get_y(), 2) + pow(z - p1.get_z(), 2));
    }

    static double distancia(Ponto p1, Ponto p2){
        double dis;
        double p1x, p1y, p1z;
        double p2x, p2y, p2z;
        p1x = p1.get_x();
        p1y = p1.get_y();
        p1z = p1.get_z();
        
        p2x = p2.get_x();
        p2y = p2.get_y();
        p2z = p2.get_z();
        
        dis = sqrt(pow(p1x - p2x, 2) + pow(p1y - p2y, 2) + pow(p1z - p2z, 2));
    
        return dis;
    }
};
