#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Função para gerar um caractere aleatório no intervalo [a, b]
char gerarCaracter(char a, char b) {
    return a + rand() % (b - a + 1);
}

// Função para gerar uma string aleatória com o tamanho especificado
string gerarStrings(int length) {
    string randomString;
    for (int i = 0; i < length; ++i) {
        randomString.push_back(gerarCaracter('a', 'z'));
    }
    return randomString;
}

// Função para transformar o primeiro caractere da string em maiúscula
void capitalizeFirstCharacter(string &str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
}
void exercicio04Parte02()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gera uma lista de 10 strings aleatórias
    vector<string> randomStrings;
    for (int i = 0; i < 10; ++i)
    {
        string randomString = gerarStrings(10);
        capitalizeFirstCharacter(randomString);
        randomStrings.push_back(randomString);
    }

    for (const auto &str : randomStrings)
    {
        cout << str << endl;
    }
}