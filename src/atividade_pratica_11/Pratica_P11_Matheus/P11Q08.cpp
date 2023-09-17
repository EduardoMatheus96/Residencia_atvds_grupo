#include <iostream>
#include <vector>

using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }
    if (n <= 3) {
        return true; // 2 e 3 são primos
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Números divisíveis por 2 ou 3 não são primos
    }

    // Verifica se o número é divisível por quaisquer outros números ímpares até sua raiz quadrada
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

// Função que retorna um vetor de números primos até um limite dado
vector<int> numerosPrimos(vector<int> numeros) {

    vector<int> primos;

    for (int i = 0; i < numeros.size(); i++) {
        if (ehPrimo(numeros[i])) {
            primos.push_back(numeros[i]);
        }
    }

    return primos;
}

int main() {
    vector<int> numeros = {10,6,8,7,4,3,21,27};
    
    vector<int> primos;

    primos = numerosPrimos(numeros);

    cout << "Números primos: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}