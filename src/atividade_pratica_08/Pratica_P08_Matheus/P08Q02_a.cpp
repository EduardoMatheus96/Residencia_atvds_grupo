#include <iostream>

using namespace std;

int main() {

    int meuArray[100];

    for (int i = 0; i < 100; i++) {
        meuArray[i] = 1 + rand() % 20;
    }

    cout << "Valores do array gerados aleatoriamente entre 1 e 20:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << meuArray[i] << " ";
    }
    cout << endl;

    return 0;
}