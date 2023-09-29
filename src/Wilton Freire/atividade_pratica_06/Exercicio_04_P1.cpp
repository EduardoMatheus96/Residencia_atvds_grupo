#include <cstdio>

double x, y, z;

int main(void) 
{
    printf("Entre com um valor de ponto flutuante para x: ");
    scanf("%lf", &x);
    printf("Entre com um valor de ponto flutuante para y: ");
    scanf("%lf", &y);

    z = x + y;
    printf("O valor de z eh: %lf\n", z);

    z = (x + y) / 2;
    printf("O valor de z para a media eh: %lf\n", z);

    z = x * y;
    printf("O valor de z para o produto eh: %lf\n", z);

    if (x > y) {
        z = x;
        printf("O valor de z para o maior entre x e y eh: %lf\n", z);
    } else {
        z = y;
        printf("O valor de z para o maior entre x e y eh: %lf\n", z);
    }

    if (x > y) {
        z = y;
        printf("O valor de z para o menor entre x e y eh: %lf\n", z);
    } else {
        z = x;
        printf("O valor de z para o menor entre x e y eh: %lf\n", z);
    }

    return 0;
}