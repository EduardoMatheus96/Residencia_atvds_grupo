/*
Exercício 6:
    Faça uma função que receba dois vetores de números inteiros e os seus
    respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
    vetores intercalados. Depois faça o programa principal para testar a sua função.
    Protótipo da função: int* intercala(int *vet1, int tam1, int *vet2, int tam2);

*/

#include <iostream>
using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamanho_resultante = tam1 + tam2;
    int* resultado = new int[tamanho_resultante];

    int indice_vet1 = 0, indice_vet2 = 0, indice_resultado = 0;

    while (indice_vet1 < tam1 && indice_vet2 < tam2) {
        resultado[indice_resultado++] = vet1[indice_vet1++];
        resultado[indice_resultado++] = vet2[indice_vet2++];
    }

    while (indice_vet1 < tam1) {
        resultado[indice_resultado++] = vet1[indice_vet1++];
    }

    while (indice_vet2 < tam2) {
        resultado[indice_resultado++] = vet2[indice_vet2++];
    }

    return resultado;
}

int main() {
    int vet1[] = {1, 3, 5};
    int tam1 = sizeof(vet1) / sizeof(vet1[0]);
    
    int vet2[] = {2, 4, 6};
    int tam2 = sizeof(vet2) / sizeof(vet2[0]);

    int* resultado = intercala(vet1, tam1, vet2, tam2);

    int tamanho_resultado = tam1 + tam2;
    for (int i = 0; i < tamanho_resultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;
    return 0;
}
