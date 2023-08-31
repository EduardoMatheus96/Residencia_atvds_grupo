
//Questão 5. a) e b)

#include <iostream>

using namespace std;

int main() {
    unsigned char geneP;

    cout << "Digite a informacao genetica da planta: ";
    cin >> geneP;

    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if ((geneP >> i) & 1) {
            genesPresentes++;
        }
    }

    cout << "Genes presentes na planta: " << genesPresentes << endl;

    // Questão 5. c)
    int numeroGene;
    cout << "Digite o numero do gene que deseja verificar (entre 1 e 8): ";
    cin >> numeroGene;

    if (numeroGene >= 1 && numeroGene <= 8) {
        bool genePresente = ((geneP >> (numeroGene - 1)) & 1);
        if (genePresente) {
            cout << "O gene " << numeroGene << " esta presente nesta planta." << endl;
        } else {
            cout << "O gene " << numeroGene << " nao esta presente nesta planta." << endl;
        }
    } else {
        cout << "Numero de gene invalido. Digite um numero entre 1 e 8." << endl;
    }

    return 0;
}