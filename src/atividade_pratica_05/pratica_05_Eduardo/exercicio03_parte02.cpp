#include <iostream>

int main() {
    int numero;
    short int valorCurto;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    valorCurto = static_cast<short int>(numero);

    std::cout << "O valor fornecido é: " << numero << " e "
              << ((valorCurto == numero) ? "este valor pertence ao intervalo dos short int." : "é maior que um short int.") << std::endl;

    return 0;
}
