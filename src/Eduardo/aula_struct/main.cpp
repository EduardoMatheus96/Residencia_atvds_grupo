#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Point
{
    double x = 0;
    double y = 0;
    string nome = "Ponto";
};

union Values
{
    int iValue;
    double fValue;
} valor;

int main(void)
{
    Point p1;
    p1.x = 10;
    p1.y = 20;
    p1.nome = "centro";

    Point p2 = {5, 15, "Vértice"};
    Point p3;

    cout << p1.nome << " = "
         << "p1.x: " << p1.x << ", p1.y: " << p1.y << endl;

    cout << p2.nome << " = "
         << "p2.x: " << p2.x << ", p2.y: " << p2.y << endl;

    cout << p3.nome << " = "
         << "p3.x: " << p3.x << ", p3.y: " << p3.y << endl;

    valor.iValue = 5;
    cout << "Valor = " << valor.iValue;
 
    return 0;
}