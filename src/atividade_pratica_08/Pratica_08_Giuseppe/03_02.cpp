#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Inicialize a semente do gerador de números aleatórios com base no tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    int numCaracteres;
    cout << "Quantos caracteres aleatórios você deseja gerar em cada string? ";
    cin >> numCaracteres;

    if (numCaracteres <= 0) {
        cout << "Número inválido de caracteres. Saindo." << endl;
        return 1; // Saia do programa com erro
    }

    string string1;
    string string2;

    for (int i = 0; i < numCaracteres; ++i) {
        char caractereAleatorio1 = 'a' + rand() % ('z' - 'a' + 1);
        char caractereAleatorio2 = 'a' + rand() % ('z' - 'a' + 1);
        
        
        if (i == 0) {
            caractereAleatorio1 = toupper(caractereAleatorio1);
            caractereAleatorio2 = toupper(caractereAleatorio2);
        }

        string1 += caractereAleatorio1;
        string2 += caractereAleatorio2;
    }

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0; // Saia do programa com sucesso
}
