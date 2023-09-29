#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int tempX = X;  
    X = X + Y;      
    Y = tempX - Y;  
}


void exercicio04(){
    int X = 10, Y = 5;

    cout << "Antes da função calcula:" << endl;
    cout << "X: " << X << ", Y: " << Y << endl;

    // Chama a função para calcular X e Y
    calcula(X, Y);

    cout << "Após a função calcula:" << endl;
    cout << "X: " << X << ", Y: " << Y << endl;
}