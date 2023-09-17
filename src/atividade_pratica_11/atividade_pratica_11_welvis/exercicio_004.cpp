/*
Exercício 4:
    Escreva uma função calcula que:
        a. receba como parâmetros duas variáveis inteiras, X e Y;
        b. retorne em X a soma de X e Y;
        c. retorne em Y a subtração de X e Y.

*/

#include <iostream>
#include <vector>

using namespace std;

void somaSub(int &x, int &y){
    x = x+y;
    y = x-y;
}


int main(void){
    
    int x = 10;
    int y = 5;
    somaSub(x, y);

    cout << "x: " << x << endl << "y: " << y << endl;

    return 0;
}