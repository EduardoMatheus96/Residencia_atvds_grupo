#include <iostream>

int main() {
    //Letra a
    unsigned char infoGenetica;

    std::cout << "Digite a informação genética da planta (0-255): ";
    std::cin >> infoGenetica;

    //Letra b
    int genesPresentes = 0;

    for (int i = 0; i < 8; ++i) {
        if (infoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }

    std::cout << "Número de genes presentes: " << genesPresentes << std::endl;

    //Letra c
    int numeroGene;
    std::cout << "Digite o número do gene que você deseja verificar (1-8): ";
    std::cin >> numeroGene;

    if (numeroGene >= 1 && numeroGene <= 8) {
        bool genePresente = infoGenetica & (1 << (numeroGene - 1));
        std::cout << "O gene " << numeroGene << (genePresente ? " está" : " não está") << " presente na planta." << std::endl;
    } else {
        std::cout << "Número de gene inválido. Insira um valor entre 1 e 8." << std::endl;
    }

    return 0;
}
