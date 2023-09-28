#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    
    cout << "Tamanhos e limites dos tipos inteiros:" << endl;

    cout << "Tipo 'int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<int>::min() << endl;

    cout << "Tipo 'unsigned int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned int>::min() << endl;

    cout << "Tipo 'short int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<short int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<short int>::min() << endl;

    cout << "Tipo 'unsigned short int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned short int>::min() << endl;

    cout << "Tipo 'long int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<long int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<long int>::min() << endl;

    cout << "Tipo 'unsigned long int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned long int>::min() << endl;

    return 0;
}