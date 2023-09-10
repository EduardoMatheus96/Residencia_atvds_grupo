/*
Exercício 4: Manipulando arrays multidimensionais
    
    ● Como parte do exercício 3 foi se trabalhou com a geração de strings
    aleatórias. Modifique a sua implementação para:

        a. Em vez de gerar apenas duas strings, gerar uma lista de 10 strings
        aleatórias;

        b. Substitua o primeiro caractere de cada string por maiúscula;

*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para gerar uma letra aleatória
char randomLetter() {
    return 'a' + rand() % 26;
}

// Função para gerar uma string aleatória de tamanho especificado
string generateRandomString(int length) {
    string result;
    for (int i = 0; i < length; i++) {
        result += randomLetter();
    }
    return result;
}

// Função para converter o primeiro caractere de uma string em maiúscula
string capitalizeFirstLetter(const string& input) {
    if (input.empty()) {
        return input; // Retorna a string original se estiver vazia
    }

    string result = input;
    result[0] = toupper(result[0]);
    return result;
}

int main() {
    srand(time(nullptr)); // Semente para números aleatórios

    vector<string> stringList;

    // Gerar uma lista de 10 strings aleatórias
    for (int i = 0; i < 10; i++) {
        string randomString = generateRandomString(5); // Strings de tamanho 5
        stringList.push_back(randomString);
    }

    // Substituir o primeiro caractere de cada string por maiúscula
    for (string& str : stringList) {
        str = capitalizeFirstLetter(str);
    }

    // Exibir as strings resultantes
    cout << "Strings com o primeiro caractere em maiúscula:" << endl;
    for (const string& str : stringList) {
        cout << str << endl;
    }

    return 0;
}

