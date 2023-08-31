
//Questão 4. a), b) e c) Identificando maior e menor valor para tipo float, criando variável float pif atribuindo valor de Pi. Imprimindo respostas com 2, 4, 8 e 16 casas decimais

#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
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



//Questão 4. d) Criando variável double pid atribuindo valor de Pi com 20 casas decimais (referencia online)


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



//Questão 4. f) Identificando diferença entre double e long double

#include <iostream>

using namespace std;

int main(void){

    double var1;
    long double var2;

    cout << "Quantidade de bytes do double: " << sizeof(var1) << endl;
    cout << "Quantidade de bytes do long double: " << sizeof(var2) << endl;
    return 0;
}