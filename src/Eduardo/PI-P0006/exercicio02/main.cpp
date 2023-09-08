#include <iostream>
#include "./funcoes_auxiliares/header_funcs.h"

using namespace std;

int main(void)
{
    int a, b, c;
    do
    {
        cout << "Digite dois números inteiros : " << endl;
        cout << "Primeiro: ";
        cin >> a;
        cout << endl;
        cout << "Segundo: ";
        cin >> b;
        cout << endl;
    } while (verificaInt(a) || verificaInt(b));

    c = expressaoSemParenteses(a, b);

    cout << "4 * a + b/3 - 5 = "
         << c
         << endl;

    c = expressaoComParenteses(a, b);

    cout << "4 * (a + b)/(3 - 5) = "
         << c
         << endl;

    /*
    O resultado desssa expressão é diferente pois sao expressoes diferentes já que a expressao sem os parenteses
    primeiro irá fazer as * e / e na com os () foi alterada essa ordem;
    */

    c = expressaoSemParentesesOutroExemplo(a, b);
    cout << "5 * a - b = "
         << c
         << endl;

    c = expressaoComParentesesOutroExemplo(a, b);
    cout << "5 * (a - b) = "
         << c
         << endl;

    c = (a * a) + 2*b + c;
    cout << "a² + 2b + c = "
         << c
         << endl;

    return 0;
}