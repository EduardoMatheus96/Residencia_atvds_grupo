/*
//Exercício 2 A, B e C

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
*/

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int val[100];
    int cont[20] = {0};
    

    for (int i = 0; i < 100; i++)
    {
        val[i] = 1 + rand()%20;
        cout << i << "." << val[i] << endl;
    }

    for (int i = 0; i < 100; i++)
    {
        cont[val[i]-1]++;
    }

    for(int i = 0; i < 20; i++)
    {
        cout << i+1 << "." << cont[i] << endl;
        for(int j = 0; j < cont[i]; j++)
        cout << endl;
                
    }

        int max = 0;
        int min = 100;
        
    for(int i = 0; i < 20; i++)
        {
            if(max < cont[i])
            {
                max = cont[i];
            }
            if(min > cont[i])
            {
                min = cont[i];
            }
        }

        cout << "Qual o numero que mais se repete " << max << endl;
        cout << "Qual o numero que menos se repete " << min << endl;

        cout << "O numero que mais se repete sao: " << endl;
    for(int i = 0; i < 20; i++)
        {
            if(cont[i] == max)
            {
                cout << i + 1 << endl;
            }
        }
        
    return 0;

}