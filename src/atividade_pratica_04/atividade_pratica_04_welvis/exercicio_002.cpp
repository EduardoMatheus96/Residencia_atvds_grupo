/*
Exercício 2: Manipulação de variáveis de tipo caractere e explorando o uso de cout.

    ● Os caracteres numéricos aparecem na tabela ASCII, e em outras, numa
    sequência que começa pelo caractere ‘0’ até o caractere ‘9’. As variáveis de
    tipo caractere podem ser tratadas também como valores numéricos. Com
    base nestas afirmações desenvolva um programa em C++ que:

        a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos
        e seu correspondente código numérico. Como modificar o
        comportamento do cout para imprimir um objeto de tipo char como
        caractere e como número?

            i. Exemplo: 
                ‘0’ - 48
                ‘1’ - 49
                ...
                ‘9’ - 57

        b. Modifique o exercício anterior para que a saída imprima também o
        código numérico em octal e em hexadecimal.

        c. Acrescente ao código do exercício anterior a possibilidade de ler um
        caractere qualquer e imprima no mesmo formato do inciso anterior.

        d. Pesquise como fazer para armazenar uma variável os caracteres
        especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
        exemplo que demonstra como usar este recurso. 
            
*/

#include <iostream>
using namespace std;

int main() {
    char c = '0';

    // Imprimir caracteres numéricos e seus códigos numéricos usando cout
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c++ << "' - " << static_cast<int>(c - 1) << endl;
    cout << "'" << c << "' - " << static_cast<int>(c) << endl;

    return 0;
}


/*

    b. Modifique o exercício anterior para que a saída imprima também o
    código numérico em octal e em hexadecimal.
            
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c = '0';

    // Imprimir caracteres numéricos e seus códigos numéricos em decimal, octal e hexadecimal
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c++ << "' - " << dec << static_cast<int>(c - 1) << " (decimal), " << oct << static_cast<int>(c - 1) << " (octal), " << hex << uppercase << static_cast<int>(c - 1) << " (hexadecimal)" << endl;
    cout << "'" << c << "' - " << dec << static_cast<int>(c) << " (decimal), " << oct << static_cast<int>(c) << " (octal), " << hex << uppercase << static_cast<int>(c) << " (hexadecimal)" << endl;

    return 0;
}


/*

    c. Acrescente ao código do exercício anterior a possibilidade de ler um
    caractere qualquer e imprima no mesmo formato do inciso anterior. 
            
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Ler um caractere do usuário
    char input_char;
    cout << "Digite um caractere: ";
    cin >> input_char;

    // Imprimir as representações do caractere em decimal, octal e hexadecimal
    cout << "'" << input_char << "' - "
              << dec << static_cast<int>(input_char) << " (decimal), "
              << oct << static_cast<int>(input_char) << " (octal), "
              << hex << uppercase << static_cast<int>(input_char) << " (hexadecimal)"
              << endl;

    return 0;
}


/*
    d. Pesquise como fazer para armazenar uma variável os caracteres
    especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
    exemplo que demonstra como usar este recurso. 
            
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Armazenar caracteres especiais 'ç' e 'ã'
    char special_char_1 = 'ç';
    char special_char_2 = 'ã';

    // Imprimir as representações dos caracteres especiais em decimal, octal e hexadecimal
    cout << "'" << special_char_1 << "' - "
              << dec << static_cast<int>(special_char_1) << " (decimal), "
              << oct << static_cast<int>(special_char_1) << " (octal), "
              << hex << uppercase << static_cast<int>(special_char_1) << " (hexadecimal)"
              << endl;

    cout << "'" << special_char_2 << "' - "
              << dec << static_cast<int>(special_char_2) << " (decimal), "
              << oct << static_cast<int>(special_char_2) << " (octal), "
              << hex << uppercase << static_cast<int>(special_char_2) << " (hexadecimal)"
              << endl;

    return 0;
}
