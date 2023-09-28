#include <iostream>
#include <string>
#include <vector>
#include "ponto.cpp"

using namespace std;

class Poligono
{
private:
    vector<Ponto> pontos;
public:
    void le_pontos(){
        cout << "Criando um poligono" << endl;
        char sn;
        do
        {
            Ponto p;
            p.le_Ponto();
            pontos.push_back(p);
            cout << "Deseja inserir mais pontos (s/n) ?";
            cin >> sn;
        } while (sn!='n');        
    }

    void lista_pontos(){
        cout << "As coordenadas digitadas forma" << endl;
        for (Ponto p : pontos)
        {
            cout << "(" << p.escreve_ponto() << ")" <<endl;
        }
        
    }

    float perimetro(){
        float per = 0;
        vector<Ponto>::iterator it2;
        Ponto p1;
        Ponto p2;
        for (auto it = pontos.begin(); 
            it != pontos.end() - 1; it++)
        {
            it2 = it;
            advance(it2,1);
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

