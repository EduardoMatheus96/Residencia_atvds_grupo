/*
Exercício 5:
    Faça uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
    de um vetor de números inteiros. Depois faça o programa principal para testar a sua
    função.
    Por exemplo:
        Sendo o vetor = {1,2,3,4,5,6} e qtde = 6, ao usar
        insere_meio(vetor, qtde, 100),
        será retornado o novo valor de qtde, que passou a ser 7, e o vetor, ao término
        da função, passará a ficar da seguinte forma: vetor= {1,2,3,100,4,5,6}.
        Protótipo da função: int insere_meio( int *vetor, int qtde, int elemento);


*/

#include <iostream>
#include <vector>

using namespace std;

int insere_meio(int *vetor, int qtde, int elemento){
    int meio = qtde/2;

    for (int i = qtde - 1; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }
    
    vetor[meio] = elemento;

    return qtde+1;

}


int main(void){
    
    int vetor[] = {1,2,3,4,5,6};
    int qtde = sizeof(vetor)/sizeof(vetor[0]);
    qtde = insere_meio(vetor, qtde, 100);

    cout << qtde << endl;

    return 0;
}