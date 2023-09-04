#include <iostream>
#include <cctype>
#include <cstdio>

using namespace std;

char ch1, ch2, ch3;

int main(void) {
    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    cout << "Digite um outro caractere: " << endl;
    cin >> ch2;


    ch3 = ch1 - 1;

    if (isprint(ch3)) {
        printf("Caractere antecessor a %c: %c\n", ch1, ch3);

        printf("Caractere antecessor a %c em formato decimal: %d\n", ch1, int(ch3));
        printf("Caractere antecessor a %c em formato octal: %o\n", ch1, int(ch3));
        printf("Caractere antecessor a %c em formato hexadecimal: %X\n", ch1, int(ch3));
    } else {
        printf("Caractere antecessor a %c: _ (não imprimível)\n", ch1);
    }

    return 0;
}