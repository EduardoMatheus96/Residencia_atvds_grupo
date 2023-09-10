/*
Exercício 3: Manipulação de strings tipo C
    ● Implemente uma aplicação em C que:
        a. Leia do teclado uma string no formato dd/mm/aaaa, ao alguma
        variação desse formato (Ex. 5/12/2022, 05/02/23, 07/5/2024), e
        imprima na tela por separado dia, mês e ano.

        b. Modifique o exemplo anterior de forma a verificar se a data fornecida
        é uma data válida (Ex. 31/02/1990 e 24/15/2002 não são datas
        válidas);

        c. Modifique a aplicação de forma que, se for uma data válida, imprima
        a data por extenso (Ex. para 5/12/2022 imprimir 5 de dezembro de
        2022)

*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Função para verificar se um ano é bissexto
bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para validar uma data
bool validarData(int dia, int mes, int ano) {
    if (ano >= 1900 && ano <= 9999) {
        if (mes >= 1 && mes <= 12) {
            int maxDia = 31;

            if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                maxDia = 30;
            } else if (mes == 2) {
                maxDia = (ehBissexto(ano)) ? 29 : 28;
            }

            return (dia >= 1 && dia <= maxDia);
        }
    }

    return false;
}

int main() {
    string data;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> data;

    // Use stringstream para dividir a string em dia, mês e ano
    // stringstream ss(data);
    int dia, mes, ano;
    // char delimitador;

    // ss >> dia >> delimitador >> mes >> delimitador >> ano;

    //  Verifica o tamanho da string e se ela contém três separadores ("/")
    if (data.size() == 10 && data[2] == '/' && data[5] == '/') {
        // Extrai dia, mês e ano usando conversão de caracteres para inteiros
        dia = (data[0] - '0') * 10 + (data[1] - '0');
        mes = (data[3] - '0') * 10 + (data[4] - '0');
        ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
    } else {
        cout << "Formato de data inválido!" << endl;
    }

    // int valorAtual = 0; // Variável temporária para acumular os dígitos

    // // Loop for para percorrer a string da data
    // for (char c : data) {
    //     if (c >= '0' && c <= '9') {
    //         valorAtual = valorAtual * 10 + (c - '0'); // Converte caracteres para números
    //     } else if (c == '/') {
    //         // Verifica qual valor está sendo lido e armazena no dia, mês ou ano
    //         if (dia == 0) {
    //             dia = valorAtual;
    //         } else if (mes == 0) {
    //             mes = valorAtual;
    //         } else {
    //             ano = valorAtual;
    //         }
    //         valorAtual = 0; // Reinicia a variável temporária
    //     } else {
    //         cout << "Formato de data inválido!" << endl;
    //         return 1; // Sai do programa em caso de formato inválido
    //     }
    // }

    // // Certifica-se de armazenar o valor após o último "/"
    // if (ano == 0) {
    //     ano = valorAtual;
    // }

    if (validarData(dia, mes, ano)) {
        // Data válida, imprima a data por extenso
        string meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho",
                          "agosto", "setembro", "outubro", "novembro", "dezembro"};

        cout << dia << " de " << meses[mes - 1] << " de " << ano << endl;
    } else {
        cout << "Data invalida!" << endl;
    }

    return 0;
}
