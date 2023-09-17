/*
Exercício 7:
    Faça uma função que receba um vetor de números inteiros por parâmetro, a
    quantidade de elementos do vetor, e um multiplicador e multiplique cada elemento
    do vetor pelo multiplicador.
    Protótipo da função: void multiplica_por_n(int *vet, int qtde, int n);

*/

#include<iostream>
using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
  for (int i = 0; i < qtde; i++) {
    vet[i] *= n;
  }
}

int main() {
  int vetor[5] = {1, 2, 3, 4, 5};
  int quantidade = 5;
  int multiplicador = 2;

  cout << "Vetor original: ";
  for (int i = 0; i < quantidade; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  multiplica_por_n(vetor, quantidade, multiplicador);

  cout << "Vetor multiplicado por " << multiplicador << ": ";
  for (int i = 0; i < quantidade; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  return 0;
}
