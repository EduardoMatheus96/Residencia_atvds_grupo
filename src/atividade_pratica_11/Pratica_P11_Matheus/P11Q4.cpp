#include <iostream>

using namespace std;

void calcula (int &x, int &y){
    int soma = x+y;
    int sub = x-y;
    x = soma;
    y = sub;
}
int main(void){
    int x, y;
    cout << "Digite o valor de X: " << endl;
    cin >> x;
    cout << "Digite o valor de Y: " << endl;
    cin >> y;
    calcula(x,y);
    cout << "O valor de X: " << x << endl;  
    cout << "O valor de Y: " << y << endl; 
    return 0;
}