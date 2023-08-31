/*
Exercício 4: Operações com valores de ponto flutuante

    ● Escreva um programa que:
        a. Declare três variáveis de tipo double, vamos chamar de x, y e z
        mas você pode escolher outro identificador se achar mais apropriado;

        b. Peça ao usuário para digitar dois números de ponto flutuante,
        obtenha-os da entrada padrão, usando cin, e atribua os valores
        digitados às variáveis x e y respectivamente;

        c. Considerando que x e y são coordenadas num plano cartesiano,
        identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda,
        direita ou na curva). Imprima o resultado na tela;

*/

#include <iostream>
using namespace std;


int main() {
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    // Calcula o valor da função f(x) = 5x + 2
    double f_x = 5 * x + 2;

    if (y > f_x) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y < f_x) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x) = 5x + 2." << endl;
    }

    return 0;
}



/*
    d. Atividade avançada: Atribua à variável z o valor da distância
    euclidiana do ponto (x, y) ao centro de coordenadas; (distância
    euclidiana se calcula como raiz(x^2+y^2), (pesquise na biblioteca padrão 𝑥2+𝑦2
    como determinar a raiz quadrada de um número);
        
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    // Calcula o valor da função f(x) = 5x + 2
    double f_x = 5 * x + 2;

    if (y > f_x) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y < f_x) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x) = 5x + 2." << endl;
    }

    // Calcula a distância euclidiana ao centro de coordenadas
    z = sqrt(x*x + y*y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    return 0;
}



/*
    e. Atribua à variável z o produto entre as variáveis x e y, imprima o
    resultado na tela em notação científica; 
            
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    // Calcula o valor da função f(x) = 5x + 2
    double f_x = 5 * x + 2;

    if (y > f_x) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y < f_x) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x) = 5x + 2." << endl;
    }

    // Calcula a distância euclidiana ao centro de coordenadas
    z = sqrt(x*x + y*y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    // Calcula o produto entre x e y e imprime em notação científica
    z = x * y;
    cout << "O produto de x e y em notação científica é: " << scientific << z << endl;

    return 0;
}


/*
● Escreva um programa que:

    a. leia da entrada padrão os valores reais dos coeficientes a, b e c, de um
    polinômio de segundo grau do tipo 𝑝(𝑥)=𝑎𝑥2+𝑏𝑥+𝑐, e imprima:

        i. Se o polinômio tem uma, duas ou nenhuma raiz real (lembre
        das suas aulas de segundo grau qual a condição que define
        qual o número de raízes de um polinômio);
        
        ii. Se tiver raízes (uma ou duas) imprima o valor das mesmas. No
        exercício anterior você deve ter descoberto como calcular a
        raiz quadrada de um número;

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Digite os coeficientes a, b e c: ";
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais:\n";
        cout << "Raiz 1: " << root1 << "\n";
        cout << "Raiz 2: " << root2 << "\n";
    } else if (delta == 0) {
        double root = -b / (2 * a);
        cout << "O polinômio tem uma raiz real:\n";
        cout << "Raiz: " << root << "\n";
    } else {
        cout << "O polinômio não possui raízes reais.\n";
    }

    return 0;
}


/*
    b. Leia da entrada padrão um valor para x e imprima o valor de p(x);

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x;
    cout << "Digite os coeficientes a, b e c: ";
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "O polinômio tem duas raízes reais:\n";
        cout << "Raiz 1: " << root1 << "\n";
        cout << "Raiz 2: " << root2 << "\n";
    } else if (delta == 0) {
        double root = -b / (2 * a);
        cout << "O polinômio tem uma raiz real:\n";
        cout << "Raiz: " << root << "\n";
    } else {
        cout << "O polinômio não possui raízes reais.\n";
    }

    cout << "Digite o valor de x: ";
    cin >> x;

    double px = a * x * x + b * x + c;
    cout << "O valor de p(x) é: " << px << "\n";

    return 0;
}
