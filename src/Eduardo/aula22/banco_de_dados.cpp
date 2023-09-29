#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Banco_de_dados
{
public:
    static void salvarDados(vector<string> dados)
    {
        ofstream arquivo_saida;

        arquivo_saida.open("./arquivo.txt");

        if (arquivo_saida.is_open())
        {
            for (string dado : dados)
            {
                arquivo_saida << dado << endl;
            }
            arquivo_saida.close();
        } else {
        cout << "Erro ao abrir o arquivo." << endl;
        }
    }

    static vector<string> recuperarDados()
    {
        ifstream arquivo_entrada("./arquivo.txt");
        vector<string> texto;
        if (arquivo_entrada.is_open())
        {
            string linha;
            while (!arquivo_entrada.eof())
            {
                getline(arquivo_entrada, linha);
                // cout << linha << endl;
                texto.push_back(linha);
            }
            arquivo_entrada.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo para leitura." << endl;
        }
        return texto;
    }
};


int main()
{
    // Banco_de_dados db;
    vector<string> dados;
    vector<string> dadosRecuperados;
    dados.push_back("Exemplo 01");
    dados.push_back("Exemplo 02");
    dados.push_back("Exemplo 03");
    Banco_de_dados::salvarDados(dados);
    dadosRecuperados = Banco_de_dados::recuperarDados();

    for (string dado : dadosRecuperados)
    {
        cout << dado << endl;
    }
    return 0;
}
