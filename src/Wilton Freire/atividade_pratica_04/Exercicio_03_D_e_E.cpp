#include <iostream>
#include <limits>

using namespace std;

int main() 
{

    int i = 0;
    short int si = 0;
    unsigned short int usi = 0;
    unsigned long int uli = 0;
    long int li = numeric_limits<long int>::max();             
    unsigned int ui = li;                                      
    cout << "Tamanhos e limites dos tipos inteiros:" << endl;

    cout << "Tipo 'int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<int>::min() << endl;
    cout << "Valor atribuído: " << i << endl;

    cout << "Tipo 'unsigned int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Valor atribuído: " << ui << endl;

    cout << "Tipo 'short int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<short int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<short int>::min() << endl;
    cout << "Valor atribuído: " << si << endl;

    cout << "Tipo 'unsigned short int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Valor atribuído: " << usi << endl;

    cout << "Tipo 'long int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<long int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<long int>::min() << endl;
    cout << "Valor atribuído: " << li << endl;

    cout << "Tipo 'unsigned long int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Valor atribuído: " << uli << endl;

    li = ui;
    cout << "Retornando o valor de ui para li: " << li << endl;
     

    return 0;

}
