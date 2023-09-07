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