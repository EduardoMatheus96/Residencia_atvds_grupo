#include <iostream>

using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Digite um número inteiro: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << "É um número palíndromo." << endl;
    } else {
        cout << "Não é um número palíndromo." << endl;
    }

    return 0;
}
