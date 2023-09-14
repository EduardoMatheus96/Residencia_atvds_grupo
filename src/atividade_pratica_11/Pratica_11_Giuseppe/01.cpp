#include <iostream>
#include <vector>

using namespace std;

void maxmin(vector<int> vetor, int n, int & maximo, int &minimo) {
    maximo = minimo = vetor[0]; 

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main(void){

    vector<int> vec;
    vec = {1,2,3,4,5,25,40};
    int max, min;
    maxmin(vec, vec.size(), max, min);
    cout << "Maximo: " << max << "Minimo: " << min;
}
