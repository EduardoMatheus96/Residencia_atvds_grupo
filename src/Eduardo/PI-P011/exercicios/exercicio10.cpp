#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> *encontra_letras(const string &texto, char letra, int &tamanho)
{
    vector<int> *indices = new vector<int>;

    for (size_t i = 0; i < texto.length(); ++i)
    {
        if (texto[i] == letra)
        {
            indices->push_back(i);
        }
    }

    tamanho = indices->size();
    return indices;
}

void exercicio10()
{
    string texto = "exemplo de texto com algumas letras";
    char letra;

    cout << "Informa o caracter a ser encontrado: ";
    cin >> letra;
    cout << endl;

    cout << "Texto: " << texto << endl;
    cout << "Letra a ser encontrada: " << letra << endl;

    int tamanho;
    vector<int> *indices = encontra_letras(texto, letra, tamanho);

    if (tamanho > 0)
    {
        cout << "A letra '" << letra << "' foi encontrada nas posições:";
        for (int i = 0; i < tamanho; ++i)
        {
            cout << " " << (*indices)[i];
        }
        cout << endl;
    }
    else
    {
        cout << "A letra '" << letra << "' não foi encontrada." << endl;
    }

    // Liberar a memória alocada para o vetor de índices
    delete indices;
}