#include <iostream>
#include "./carro.cpp"

using namespace std;

int main(void)
{
    Carro civic;
    civic.tipo = "Sedan";
    cout << civic.tipo << endl;

    civic.acelerar(30);
    civic.frear();
    return 0;
}
