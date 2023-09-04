#include <iostream>

using namespace std;

int main(void){
    int a, b, c;
    cout << "Insira um numero inteiro: " << endl;
    cin >> a;
    cout << "Insira outro numero inteiro: " << endl;
    cin >> b;
    c = 4*a + b/3 -5 ; // c = 4 * (a+b) / (3-5) nessa equacao a soma e subtracao ocorre primeiro, ja que esta dentro dos parenteses.
    // c = 4*a + b / (3-5) Letra F
    cout << "O Valor de c e: " << c << endl;
    c = a*a + 2*b + c;
    cout << "o valor da equacao e: " << c << endl;
    return 0;


}