#include <iostream>
#include <limits>
using namespace std;

int main(void){
    unsigned long int uli;
    long int li;

    //Letra a
    cout << "Valor mínimo de int: " << numeric_limits<int>::min() << endl;
    
    //Letra b
    cout << "Maior valor de unsigned long int: " << numeric_limits<unsigned long int>::max() << endl;
    uli = numeric_limits<unsigned long int>::max();

    //Letra c
    li = uli;
    uli = li;
    cout << "valor de li: " << li << endl;
    cout << "valor de uli: " << uli << endl;
    // Resposta letra c : O valor de li é representado com -1 pois ele extrapolou o maior valor possivel de um long int; 

    //Letra d
    li = numeric_limits<long int>::max();
    cout << "Maior valor possivel de um long int é: " << numeric_limits<long int>::max() << endl;
    cout << "Menor valor possivel de um long int é: " << numeric_limits<long int>::min() << endl;

    //Letra e
    unsigned int ui;
    ui = li;
    li = ui;
    cout << "O valor de ui é: " << ui << endl;
    cout << "O valor de  li é: " << li << endl;
    /*
    Resposta: O valor de ui que apareceu na tela nao foi igual ao valor do li e sim o 
    maior valor possivel do tipo unsigned int, ja o valor de li foi o mesmo valor que 
    a variavel ui mostrou na tela.
    */

    //Letra f
    ui = numeric_limits<unsigned int>::max();
    cout << "O maior valor possivel de um unsigned int é: " << ui << endl;


    return 0;
}