#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main(void) {
    //Letra a
    cout << "Maior valor possivel de um Float é: " 
    << numeric_limits<float>::max() 
    << endl;

    cout << "Menor valor possivel de um Float é: " 
    << numeric_limits<float>::min() 
    << endl;

    //Letra b
    const float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286289986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644;
    cout << "Maior representação do valor de PI é: " << pi << endl;

    //Letra c
    cout << fixed << setprecision(2) 
    << "Representação do valor de PI com 2 casas: " 
    << pi << 
    endl;
    
    cout << fixed << setprecision(4) 
    << "Representação do valor de PI com 4 casas: " 
    << pi << 
    endl;

    cout << fixed << setprecision(8) 
    << "Representação do valor de PI com 8 casas: " 
    << pi << 
    endl;

    cout << fixed << setprecision(16) 
    << "Representação do valor de PI com 16 casas: " 
    << pi << 
    endl;

    //Letra d
    double pid = 3.141592653589793238462643383279502884197169399375105820974944592307816406286289986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644;
    cout << "Maior representação do valor de PI usando Double: "
    << pid
    << endl;

    //Letra f
    long double lpid = 3.141592653589793238462643383279502884197169399375105820974944592307816406286289986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644;
    cout << "Maior representação do valor de PI usando long Double: "
    << lpid
    << endl;
    /*
        Resposta no meu computador nao houve diferença entre double e long double
            Maior representação do valor de PI usando Double: 3.1415926535897931
            Maior representação do valor de PI usando long Double: 3.1415926535897931
    */

    return 0;
}