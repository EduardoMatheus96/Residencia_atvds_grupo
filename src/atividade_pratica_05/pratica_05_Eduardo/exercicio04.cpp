#include <iostream>
#include <cmath>
#include <iomanip>

int main(void){
    //Letra a
    double x, y, z;
    int verificaLado;
    
    //Letra b
    std::cout << "insira um numero real: ";
    std::cin >> x;
    std::cout << "insira outro numero real: ";
    std::cin >> y;

    //Letra c
    z = 5 * x + 2;

    verificaLado = y < z ? 0 : ((y > z) ? 1 : 2);

    verificaLado == 0 
    ?
    std::cout 
    << "O ponto (" 
    << x 
    << ", " 
    << y 
    << ") está " 
    << "acima" 
    << " da curva." << std::endl
    : 
    verificaLado == 1
    ?
    std::cout 
    << "O ponto (" 
    << x 
    << ", " 
    << y 
    << ") está " 
    << "abaixo" 
    << " da curva." << std::endl
    :
    std::cout 
    << "O ponto (" 
    << x 
    << ", " 
    << y 
    << ") está " 
    << "sobre" 
    << " da curva." << std::endl;

    //Letra d
    z = sqrt(x * x + y * y);

    std::cout 
    << "A distância euclidiana do ponto (" 
    << x 
    << ", " 
    << y 
    << ") ao centro de coordenadas é: " 
    << z 
    << std::endl;

    //Letra e
    z = x * y;

    std::cout 
    << "O produto entre x e y é: " 
    << std::fixed
    << std::setprecision(2)
    << std::scientific 
    << z 
    << std::endl;

    return 0;
}