/*
Exercício 2: Criando uma Classe Básica 
    Crie uma classe chamada Ponto que represente um ponto no plano cartesiano com 
    coordenadas x e y. Inclua construtores, métodos para definir e obter as coordenadas, 
    e um método para calcular a distância até a origem (0,0).

    Para testar sua classe, se baseie nos exemplos abaixo:
    Ponto p1(3, 4); 
    double distancia = p1.calcularDistancia(); 
    // Resposta: A distância do ponto (3, 4) até a origem é aproximadamente 5.0.

    Ponto p2(-2, 7); 
    p2.setCoordenadas(1, 1); 
    double distancia = p2.calcularDistancia(); 
    // Resposta: A distância do ponto (1, 1) até a origem é aproximadamente 1.41421.


    Ponto p3(0, 3); 
    Ponto p4(4, 0); 
    double distancia_p3 = p3.calcularDistancia(); 
    double distancia_p4 = p4.calcularDistancia(); 
    // Resposta: A distância do ponto (0, 3) até a origem é 3.0 e do ponto (4, 0) até a origem é 4.0.

    Ponto pontos[3]; 
    pontos[0].setCoordenadas(2, 2); 
    pontos[1].setCoordenadas(-1, 5); 
    pontos[2].setCoordenadas(0, 0); 
    
    for (int i = 0; i < 3; ++i) { 
        double distancia = pontos[i].calcularDistancia(); 
        cout << "Distância do ponto " << i + 1 << " até a origem: " << distancia << endl; 
    } 
    // Resposta: Distância do ponto 1 até a origem: aproximadamente 2.82843 
    //           Distância do ponto 2 até a origem: aproximadamente 5.09902 
    //           Distância do ponto 3 até a origem: 0.0


    Ponto p5; 
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl; 
    p5.setCoordenadas(8, -3); 
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl; 
    // Resposta: Coordenadas do ponto p5: (0, 0) 
    //           Novas coordenadas do ponto p5: (8, -3)

*/

#include <iostream>
#include <cmath>
using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    // Construtor padrão inicializa o ponto na origem (0, 0)
    Ponto() : x(0), y(0) {}

    // Construtor que permite definir as coordenadas iniciais do ponto
    Ponto(double x, double y) : x(x), y(y) {}

    // Métodos para definir as coordenadas x e y
    void setCoordenadas(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Métodos para obter as coordenadas x e y
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Método para calcular a distância até a origem (0, 0)
    double calcularDistancia() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Ponto p1(3, 4);
    double distancia_p1 = p1.calcularDistancia();
    cout << "A distancia do ponto (3, 4) ate a origem e aproximadamente " << distancia_p1 << "." << endl;

    Ponto p2(-2, 7);
    p2.setCoordenadas(1, 1);
    double distancia_p2 = p2.calcularDistancia();
    cout << "A distancia do ponto (1, 1) ate a origem e aproximadamente " << distancia_p2 << "." << endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
    double distancia_p3 = p3.calcularDistancia();
    double distancia_p4 = p4.calcularDistancia();
    cout << "A distancia do ponto (0, 3) ate a origem e " << distancia_p3 << " e do ponto (4, 0) ate a origem e " << distancia_p4 << "." << endl;

    Ponto pontos[3];
    pontos[0].setCoordenadas(2, 2);
    pontos[1].setCoordenadas(-1, 5);
    pontos[2].setCoordenadas(0, 0);

    for (int i = 0; i < 3; ++i) {
        double distancia = pontos[i].calcularDistancia();
        cout << "Distancia do ponto " << i + 1 << " ate a origem: aproximadamente " << distancia << endl;
    }

    Ponto p5;
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;
    p5.setCoordenadas(8, -3);
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;

    return 0;
}
