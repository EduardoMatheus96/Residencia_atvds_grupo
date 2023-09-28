
#include <iostream>
#include <string>
using namespace std;

struct Motor {
    int cilindrada;        
    int potencia;         
    string tipo;      
};

struct Pneus {
    int quantidade;        
    string tipo;      
};

struct Carro {
    string marca;     
    string modelo;    
    int anoFabricacao;     
    Motor motor;           
    Pneus pneus;           
};

int main() {
    Carro meuCarro;
    meuCarro.marca = "Toyota";
    meuCarro.modelo = "Corolla";
    meuCarro.anoFabricacao = 2022;

    meuCarro.motor.cilindrada = 2000;
    meuCarro.motor.potencia = 150;
    meuCarro.motor.tipo = "Gasolina";

    meuCarro.pneus.quantidade = 4;
    meuCarro.pneus.tipo = "Verao";

    cout << "Informacoes do Carro:" << endl;
    cout << "Marca: " << meuCarro.marca << endl;
    cout << "Modelo: " << meuCarro.modelo << endl;
    cout << "Ano de Fabricacao: " << meuCarro.anoFabricacao << endl;
    cout << "Motor:" << endl;
    cout << "  Cilindrada: " << meuCarro.motor.cilindrada << " cc" << endl;
    cout << "  Potencia: " << meuCarro.motor.potencia << " HP" << endl;
    cout << "  Tipo de Combustivel: " << meuCarro.motor.tipo << endl;
    cout << "Pneus:" << endl;
    cout << "  Quantidade: " << meuCarro.pneus.quantidade << endl;
    cout << "  Tipo: " << meuCarro.pneus.tipo << endl;

    return 0;
}