#include <stdio.h>
#include <string>

int isValidDate(int dia, int mes, int ano) {
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1) {
        return 0; 
    }

    int diasnomes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        diasnomes[2] = 29; 
    }
    return dia <= diasnomes[mes];
}

void printmes(int mes) {
    char *meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    printf("%s", meses[mes - 1]);
}

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dia/mes/ano: ");

    scanf("%d/%d/%d", &dia, &mes, &ano);   
    
    if (isValidDate(dia, mes, ano)) {
        printf("%d de ", dia);
        printmes(mes);
        printf(" de %d\n", ano);
        printf("Data valida.\n");
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}