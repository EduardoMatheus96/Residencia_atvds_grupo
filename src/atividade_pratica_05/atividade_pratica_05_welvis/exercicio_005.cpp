/*
Exercício 5: Operadores bit a bit

    ● Uma pesquisa monitora 8 genes de uma planta para avaliar como cada um
    deles influencia na resposta a uma determinada praga. Os pesquisadores
    optaram por representar a informação dos genes de cada planta com um
    inteiro sem sinal, onde cada bit da representação binária identifica se um
    gene está presente (1) ou não (0) naquela planta. Implemente um programa
    que:

        a. Leia a informação genética de uma planta na forma de um caractere
        sem sinal (unsigned char);

        b. Utilizando os operadores bit a bit identifique quantos, dos genes
        estudados, estão presentes;

        c. Solicite do usuário a informação sobre qual gene específico ele que
        informação (um valor inteiro entre 1 e 8) e retorne se este gene se
        encontra nesta planta.   
            
*/

#include <iostream>
using namespace std;

int main() {
    unsigned char geneticInfo;

    // Parte (a): Leitura da informação genética da planta
    cout << "Digite a informação genética da planta (0-255): ";
    cin >> geneticInfo;

    // Parte (b): Contagem de genes presentes
    int genesPresentes = __builtin_popcount(geneticInfo);
    cout << "Número de genes presentes: " << genesPresentes << endl;

    // Parte (c): Verificação de um gene específico
    int geneDesejado;
    cout << "Digite o número do gene desejado (1-8): ";
    cin >> geneDesejado;

    if (geneDesejado >= 1 && geneDesejado <= 8) {
        bool presente = (geneticInfo & (1 << (geneDesejado - 1))) != 0;
        if (presente) {
            cout << "O gene " << geneDesejado << " está presente na planta." << endl;
        } else {
            cout << "O gene " << geneDesejado << " não está presente na planta." << endl;
        }
    } else {
        cout << "Número de gene inválido." << endl;
    }

    return 0;
}


