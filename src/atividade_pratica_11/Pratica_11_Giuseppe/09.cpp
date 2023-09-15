#include <iostream>

using namespace std;

void calc_serie(float N){

    float somatorio = 0;
 
    for (float i = 1; i <= N; i++)
    {
        somatorio += i/(N-(i-1));
    }
    cout << somatorio;
}

int main(void){

    calc_serie(2);
    return 0;

}