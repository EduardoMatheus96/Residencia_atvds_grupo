#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {

    char data[20], tmp[5];
    int dia, mes, ano;

    cout << "Entre com uma data no formato dd/mm/aaaa: " << endl;
    cin.getline(data,20);

    int i = 0, j = 0;
    while (data[i] != '/')
    {
        tmp[i] = data[i];
        i++;
    }

    tmp[i++] = '\0';
    dia = stoi(tmp);

    while (data[i] != '/')
    {
        tmp[j] = data[i];
        i++;
        j++;
    }

    tmp[i++] = '\0';
    mes = stoi(tmp);
    j=0;

    while (data[i] != '\0')
    {
        tmp[j] = data [i];
        i++;
        j++;
    }

    ano = stoi(tmp);
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        cout << "A data não atende os requisitos!!" << endl << "Reabra o programa" << endl;
        return 1;    }
    else
    {
        cout << "A data digitada é valida" << endl;
    }

    string meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    string mesPrint = meses[mes-1];


    cout 
    << "O dia é: " << dia << endl
    << "O mês é: " << mesPrint << endl
    << "O ano é: " << ano << endl;
    return 0;
}



/*#include <stdio.h>

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
*/