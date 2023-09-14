#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void insere(vector<int> &vec, int qnt, int elemento){
    int metade = static_cast<int> (qnt/2);
    vec.insert(vec.begin() + metade, elemento);

}

int main(void){
    vector<int> vetinho = {3,5,7,5};
    int tamanho = vetinho.size();
    insere(vetinho, tamanho, 500);
    tamanho = vetinho.size();
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetinho[i] << endl;
    }
    
    return 0;
}