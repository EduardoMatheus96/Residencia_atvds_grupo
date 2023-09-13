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
void pegaImprimeAluno()
{
    map<int, vector<double>> mapaNotas;
    int matricula;
    vector<double> notas(2);

    cout << "Insira a matricula do aluno: ";
    cin >> matricula;
    cout << endl;
    notas.push_back(matricula);

    cout << "Insira as notas desse aluno de matricula "
         << matricula << endl;
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout << "Insira a nota "
             << i + 1
             << " do aluno de matricula "
             << matricula
             << ": ";
        cin >> notas[i];
        cout << endl;
    }
    double mediaAluno = (notas[0] + notas[1] + notas[2]) / 3;
    notas.push_back(mediaAluno);
    mapaNotas[matricula] = notas;

    cout << "MATRÍCULA  NOTA1  NOTA2  NOTA3  MÉDIA" << endl;
    cout << "======================================" << endl;

    for (const auto &par : mapaNotas)
    {
        int matricula = par.first;
        const vector<double> &notas = par.second;

        cout << "  " << matricula << "     ";
        for (size_t i = 0; i < notas.size(); ++i)
        {
            cout << fixed << setprecision(1) << "  " << notas[i];
            if (i < notas.size() - 1)
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}