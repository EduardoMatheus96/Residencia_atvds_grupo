//Questão 3. a) Identificando os menores e maiores valores representados pela variável tipo int

#include <iostream>
#include <limits>

using namespace std;

int main() {
    
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


//Questão 3. b) e c) Criando variáveis (unsigned long int uli) e (long int li). Identificando maior e menor valor representado por uli. Atribuindo valor de uli à li e retornando valor armazenado em li em uli

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Atribuindo valores para cada tipo de inteiro
    int i = 0;
    unsigned int ui = 0;
    short int si = 0;
    unsigned short int usi = 0;
    unsigned long int uli = numeric_limits<unsigned long int>::max();  // como pedido, atribui, o maior valor que ele pode receber.
    long int li = uli;
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
    cout << "Valor atribuído: " << li << endl; // o valor apresentado foi -1, ja que o li nao suporta o valor maximo atribuido no uli.

    cout << "Tipo 'unsigned long int':" << endl;
    cout << "Maior valor representável: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor representável: " << numeric_limits<unsigned long int>::min() << endl;
    cout << "Valor atribuído: " << uli << endl;

    return 0;
    }

   



//Questão 3. d) e e) Atribuindo maior valor de li (long int) identificando maior e menor valor que podem ser representados. Criando variável unsingned int ui, atribuindo valor de li e retornando o valor armazenado em ui em li

    
#include <iostream>
#include <limits>

using namespace std;

int main() {
// Atribuindo valores para cada tipo de inteiro
    int i = 0;
    short int si = 0;
    unsigned short int usi = 0;
    unsigned long int uli = 0;
    long int li = numeric_limits<long int>::max();             // Atribuído maior valor de li - usando numeric_limits
    unsigned int ui = li;                                      // Retornando valor de li
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


//Questão 3. f) Atribuindo o maior valor armazenado num unsigned int a ui e identificando o maior e menor valor que pode ser representado

#include <iostream>
#include <limits>

using namespace std;

int main() {
   
    int i = 0;
    short int si = 0;
    unsigned short int usi = 0;
    unsigned long int uli = 0;
    long int li = 0; 
    unsigned int ui = numeric_limits<unsigned int>::max();
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

    return 0;
    }
