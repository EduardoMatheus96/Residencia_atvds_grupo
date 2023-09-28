#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Ponto{

    private:
    float x, y;

    public:
    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }

    
    
    void le_Ponto(){
        cout << "Digite as coordenadas do ponto (x, y): ";
        cin >> x >> y;
    }

    string escreve_ponto(){
        return to_string(x) + " , " + to_string(y);
    }

    static float distancia(Ponto p1, Ponto p2){
    return sqrt(( pow(p2.get_x() - p1.get_x(), 2)) + pow (p2.get_y() - p1.get_y(), 2));
    }
};



int main(){
    Ponto p1, p2;
    double dist;
    p1.le_Ponto();
    p2.le_Ponto();

    dist = Ponto::distancia(p1,p2);

    cout << endl << "Distancia calculado: " << dist << endl;
    return 0;
}