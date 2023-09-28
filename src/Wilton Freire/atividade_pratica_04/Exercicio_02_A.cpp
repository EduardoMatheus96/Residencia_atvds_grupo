#include <iostream>

using namespace std;

int main(void)
{
    char ch = '0';
    cout << ch << "..." << (int)ch << endl;
    ch = '1';
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch++ << endl;
    cout << ch << "..." << (int)ch << endl;

    int j;
    2 + 2;
    cout << "entre um valor inteiro: " << endl;
    cin >> j;
    (j % 2 == 0) ? cout << "par" << endl : cout << "impar" << endl;
    ch = (ch == '0') ? '9' : (ch == '9') ? '0' : ch;
    if (ch == '0')
    {
        ch = '9';
        cout << "O caracter ch não pode ser 0" << endl;

    }
    
    return 0;

}