#include <iostream>

using namespace std;

float calc_serie(int N) {
    float S = 0.0;

    for (int i = 1; i <= N; ++i) {
        S += static_cast<float>(i) / (N - i + 1);
    }

    return S;
}

void exercicio09(){

    int N;

    cout << "Digite o valor de N: ";
    cin >> N;

    // Chama a função para calcular o valor da série
    float resultado = calc_serie(N);

    cout << "Resultado da série: " << resultado << endl;

}