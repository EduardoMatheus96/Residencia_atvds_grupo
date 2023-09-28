#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float pif = 3.14159265358979323846;

    cout << "Valor de PI: " << pif << endl;
    cout << "Menor valor float: " << numeric_limits<float>::min() << endl;
    cout << "Maior valor float: " << numeric_limits<float>::max() << endl;
    cout << fixed << setprecision(2) << "PI com 2 casas decimais: " << pif << endl;
    cout << fixed << setprecision(4) << "PI com 4 casas decimais: " << pif << endl;
    cout << fixed << setprecision(8) << "PI com 8 casas decimais: " << pif << endl;
    cout << fixed << setprecision(16) << "PI com 16 casas decimais: " << pif << endl;

    return 0;
}