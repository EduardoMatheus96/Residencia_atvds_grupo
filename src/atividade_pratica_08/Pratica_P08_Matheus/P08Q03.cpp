#include <stdio.h>

int isValidDate(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1) {
        return 0; 
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[2] = 29; 
    }
    return day <= daysInMonth[month];
}

void printMonth(int month) {
    char *months[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    printf("%s", months[month - 1]);
}

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (isValidDate(dia, mes, ano)) {
        printf("%d de ", dia);
        printMonth(mes);
        printf(" de %d\n", ano);
        printf("Data válida.\n");
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
