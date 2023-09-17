/*
Exercício 9:
    Faça uma função para calcular o valor de S, dado por:
        S = 1/n + 2/n-1 + 3/n-2 + ... + n-1/2 + n/1

    Protótipo da função: float calc_serie(int N);

*/

#include <iostream>
using namespace std;

float calc_serie(int N) {
    double soma = 0;
    
    for (int i = N; i >= 1; i--) {
        soma += static_cast<double>(i) / (N - i + 1);
    }
    
    return soma;
}

int main() {
    int n;
    cout << "Digite o valor de n: ";
    cin >> n;
    
    float resultado = calc_serie(n);
    
    cout << "O valor de S e: " << resultado << endl;
    
    return 0;
}
