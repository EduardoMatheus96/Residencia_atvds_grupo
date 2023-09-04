#include <iostream>


using namespace std;

char ch1, ch2, ch3;

int main(void) {
    cout << "Digite um caractere: " << endl;
    cin >> ch1;

    cout << "Digite outro caractere: " << endl;
    cin >> ch2;

    ch3 = (isupper(ch1)) ? 'A' : ' ';
    cout << "O valor de ch1: " << ch3 << endl;

    ch3 = (islower(ch2)) ? 'a' : ' ';
    cout << "O valor de ch2: " << ch3 << endl;
    
    return 0;
}
