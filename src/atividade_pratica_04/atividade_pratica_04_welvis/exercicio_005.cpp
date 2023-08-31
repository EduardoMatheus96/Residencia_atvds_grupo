/*
Exercício 5: Variáveis de tipo Bool

    ● As variáveis de tipo bool podem assumir valores true ou false. Elas
    serão amplamente utilizadas nos próximos tópicos. Entretanto, outros tipos
    de dados podem ser utilizados no lugar de valores bool e seus valores são
    convertidos em true ou false.

        a. Faça uma aplicação que mostre como os diversos tipos que foram
        estudados até aqui são convertidos em true ou false.
   
            
*/

#include <iostream>
using namespace std;

int main() {
    int intVar = 0;
    double doubleVar = 0.0;
    char charVar = '\0';
    const char* strVar = "";
    bool boolVar = true;

    if (intVar) {
        cout << "intVar is true" << endl;
    } else {
        cout << "intVar is false" << endl;
    }

    if (doubleVar) {
        cout << "doubleVar is true" << endl;
    } else {
        cout << "doubleVar is false" << endl;
    }

    if (charVar) {
        cout << "charVar is true" << endl;
    } else {
        cout << "charVar is false" << endl;
    }

    if (strVar) {
        cout << "strVar is true" << endl;
    } else {
        cout << "strVar is false" << endl;
    }

    if (boolVar) {
        cout << "boolVar is true" << endl;
    } else {
        cout << "boolVar is false" << endl;
    }

    return 0;
}
