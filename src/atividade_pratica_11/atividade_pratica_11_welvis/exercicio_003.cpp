/*
Exercício 3:
Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.
*/



#include <iostream>
#include <vector>

using namespace std;

void sort(float &var1, float &var2, float &var3, float &var4){
    vector<float> aux;
    aux.push_back(var1);
    aux.push_back(var2);
    aux.push_back(var3);
    aux.push_back(var4);

    for (int i = 0; i < 3; i++){
        for (int j = i+1; j < 4; j++){
            if(aux[i] > aux[j]){
                swap(aux[i], aux[j]);
            }
        }
    }

    for (int i = 0; i < 4; i++){
        cout << aux[i] << endl;
    }

}

int main(void){
    float var1 = 5;
    float var2 = 4;
    float var3 = 3;
    float var4 = 2;

    sort(var1, var2, var3, var4);

    return 0;
}


