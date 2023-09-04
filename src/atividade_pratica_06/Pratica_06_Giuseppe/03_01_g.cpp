#include <iostream>


using namespace std;

char ch1, ch2, ch3;

int main(void) {
    cout << "Digite um caractere: " << endl;
    cin >> ch1;

    cout << "Digite outro caractere: " << endl;
    cin >> ch2;

    ch3 = (isdigit(ch1)) || (isdigit(ch2)) ? '1' : ' ';
    cout << "O valor de ch3: " << ch3 << endl;

    return 0;
}