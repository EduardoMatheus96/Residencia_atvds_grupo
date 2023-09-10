/*
Exercício 2: Modularização
    • Implemente um programa que converta uma temperatura de Celsius para 
    Fahrenheit.

    • Separe a lógica de conversão em uma função e a entrada/saída em outra 
    função.

    • Teste a função de conversão com diferentes valores.

*/


#include <iostream>
using namespace std;

// Função para converter Celsius para Fahrenheit
double converterParaFahrenheit(double temperaturaCelsius) {
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}

// Função para solicitar a temperatura em Celsius e exibir o resultado em Fahrenheit
void entradaESaida() {
    double temperaturaCelsius;

    // Solicita ao usuário que digite a temperatura em Celsius
    cout << "Digite a temperatura em Celsius: ";
    cin >> temperaturaCelsius;

    // Chama a função de conversão e exibe o resultado
    double temperaturaFahrenheit = converterParaFahrenheit(temperaturaCelsius);
    cout << "A temperatura em Fahrenheit e: " << temperaturaFahrenheit << " F" << endl;
}

int main() {
    // Teste a função de conversão com diferentes valores
    entradaESaida();
    entradaESaida();
    entradaESaida();

    return 0;
}
