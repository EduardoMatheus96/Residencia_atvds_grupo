#include <iostream>

#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <iomanip>

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

void imprimePrimo(int numero)
{
    cout << "Primo - " << numero << endl;
}

int verificaDivisores(int numero)
{
    int cont = 0;
    for (int i = 1; i < (numero / 2); i++)
    {
        numero % i == 0 ? cont++ : cont = cont;
        if (cont > 1)
            return 0;
    }
    return cont;
}

void verificaPrimo()
{
    imprimePrimo(0);
    imprimePrimo(1);
    imprimePrimo(2);
    imprimePrimo(3);
    for (int i = 5; i < 100; i += 2)
    {
        if (verificaDivisores(i) == 1)
            imprimePrimo(i);
    }
}

// Exercicio 05

void jogoAdivinhacao()
{
    const string RESET_COLOR = "\033[0m";
    const string ORANJE_TEXT = "\033[38;5;208m";
    const string BLUE_TEXT = "\033[38;5;33m";
    int aleatorio, escolhaUsuario;
    srand(time(0));
    aleatorio = (1 + rand() % 100);

    do
    {

        try
        {
            cout << "Insira um número inteiro entre 1 e 100: ";
            cin >> escolhaUsuario;
            cout << endl;

            if (escolhaUsuario < 1 || escolhaUsuario > 100)
            {
                throw out_of_range("Número fora do intervalo [1, 100]");
            }

            if (escolhaUsuario < aleatorio)
            {
                cout << BLUE_TEXT
                     << "O número inserido esta abaixo do número correto !!"
                     << RESET_COLOR
                     << endl;
            }
            else if (escolhaUsuario > aleatorio)
            {
                cout << ORANJE_TEXT
                     << "O número inserido esta acima do número correto !!" << RESET_COLOR
                     << endl;
            }
            else
            {
                cout << "O número inserido esta correto !!"
                     << endl;
            }
        }
        catch (const invalid_argument &e)
        {
            cerr << "Erro de argumento: " << e.what() << endl;
        }
        catch (const out_of_range &e)
        {
            cerr << "Erro de intervalo: " << e.what() << endl;
        }

    } while (escolhaUsuario != aleatorio);
}

void menuJogo()
{
    char escolha;
    const string RESET_COLOR = "\033[0m";
    const string YELLOW_TEXT = "\033[33m";
    const string BLUE_TEXT = "\033[34m";
    const string GREEN_TEXT = "\033[32m";
    const string RED_TEXT = "\033[31m";
    do                                                                                                                                                      
    {
        cout << YELLOW_TEXT << "_________________________________________________________ \n\n"
             << endl;
        cout << "Menu do jogo:" << RESET_COLOR << endl;

        cout << GREEN_TEXT << "1. Iniciar o jogo" << RESET_COLOR;
        cout << endl;

        cout << RED_TEXT << "0. Sair do jogo" << RESET_COLOR << endl;
        cout << "Informe sua escolha: ";
        cin >> escolha;
        cout << endl;

        int opcao = escolha - '0';

        if (opcao == 1)
        {
            jogoAdivinhacao();
        }
        else if (escolha != '0')
        {
            cout << RED_TEXT << "Escolha inválida. Por favor, tente novamente." << RESET_COLOR << endl;
        }

    } while (escolha != '0');
}

// Exercicio 06
void calcularMediaAlunos() {

    int matricula;
    float nota1, nota2, nota3;

    while (true) {
        std::cout << "Digite a matricula (apenas numeros): ";
        std::cin >> matricula;

        std::cout << "Digite a nota 1: ";
        std::cin >> nota1;

        std::cout << "Digite a nota 2: ";
        std::cin >> nota2;

        std::cout << "Digite a nota 3: ";
        std::cin >> nota3;

        float media = (nota1 + nota2 + nota3) / 3;

        std::cout << "===========================================\n";
        std::cout << "MATRICULA  NOTA1  NOTA2  NOTA3  MEDIA\n";
        std::cout << "===========================================\n";
        std::cout << std::fixed << std::setprecision(1)
                  << matricula << "         " << nota1 << "     " << nota2 << "     " << nota3 << "     " << media << "\n";

        char continuar;
        std::cout << "Deseja cadastrar outro? (S/N): ";
        std::cin >> continuar;

        if (continuar != 'S' && continuar != 's')
            break;
    }
}

// Exercicio 07
void priramideAlfaNumericos(){
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    int numCaracteres = 1;
    char caracter = 'A';

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < numCaracteres; ++j) {
            cout << caracter;

            if (caracter == '9')
                caracter = 'A';
            else if (caracter == 'Z')
                caracter = 'a';
            else if (caracter == 'z')
                caracter = '0';
            else
                caracter++;
        }

        cout << endl;
        numCaracteres++;
    }
}

// Exercicio 08
void imprimePadraoB(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void imprimePadraoA(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void imprimePadraoC(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

// Exercicio 09
bool ehNumeroPerfeito(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return (soma == num);
}



