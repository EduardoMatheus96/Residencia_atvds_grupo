/*
Exercício 8: Instalando Extensões
    Faça uma função chamada conta_primos que receba um vetor de números inteiros e
    retorne a quantidade de números do vetor que são primos.
    Lembrando que um número primo é aquele divisível apenas por 1 e por ele mesmo.
    Protótipo da função:
    int conta_primos (int *vet, int qtde);

*/

#include <iostream>

bool is_primo(int num) {
  if (num < 2) {
    return false;
  }
  
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int conta_primos(int *vet, int qtde) {
  int count = 0;
  
  for (int i = 0; i < qtde; i++) {
    if (is_primo(vet[i])) {
      count++;
    }
  }

  return count;
}

int main() {
  int vet[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  int qtde = sizeof(vet) / sizeof(vet[0]);

  int num_primos = conta_primos(vet, qtde);

  std::cout << "A quantidade de numeros primos no vetor e: " << num_primos << std::endl;

  return 0;
}
