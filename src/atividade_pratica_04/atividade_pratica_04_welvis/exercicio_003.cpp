/*
Exercício 3: Manipulação de variáveis de tipo inteiro, explorando os limites.

    ● Durante a aula foi apresentado o tipo de dado int e suas variações, que
    permitem representar um subconjunto dos números inteiros. Sobre estes
    tipos de dados crie uma aplicação que:

        a. Sobre o tipo int identifique qual o menor e o maior valor que pode
        ser representado por uma variável deste tipo. Mostre esta informação
        na tela.       
            
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int smallest = std::numeric_limits<int>::min();
    int largest = std::numeric_limits<int>::max();

    std::cout << "Menor valor representado por int: " << smallest << std::endl;
    std::cout << "Maior valor representado por int: " << largest << std::endl;

    return 0;
}

/*
    b. Crie uma variável uli, de tipo unsigned long int, atribua a ela
    o maior valor que pode ser armazenado neste tipo de dado
    (identifique qual o menor e o maior valor que pode ser representado);
*/


#include <iostream>
#include <limits>
using namespace std;

int main() {
    unsigned long int uli = numeric_limits<unsigned long int>::max();

    cout << "Maior valor representado por unsigned long int: " << uli << endl;

    uli = numeric_limits<unsigned long int>::min();

    cout << "Menor valor representado por unsigned long int: " << uli << endl;

    return 0;
}


/*
    c. Crie uma variável li, de tipo long int, atribua a ela o valor da
    variável uli e depois atribua novamente a uli o valor armazenado
    em li. O que acontece e por que? Mostre o resultado na tela e
    coloque suas considerações num comentário no código.
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    unsigned long int uli = numeric_limits<unsigned long int>::max();
    long int li = uli;  // Atribuição de uli para li
    uli = li;           // Atribuição de li para uli

    cout << "Valor em li: " << li << endl;
    cout << "Valor em uli após a troca: " << uli << endl;

    return 0;
}

/*
Ao atribuir o valor máximo de um unsigned long int para um 
long int, a conversão é segura, pois ambos os tipos de dados têm tamanho 
compatível e podem armazenar o mesmo intervalo de valores positivos. No 
entanto, ao atribuir o valor máximo de um long int para um unsigned long int, 
você pode encontrar problemas relacionados à representação de números negativos 
como positivos, devido à diferença nas representações internas dos tipos de 
dados. Isso pode resultar em valores estranhos ou inesperados.
*/


/*        
    d. Atribua a li o maior valor que pode ser armazenado num long
    int (identifique qual o menor e o maior valor que pode ser
    representado);
*/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    long int li = numeric_limits<long int>::max();

    cout << "Maior valor representado por long int: " << li << endl;

    return 0;
}

/*        
    e. Crie uma variável ui, de tipo unsigned int, atribua a ela o valor
    da variável li e depois atribua novamente a li o valor armazenado
    em ui. O que acontece e por que? Mostre o resultado na tela e
    coloque suas considerações num comentário no código.
*/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    long int li = numeric_limits<long int>::max();
    
    cout << "Maior valor representado por long int: " << li << endl;

    unsigned int ui = static_cast<unsigned int>(li);  // Atribuição de li para ui
    li = static_cast<long int>(ui);                   // Atribuição de ui para li

    cout << "Valor em ui: " << ui << endl;
    cout << "Valor em li após a troca: " << li << endl;

    return 0;
}

/*
Quando você atribui o valor de li a ui, ocorre uma conversão. Como li contém um 
valor maior do que um unsigned int pode representar, haverá um truncamento do valor, 
e o resultado armazenado em ui será o valor máximo de unsigned int.

Ao atribuir o valor de ui de volta a li, você está essencialmente convertendo o 
valor truncado novamente para long int. Isso pode resultar em um valor negativo 
se o valor truncado em ui for maior do que o valor máximo representado por long 
int, o que causará um comportamento indefinido.

Portanto, o resultado ao executar o código dependerá das representações internas 
dos tipos de dados e da arquitetura do sistema em que o código está sendo executado. 
Em algumas situações, você pode acabar com um valor negativo em li após a troca.
*/

/*            
    f. Atribua a ui o maior valor que pode ser armazenado num
    unsigned int (identifique qual o menor e o maior valor que pode
    ser representado);
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
    unsigned int ui = numeric_limits<unsigned int>::max();

    cout << "Maior valor representado por unsigned int: " << ui << endl;

    return 0;
}

/*
O tipo de dado unsigned int é utilizado para representar números inteiros sem 
sinal. Isso significa que ele só pode armazenar valores positivos ou zero. 
Portanto, o menor valor representado por um unsigned int é sempre 0, já que 
não permite números negativos.
*/