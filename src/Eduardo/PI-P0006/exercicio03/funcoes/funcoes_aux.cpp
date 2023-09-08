#include <iostream>
#include <iomanip>

using namespace std;

char verificaASCII(char caracter)
{
    if (((int)caracter) < 0 || ((int)caracter > 255))
    {
        return '_';
    }
    else
        return caracter;
}

char pegaAnterior(char caracter)
{
    return verificaASCII(caracter - 1);
}

void imprimiCaracterDecimal(char caracter, bool escolha)
{
    if (!escolha)
    {
        printf("O valor do caracter ch3 em decimal é: %d\n", caracter);
    }
    else
    {
        cout
            << dec
            << "O valor do caracter em decimal é: "
            << static_cast<int>(caracter)
            << endl;
    }
}
void imprimiCaracterOctal(char caracter, bool escolha)
{
    if (!escolha)
    {
        printf("O valor do caracter ch3 em octal é: %o\n", caracter);
    }
    else
    {
        cout
            << oct
            << "O valor do caracter em octal é: "
            << static_cast<int>(caracter)
            << endl;
    }
}
void imprimiCaracterHexadecimal(char caracter, bool escolha)
{
    if (!escolha)
    {
        printf("O valor do caracter ch3 em hexidecimal é: %x\n", caracter);
    }
    else
    {
        cout
            << hex
            << "O valor do caracter em hexadecimal é: "
            << static_cast<int>(caracter)
            << endl;
    }
}

bool verifaMaiscula(char caracter)
{
    if (((int)caracter) < 65 || ((int)caracter) > 90)
    {
        return 0;
    }
    else
        return 1;
}

bool verifaMinuscula(char caracter)
{
    if (((int)caracter) < 97 || ((int)caracter) > 122)
    {
        return 0;
    }
    else
        return 1;
}

bool verificaDigito(char caracter, char caracter02)
{
    if ((((int)caracter) < 48 || ((int)caracter) > 57) && (((int)caracter02) < 48 || ((int)caracter02) > 57))
    {
        return 0;
    }
    else
        return 1;
}

int comparaInteiros(int num01, int num02)
{
    return (num01 > num02) ? 0 : (num01 == num02) ? 1 : 2;

}

void parImpar(int numero){
    numero % 2 == 0 
    ? cout << "É um número par !!!" << endl
    : cout << "É um número ímpar !!!" << endl;
}

void printaMaiorOuIgual(int num01, int num02)
{
    bool igual = ((comparaInteiros(num01, num02)) == 1) ? 1 : 0;
    int maior = ((comparaInteiros(num01, num02)) == 0) ? num01 : num02;

    if (igual)
    {
        cout << "Estes números são iguais !!" << endl;
    }
    else
    {
        cout << maior << " é maior" << endl;
    }
    parImpar(maior);
}


