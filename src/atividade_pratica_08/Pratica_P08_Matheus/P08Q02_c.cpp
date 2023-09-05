#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    
    //função adicinada a fim de garantir que os número gerados vão ser aleatórios e diferentes a cada run do programa
    srand(time(0));

    int meuArray[100];
    int contagemValores[20] = {0};

    for (int i = 0; i < 100; i++) {
        meuArray[i] = 1 + rand() % 20;
        contagemValores[meuArray[i] - 1]++; 
    }

    cout << "Valores do array gerados aleatoriamente entre 1 e 20:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << meuArray[i] << " ";
    }
    cout << endl;

    cout << "Contagem de cada valor gerado:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Valor " << i + 1 << ": " << contagemValores[i] << " vezes" << endl;
    }

    int maxContagem = contagemValores[0]; 
    int numeroMaisFrequente = 1; 

    for (int i = 1; i < 20; i++) {
        if (contagemValores[i] > maxContagem) {
            maxContagem = contagemValores[i];
            numeroMaisFrequente = i + 1; 
        }
    }
    cout << "Número que mais aparece: " << numeroMaisFrequente << " (apareceu " << maxContagem << " vezes)" << endl;

    return 0;
}
