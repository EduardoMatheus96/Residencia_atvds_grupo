/*a. Declare três variáveis de tipo double, vamos chamar de x, y e z mas você pode escolher outro identificador
se achar mais apropriado;*/
/*b. Peça ao usuário para digitar dois numeros de ponto flutuante, obtenha-os da entrada padrão, usando cin, e 
atribua os valores digitados às variáveis x e y respectivamente;*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    double x, y, z; 
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

/*c. Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva f(x) = 5x + 2
se encontra (esquerda, direita ou na curva). Imprima o resultado na tela;*/

    double fx = 5 * x + 2; 
    if (y > fx) {
        cout << "O ponto (" << x << ", " << y << ") esta acima da reta." << endl;
    } else if (y < fx) {
        cout << "O ponto (" << x << ", " << y << ") esta abaixo da reta." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") esta na reta." << endl;
    }

/*d. Atividade avançada: Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de 
coordenadas; (distância euclidiana se calcula como 𝑥2 + 𝑦2, (pesquise na biblioteca padrão como determinar a raiz 
quadrada de um numero)*/

    z = sqrt(x * x + y * y);  
    cout << "A distancia euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas eh: " << z << endl;

/*e. Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica;
Residência em Tecnologia da Informação e Comunicação*/

    z = x * y; 
    cout << "O valor de Z em notacao cientifica e: " << scientific << double(z);

    return 0;
}