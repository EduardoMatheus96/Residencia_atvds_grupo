#include <iostream>

using namespace std;

void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (a > d) {
        swap(a, d);
    }
    if (b > c) {
        swap(b, c);
    }
    if (b > d) {
        swap(b, d);
    }
    if (c > d) {
        swap(c, d);
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números float separados por espaços: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}


/*#include <iostream>

using namespace std;

void maxmin(float &num1, float &num2, float &num3, float &num4) {

    float original = 0;

    if (num1 > num2) {
        original = num1;
        num1 = num2;
        num2 = original;
    }
    if (num1 > num3) {
        original = num1;
        num1 = num3;
        num3 = original;
    }
    if (num1 > num4) {
        original = num1;
        num1 = num4;
        num4 = original;
    }
    
    if (num2 > num3) {
        original = num2;
        num2 = num3;
        num3 = original;
    }
    if (num2 > num4) {
        original = num2;
        num2 = num4;
        num4 = original;
    }
    if (num3 > num4) {
        original = num3;
        num3 = num4;
        num4 = original;
    }
}

int main(void){

    float valor1=55.4, valor2=120.54, valor3=6.5, valor4=77.6;
    maxmin(valor1, valor2, valor3, valor4);
    cout << " 1:  " << valor1 << " 2: " << valor2 << " 3: " << valor3 <<" 4: " << valor4 << endl;
}
*/