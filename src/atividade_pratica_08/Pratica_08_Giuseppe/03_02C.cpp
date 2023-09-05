#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    int numCaracteres;
    cout << "Quantos caracteres aleatórios você deseja gerar em cada string? ";
    cin >> numCaracteres;

    if (numCaracteres <= 0) {
        cout << "Número inválido de caracteres. Saindo." << endl;
        return 1; 
    }

    vector<char> caracteresString1;
    vector<char> caracteresString2;

    for (int i = 0; i < numCaracteres; ++i) {
        char caractereAleatorio1 = 'a' + rand() % ('z' - 'a' + 1);
        char caractereAleatorio2 = 'a' + rand() % ('z' - 'a' + 1);


        caracteresString1.push_back(caractereAleatorio1);
        caracteresString2.push_back(caractereAleatorio2);
    }

    // Ordene os vetores de caracteres em ordem alfabética
    sort(caracteresString1.begin(), caracteresString1.end());
    sort(caracteresString2.begin(), caracteresString2.end());

    string string1(caracteresString1.begin(), caracteresString1.end());
    string string2(caracteresString2.begin(), caracteresString2.end());
    string1[0] = toupper(string1[0]);
    string2[0] = toupper(string2[0]);
    cout << "String 1 (ordenada): " << string1 << endl;
    cout << "String 2 (ordenada): " << string2 << endl;

    return 0; 
}
