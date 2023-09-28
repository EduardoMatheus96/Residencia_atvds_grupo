#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>

using namespace std;


int main() {

    
    double pid = 3.14159265358979323846;

    cout << "Valor de PI: " << pid << endl;
    cout << "Menor valor float: " << numeric_limits<double>::min() << endl;
    cout << "Maior valor float: " << numeric_limits<double>::max() << endl;
    cout << fixed << setprecision(2) << "PI com 2 casas decimais: " << pid << endl;
    cout << fixed << setprecision(4) << "PI com 4 casas decimais: " << pid << endl;
    cout << fixed << setprecision(8) << "PI com 8 casas decimais: " << pid << endl;
    cout << fixed << setprecision(16) << "PI com 16 casas decimais: " << pid << endl;

    return 0;
}