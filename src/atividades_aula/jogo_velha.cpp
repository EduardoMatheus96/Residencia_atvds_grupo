#include <iostream>

using namespace std;

int main(void) {
    int val[100], cont[20] = {0};
    srand(time(NULL));

    for(int i=0; i<100; i++){
        val[i] = 1 + rand() % 20;
        
    }

    for(int i=0; i<100; i++){
        cont[val[i]-1]++;
    }

    for(int i=0; i<20; i++){
        cout << i+1<< "-"<< cont[i] << "\t";
        for (int j = 0; j < cont[i]; j++){
            cout << "#";
        }
        cout << endl;   
    }
    int max = 0;
    int min = 100;

    for (int k = 0; k < 20; k++){
        if(max < cont[k]){
            max = cont[k];
        }
        if(min > cont[k]){
            min = cont[k];
        } 
    }
    cout << "O menor númemro se repete: " << min << " vezes" << endl;
    cout << "O maior númemro se repete: " << max << " vezes" << endl; 

    cout << "O númemro que aparece mais vezes é o ";
    for (int i=0; i< 20; i++){
        if(cont[i] == max)
            cout << i+1 << " ";
    }
    cout << endl;
    cout << "O númemro que aparece menos vezes é o ";
    for (int i=0; i< 20; i++){
        if(cont[i] == min)
            cout << i+1 << " ";
    }
    cout << endl;
}