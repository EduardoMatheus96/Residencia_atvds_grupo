#include <iostream>

using namespace std;

// Função geral
void fazNada() {}

// Exercicio 01
void imprimeAte100()
{
    for (int i = 0; i < 101; i++)
    {
        (i % 3 == 0 && i % 5 == 0)
            ? cout << i << " - "
                   << "FizzBuzz" << endl
        : (i % 3 == 0)
            ? cout << i << " - "
                   << "Fizz" << endl
        : (i % 5 == 0)
            ? cout << i << " - "
                   << "Buzz" << endl
            : cout << i << endl;
    }
}

// Exercicio 02
void imprimeEhPalindromo(bool isPalindromo)
{
    isPalindromo
        ? cout << "É um número palíndromo !!" << endl
        : cout << "Não é um número palíndromo !!" << endl;
}

void palindromo(int numero)
{
    int numeroReverso = 0;
    int numeroOriginal = numero;

    while (numero > 0)
    {
        int resto = numero % 10;
        numeroReverso = numeroReverso * 10 + resto;
        numero /= 10;
    }

    imprimeEhPalindromo(numeroOriginal == numeroReverso);
}

// Exercicio 03
void divisores(int numero)
{
    cout << "Os divisores de " << numero << " são: " << endl;
    for (int i = 1; i <= (numero / 2); i++)
    {
        if (numero % i)
        {
            fazNada();
        }
        else
        {
            cout << i << endl;
        }
    }
}