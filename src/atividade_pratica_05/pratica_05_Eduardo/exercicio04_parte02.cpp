#include <iostream>
#include <cmath>

int main() {
    //Letra a
    double a, b, c;
    double x;

    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    std::cout << "Digite o valor de c: ";
    std::cin >> c;

    double discriminante = b * b - 4 * a * c;
    int numRaizes = (discriminante > 0) ? 2 : ((discriminante == 0) ? 1 : 0);

    std::cout << "Número de raízes reais: " << numRaizes << std::endl;

    if (numRaizes == 1) {
        std::cout << "Raiz 1: " << (-b / (2 * a)) << std::endl;
    } else if (numRaizes == 2) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Raiz 1: " << raiz1 << std::endl;
        std::cout << "Raiz 2: " << raiz2 << std::endl;
    }

    //Letra b
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    double valor_p_x = a * x * x + b * x + c;
    std::cout << "Valor de p(x) para x = " << x << ": " << valor_p_x << std::endl;

    return 0;
}
