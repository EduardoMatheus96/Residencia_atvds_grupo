#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year)
{
    if (month < 1 || month > 12)
        return false;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        daysInMonth[2] = 29;

    return (day >= 1 && day <= daysInMonth[month]);
}

void printDate(int day, int month, int year)
{
    const char *months[] = {"", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    cout << day << " de " << months[month] << " de " << year << endl;
}

void exericio03Parte01()
{
    string inputDate;
    cout << "Digite a data (no formato dd/mm/aaaa): ";
    cin >> inputDate;

    int day, month, year;
    char separator;
    stringstream ss(inputDate);
    ss >> day >> separator >> month >> separator >> year;

    if (isValidDate(day, month, year))
    {
        cout << "Data válida." << endl;
        printDate(day, month, year);
    }
    else
    {
        cout << "Data inválida." << endl;
    }
}