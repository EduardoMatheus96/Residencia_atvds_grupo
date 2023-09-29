#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

class BancoDeDados
{
    
public:
    

    static void salvarDados(vector<string> dados)
    {
        ofstream arquivo_saida;
        arquivo_saida.open("exemplo.txt", ios_base::in);
        if(arquivo_saida.is_open()){
            string linha;
            for(string linha : dados){
                arquivo_saida << linha << endl;
                // getline(arquivo_saida, linha);
                cout << linha << endl;
            }
            arquivo_saida.close();
            
        }else{
            cout << "Eroo ao escrever no arquivo" << endl;
        }
        
    }

    static vector<string> recuperarDados()
    {
        vector<string> dadosOut;
        ifstream arquivo_entrada("exemplo.txt");
        if(arquivo_entrada.is_open()){
            string linha;
            while(!arquivo_entrada.eof()){
                getline(arquivo_entrada, linha);
                dadosOut.push_back(linha);
                // cout << linha << endl;
            }
            arquivo_entrada.close();
        }else{
            cout << "Erro ao abrir o arquivo de leitura" << endl;
        }

        return dadosOut;
    }
    
};


int main()
{
    vector<string> dados;
    vector<string> dadosRecuperados;
    dados.push_back("Linha 1");
    dados.push_back("Linha 2");
    dados.push_back("Linha 3");
    BancoDeDados::salvarDados(dados);
    dadosRecuperados = BancoDeDados::recuperarDados();

    for(string linha : dadosRecuperados){
        cout << linha << endl;
    }
    
    return 0;
}
