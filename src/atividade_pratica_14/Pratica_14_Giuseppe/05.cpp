#include <iostream>
#include <string>
using namespace std;

// Struct para representar o Motor do carro
struct Motor {
    int cilindrada;        
    int potencia;         
    string tipo;      
};

// Struct para representar os Pneus do carro
struct Pneus {
    int quantidade;        
    string tipo;      
};

// Struct para representar o Carro completo
struct Carro {
    string marca;     
    string modelo;    
    int anoFabricacao;     
    Motor motor;           
    Pneus pneus;           
};

int main() {
    // Criando uma instância de Carro e preenchendo suas informações
    Carro meuCarro;
    meuCarro.marca = "Toyota";
    meuCarro.modelo = "Corolla";
    meuCarro.anoFabricacao = 2022;

    meuCarro.motor.cilindrada = 2000;
    meuCarro.motor.potencia = 150;
    meuCarro.motor.tipo = "Gasolina";

    meuCarro.pneus.quantidade = 4;
    meuCarro.pneus.tipo = "Verao";

    // Exibindo as informações do carro
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