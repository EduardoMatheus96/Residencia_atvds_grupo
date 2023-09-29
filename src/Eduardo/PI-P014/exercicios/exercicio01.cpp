#include <iostream>
#include <vector>

using namespace std;

unsigned long long calcularFatorial(int num) {
    if (num < 0) {
        cerr << "Fatorial de número negativo não é definido." << endl;
        return 0;
    }
    if (num == 0 || num == 1)
        return 1;

    unsigned long long fatorial = 1;
    for (int i = 2; i <= num; ++i)
        fatorial *= i;

    return fatorial;
}

void exercicio01() {
    int numeros[] = {5, 7, 10};  // Números para calcular o fatorial

    for (int i = 0; i < 3; ++i) {
        int num = numeros[i];
        unsigned long long fatorial = calcularFatorial(num);

        cout << "Fatorial de " << num << " é: " << fatorial << endl;
    }


}