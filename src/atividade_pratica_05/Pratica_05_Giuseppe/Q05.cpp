#include <iostream>

using namespace std;

int main() {
    unsigned char geneP;

    // Letra A e B
    cout << "Digite a informação genética da planta: ";
    cin >> geneP;

    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if ((geneP >> i) & 1) {
            genesPresentes++;
        }
    }

    cout << "Genes presentes na planta: " << genesPresentes << endl;

    // Letra C
    int numeroGene;
    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> numeroGene;

    if (numeroGene >= 1 && numeroGene <= 8) {
        bool genePresente = ((geneP >> (numeroGene - 1)) & 1);
        if (genePresente) {
            cout << "O gene " << numeroGene << " está presente nesta planta." << endl;
        } else {
            cout << "O gene " << numeroGene << " não está presente nesta planta." << endl;
        }
    } else {
        cout << "Número de gene inválido. Digite um número entre 1 e 8." << endl;
    }

    return 0;
}