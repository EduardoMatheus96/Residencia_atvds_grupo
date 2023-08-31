/*
Exercício 4: Manipulação de variáveis de ponto flutuante, explorando os limites.

    ● Durante a aula foram apresentados o tipo de dados double e suas
    variações, que permitem representar um subconjunto dos números reais.
    Sobre estes tipos de dados crie uma aplicação que:

        a. Sobre o tipo float identifique qual o menor e o maior valor que
        pode ser representado por uma variável deste tipo. Mostre esta
        informação na tela.      

*/


using namespace std;
#include <iostream>
#include <limits>

int main() {
    // Menor valor representável pelo tipo float
    float minFloat = numeric_limits<float>::min();

    // Maior valor representável pelo tipo float
    float maxFloat = numeric_limits<float>::max();

    cout << "Menor valor float: " << minFloat << endl;
    cout << "Maior valor float: " << maxFloat << endl;

    return 0;
}


/*
    b. Crie uma variável pif de tipo float e atribua a ela o valor da
    constante pi com o maior número de casas decimais que você consiga
    achar na Internet. Imprima este valor na tela.
*/
using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Definindo a variável pif como tipo float e atribuindo o valor de pi com alta precisão
    float pif = M_PI;

    // Configurando a saída para exibir o valor com alta precisão
    cout << setprecision(numeric_limits<float>::digits10) << pif << endl;

    return 0;
}

/*
    c. Explore as formas de formatar a saída com o comando cout e
    modifique a quantidade de casas decimais que são apresentadas para
        2, 4, 8 e 16.
*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double pi = M_PI;

    // Formatar a saída com 2 casas decimais
    cout << "Pi com 2 casas decimais: " << setprecision(2) << pi << endl;

    // Formatar a saída com 4 casas decimais
    cout << "Pi com 4 casas decimais: " << setprecision(4) << pi << endl;

    // Formatar a saída com 8 casas decimais
    cout << "Pi com 8 casas decimais: " << setprecision(8) << pi << endl;

    // Formatar a saída com 16 casas decimais
    cout << "Pi com 16 casas decimais: " << setprecision(16) << pi << endl;

    return 0;
}

/*
    d. Crie uma variável pid de tipo double e atribua a ela o valor da
    constante pi com o maior número de casas decimais que você consiga
    achar na Internet. Imprima este valor na tela.
*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Aproximação de pi com alta precisão
    double pid = 3.14159265358979323846;

    // Imprimir o valor de pi com a aproximação
    cout << setprecision(numeric_limits<double>::digits10) << pid << endl;

    return 0;
}

/*
    e. Identifique se existe alguma diferença entre o valor pif e pid quando
    seus valores são impressos com cout utilizando 2, 4, 8 e 16 casas
    decimais
*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Aproximação de pi com alta precisão
    float pif = 3.14159265358979323846f;
    double pid = 3.14159265358979323846;

    // Imprimir os valores de pif e pid com diferentes quantidades de casas decimais
    cout << "pif:" << endl;
    cout << "  2 casas: " << setprecision(2) << pif << endl;
    cout << "  4 casas: " << setprecision(4) << pif << endl;
    cout << "  8 casas: " << setprecision(8) << pif << endl;
    cout << " 16 casas: " << setprecision(16) << pif << endl;

    cout << "pid:" << endl;
    cout << "  2 casas: " << setprecision(2) << pid << endl;
    cout << "  4 casas: " << setprecision(4) << pid << endl;
    cout << "  8 casas: " << setprecision(8) << pid << endl;
    cout << " 16 casas: " << setprecision(16) << pid << endl;

    return 0;
}

/*
As variáveis pif e pid contêm aproximações de π (pi), a precisão dos tipos de dados float 
e double é limitada. Portanto, mesmo que atribuamos valores diferentes a pif e pid, eles 
ainda serão aproximações de π com a precisão permitida pelos tipos de dados.
*/

/*
    f. No seu sistema existe diferença entre o tipo double e long double?
    Mostre seu achado com algum exemplo dentro do seu código.
*/

using namespace std;
#include <iostream>
#include <iomanip>
#include <limits>

int main() {
    // Precisão do tipo double
    cout << "Precisão do tipo double: " << numeric_limits<double>::digits10 << " dígitos" << endl;

    // Precisão do tipo long double
    cout << "Precisão do tipo long double: " << numeric_limits<long double>::digits10 << " dígitos" << endl;

    return 0;
}
