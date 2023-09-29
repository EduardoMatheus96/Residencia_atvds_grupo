#include <iostream>

using namespace std;

int main()
{

    int meuArray[100];
    int contagemValores[20] = {0};

    for (int i = 0; i < 100; i++)
    {
        meuArray[i] = 1 + rand() % 20;
        contagemValores[meuArray[i] - 1]++;
    }

    cout << "Valores do array gerados aleatoriamente entre 1 e 20:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << meuArray[i] << " ";
    }
    cout << endl;

    cout << "Contagem de cada valor gerado:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "Valor " << i + 1 << ": " << contagemValores[i] << " vezes" << endl;
    }

    return 0;
}