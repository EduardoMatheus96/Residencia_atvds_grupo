#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    const int numStrings = 10;
    vector<string> listaDeStrings;

    for (int j = 0; j < numStrings; ++j)
    {
        vector<char> caracteresString;

        for (int i = 0; i < numStrings; ++i)
        {
            char caractereAleatorio = 'a' + rand() % ('z' - 'a' + 1);
            caracteresString.push_back(caractereAleatorio);
        }

        sort(caracteresString.begin(), caracteresString.end());

        string novaString(caracteresString.begin(), caracteresString.end());

        novaString[0] = toupper(novaString[0]);

        listaDeStrings.push_back(novaString);
    }

    for (int k = 0; k < numStrings; ++k)
    {
        cout << "String " << k + 1 << " (ordenada): " << listaDeStrings[k] << endl;
    }

    return 0;
}