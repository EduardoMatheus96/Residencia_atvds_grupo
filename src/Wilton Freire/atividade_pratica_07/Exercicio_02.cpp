#include <iostream>

using namespace std;

int main() 
{
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << "E um numero palindromo." << endl;
    } else {
        cout << "Nao é um numero palindromo." << endl;
    }

    return 0;
}