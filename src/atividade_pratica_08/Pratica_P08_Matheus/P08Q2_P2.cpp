#include <iostream>
#include <ctime>

using namespace std;
int main(void){
    
    double temperaturas[250];
    
    srand(time(NULL));
    
    for (int i = 0; i < 250; i++)
    {
        temperaturas[i] = 10 + 30.0* (1.0*rand() /RAND_MAX);
    }
    for(int i=0; i<10; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    for (int i = 120; i < 130; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    for (int i = 240; i < 250; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    
    double maxContagem = temperaturas[0];  
    double minContagem = temperaturas[0];
    double somaTemp = 0;

    for (int i = 1; i < 250; i++) {
        if (temperaturas[i] > maxContagem) {
            maxContagem = temperaturas[i];
        }
    }
    for (int i = 1; i < 250; i++) {
        if (temperaturas[i] < minContagem) {
            minContagem = temperaturas[i];
        }
    }
    for (int i = 0; i < 250; i++) {
        somaTemp += temperaturas[i];
    }
    
    cout << "O valor médio é: " << somaTemp/250 << endl;
    cout << "O menor valor é: " << minContagem << endl;
    cout << "O maior valor é: " << maxContagem << endl;

    for (int i = 0; i < 250; i++)
    {
        if(temperaturas[i] > somaTemp/250){
            temperaturas[i] += 1; 
        }
        else
        {
            temperaturas[i] -= 2;
        }
    }
    for(int i=0; i < 10; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    for (int i = 120; i < 130; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    for (int i = 240; i < 250; i++)
    {
        cout << "Na unidade meteorologica: " << i+1 <<  " // O valor da temperatura é: " << temperaturas[i] << endl;
    }
    
    return 0;
}
