/*a. leia da entrada padrão os valores reais dos coeficientes a, b e c, de um polinômio de segundo grau do tipo 
𝑝(𝑥) = 𝑎𝑥2 + 𝑏𝑥 + 𝑐, e imprima:
i. Se o polinômio tem uma, duas ou nenhuma raiz real (lembredas suas a ulas de segundo grau qual a condição que
define qual o numero de raízes de um polinômio);*/
/*ii. Se tiver raízes (uma ou duas) imprima o valor das mesmas. No exercício anterior você deve ter descoberto
como calcular a raiz quadrada de um numero;*/
/*b. Leia da entrada padrão um valor para x e imprima o valor de p(x);*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double a, b, c;

    cout << "Digite um valor real para a: ";
    cin >> a;
    cout << "Digite um valor real para b: ";
    cin >> b;
    cout << "Digite um valor real para c: ";
    cin >> c;

    double px = b * b - 4 * a * c;

    if (px > 0) {
        double raiz1 = (-b + sqrt(px)) / (2 * a);
        double raiz2 = (-b - sqrt(px)) / (2 * a);
        cout << "O polinomio tem duas raizes reais e distintas:" << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (px == 0) {
        double raiz = -b / (2 * a);
        cout << "O polinomio tem uma raiz real (raiz dupla):" << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinomio nao possui raizes reais." << endl;
    }

    return 0;
}