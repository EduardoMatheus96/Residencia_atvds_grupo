#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ch = '0';
    cout << ch << "... Dec: " << (int)ch << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    ch = '1';
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch++ << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;
    cout << ch << "... Dec: " << (int)ch << " Oct: " << setw(3) << oct << (int)ch << " Hex: " << setw(2) << hex << (int)ch << endl;

    int j;
    2 + 2;
    cout << "Entre com um valor inteiro: " << endl;
    cin >> j;
    (j % 2 == 0) ? cout << "Par" << endl : cout << "Ímpar" << endl;
    ch = (ch == '0') ? '9' : (ch == '9') ? '0' : ch;
    if (ch == '0')
    {
        ch = '9';
        cout << "O caractere ch não pode ser 0" << endl;
    }

    return 0;
}