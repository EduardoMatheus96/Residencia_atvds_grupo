#include <iostream>
using namespace std;

double converterParaFahrenheit(double temperaturaCelsius)
{
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}

void entradaESaida()
{
    double temperaturaCelsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> temperaturaCelsius;

    double temperaturaFahrenheit = converterParaFahrenheit(temperaturaCelsius);
    cout << "A temperatura em Fahrenheit e: " << temperaturaFahrenheit << " F" << endl;
}

int main()
{
    entradaESaida();
    entradaESaida();
    entradaESaida();

    return 0;
}