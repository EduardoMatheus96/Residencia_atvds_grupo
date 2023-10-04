#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estado
{
public:
    string nome;
    string sigla;
};

class Cidade
{
public:
    string nome;
    Estado *estado;
};

int main()
{
    vector<Estado> estados;
    vector<Cidade> cidades;

    while (true)
    {
        Estado estado;
        char res;
        cout << "Digite o nome do estado" << endl;
        while (getline(cin, estado.nome))
        {
            if (estado.nome != "")
            {
                break;
            }
        }
        cout << "Digite a sigla:" << endl;
        while (getline(cin, estado.sigla))
        {
            if (estado.sigla != "")
            {
                break;
            }
        }
        estados.push_back(estado);
        cout << "Deseja adicionar mais um estado: (S) (N)" << endl;
        cin >> res;

        if (res != 's')
        {
            break;
        }
    }

    while (true)
    {
        Cidade cidade;
        char res;
        string sigla;
        cout << "Digite o nome da cidade" << endl;
        while (getline(cin, cidade.nome))
        {
            if (cidade.nome != "")
            {
                break;
            }
        }
        cout << "Digite um dos estados abaixo:" << endl;
        for (Estado estado : estados)
        {
            cout << estado.sigla << " ";
        }
        cout << endl;
        while (getline(cin, sigla))
        {
            if (sigla != "")
            {
                break;
            }
        }

        for (Estado estado : estados)
        {
            if (estado.sigla == sigla)
            {
                cidade.estado = &estado;
            }
        }

        cidades.push_back(cidade);

        cout << "Deseja adicionar mais uma cidade: (S) (N)" << endl;
        cin >> res;

        if (res != 's')
        {
            break;
        }
    }

    for (Cidade cidade : cidades)
    {
        cout << "A cidade " << cidade.nome << " tem como estado " << cidade.estado->nome << " "
             << "(" << cidade.estado->sigla << ")" << endl;
    }

    return 0;
}