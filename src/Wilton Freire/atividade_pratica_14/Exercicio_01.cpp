#include <iostream>

using namespace std;

unsigned long long numFatorial(int num)
{
    int temp = 1;
    for (int i = 1; i <= num; i++)
    {
        temp *= i;
    }
    return temp;
}

int main(void)
{
    unsigned long long valor;
    int digite1, digite2, digite3;
    cin >> digite1;
    cin >> digite2;
    cin >> digite3;

    valor = numFatorial(digite1);
    cout << valor;
    valor = numFatorial(digite2);
    cout << valor;
    valor = numFatorial(digite3);
    cout << valor;
}