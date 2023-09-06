#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    string data;
    string dia;
    string mes;
    string ano;
    string barra = "/";
    bool isDataValid = 1;

    while (isDataValid)
    {
        fflush(stdin);
        cout << "Informe uma Data valida(dd/mm/aaaa): ";
        cin >> data;
        cout << endl;
        dia = data.at(0);
        dia = dia + data.at(1);
        mes = data.at(3);
        mes = mes + data.at(4);
        ano = data.at(6);
        ano += data.at(7);
        ano += data.at(8);
        ano += data.at(9);
        if (data.size() != 10)
        {
            cout << "A data nao é valida !!!" << endl;
            isDataValid = 1;
        }
        else if (data.at(2) != barra.at(0) || data.at(5) != barra.at(0))
        {
            cout << "A data nao é valida !!!" << endl;
        }
        else if (stoi(dia) > 31)
        {
            cout << "A data não é válida pois o dia esta errado !!" << endl;
        }
        else if (stoi(mes) > 12)
        {
            cout << "A data não é válida pois o mês esta errado !!" << endl;
        }
        else
        {
            isDataValid = 0;
        }
    }
    map<string, string> mesExtenso;
    mesExtenso["01"] = "janeiro";
    mesExtenso["02"] = "fevereiro";
    mesExtenso["03"] = "março";
    mesExtenso["04"] = "abril";
    mesExtenso["05"] = "maio";
    mesExtenso["06"] = "junho";
    mesExtenso["07"] = "julho";
    mesExtenso["08"] = "agosto";
    mesExtenso["09"] = "outubro";
    mesExtenso["10"] = "setembro";
    mesExtenso["11"] = "novembro";
    mesExtenso["12"] = "dezembro";

    // map<string, string>::iterator it;
    cout 
    << dia
    << " de "
    << mesExtenso[mes] 
    << " de "
    << ano
    << endl;
    
    return 0;
}