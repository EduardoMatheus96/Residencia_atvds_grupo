#include <iostream>

using namespace std;

int main(void){
    int val[100], cont[20] = {0};
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        val[i] = 1 + rand()%20;
        cout << i << " - " << val[i] << endl;
    }

    for (int i = 0; i < 100; i++)
    {
        cont[val[i] - 1]++;
    }
    
    for (int i = 0; i < 20; i++)
    {
        cout << i+1 << " - " << cont[i] << " |";
        for (int j = 0; j < cont[i]; j++)
        {
            cout << "#";
        }
        cout << endl;       
    }

    int max = 0;
    int min = 100;

    for (int i = 0; i < 20; i++)
    {
        if(max < cont[i]){
            max = cont[i];
        }
        if(min > cont[i]){
            min = cont[i];
        }
    }

    cout << "O número que mais se repete aparece "
    << max
    << " vezes"
    << endl;

    cout << "O número que menos se repete aparece "
    << min
    << " vezes"
    << endl;

    cout << "Os números que mais se repetem são: ";
    for (int i = 0; i < 20; i++)
    {
        if(cont[i] == max){
            cout << i+1 << " ";
        }
    }
    cout << endl;
        
    cout << "Os números que menos se repetem são: ";
    for (int i = 0; i < 20; i++)
    {
        if(cont[i] == min){
            cout << i+1 << " ";
        }
    }
    cout << endl;

    
    
    

    return 0;
}