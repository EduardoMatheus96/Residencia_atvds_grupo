#include <iostream>

using namespace std;

// Função para converter temperatura de Celsius para Fahrenheit
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Função para entrada/saída
void converterTemperatura() {
    double celsius;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusParaFahrenheit(celsius);

    cout << "A temperatura em graus Fahrenheit é: " << fahrenheit << " °F" << endl;
}

void exercicio02(){
    converterTemperatura();
}