#include <iostream>
#include <string>
#include "./classes/celular.cpp"

using namespace std;

int main()
{
    Celular celular1;
    celular1.setSistemaOperacional("Android");
    celular1.setMarca("Samsung");
    celular1.setModelo("Galaxy S21");
    celular1.setCamera("12MP");
    celular1.setMemoria("128GB");

    Celular celular2;
    celular2.setSistemaOperacional("iOS");
    celular2.setMarca("Apple");
    celular2.setModelo("iPhone 13");
    celular2.setCamera("12MP");
    celular2.setMemoria("256GB");

    // Exibir informações dos celulares
    cout << "Informacoes do Celular 1:" << endl;
    cout << "Sistema Operacional: " << celular1.getSistemaOperacional() << endl;
    cout << "Marca: " << celular1.getMarca() << endl;
    cout << "Modelo: " << celular1.getModelo() << endl;
    cout << "Camera: " << celular1.getCamera() << endl;
    cout << "Memoria: " << celular1.getMemoria() << endl;

    cout << endl;

    cout << "Informacoes do Celular 2:" << endl;
    cout << "Sistema Operacional: " << celular2.getSistemaOperacional() << endl;
    cout << "Marca: " << celular2.getMarca() << endl;
    cout << "Modelo: " << celular2.getModelo() << endl;
    cout << "Camera: " << celular2.getCamera() << endl;
    cout << "Memoria: " << celular2.getMemoria() << endl;

    return 0;
}