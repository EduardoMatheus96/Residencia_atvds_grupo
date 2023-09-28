#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

char generateRandomChar(char a, char b) {
    return a + rand() % (b - a + 1);
}

// Função para gerar uma string aleatória com o tamanho especificado
string generateRandomString(int length) {
    string randomString;
    for (int i = 0; i < length; ++i) {
        randomString.push_back(generateRandomChar('a', 'z'));
    }
    return randomString;
}

void toUpper(string &str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
}

void exercico03Parte02(){
    // Inicializa a semente para a geração de números aleatórios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Gera duas strings aleatórias
    string str1 = generateRandomString(10);
    string str2 = generateRandomString(10);

    // Transforma o primeiro caractere de cada string em maiúscula
    toUpper(str1);
    toUpper(str2);

    // Ordena as strings em ordem alfabética
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
}