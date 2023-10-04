#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estado
{
private:
    string nome, sigla;
public:
    Estado(){}
    Estado(string nome, string sigla) {
        this->nome = nome;
        this->sigla = sigla;
    }
    ~Estado() {}
    string getNome(){
        return this->nome;
    }
    string getSigla(){
        return this->sigla;
    }
    void setNome(string nome){
        this->nome = nome;
    }

    void setSigla(string sigla){
        this->sigla = sigla;
    }
};

class Cidade
{
private:
    string nome;
    Estado *estado;
    
public:
    Cidade(Estado &estado) {
        this->estado = &estado;
    }
    Cidade(string nome, Estado estado)  {
        this->nome = nome;
        this->estado = &estado;
    }
    ~Cidade() {}

    string getNome(){
        return this->nome;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    string getEstadoNome(){
        return this->estado->getNome();
    }

    string getEstadoSigla(){
        return this->estado->getSigla();
    }
    void setEstado(string nome, string sigla){
        this->estado->setNome(nome);
        this->estado->setSigla(sigla);
    }
};

int main(void)
{
    vector<Estado> estados;
    string nomeEstado, sigla, nomeCidade;
    int escolha;
    // do
    // {
    //     Estado estado;
    //     cout << "Informe o nome estado."<< endl;
    //     cin.ignore();
    //     getline(cin,nome);
    //     cout << "Informa a sigla do estado" << endl;
    //     cin >> sigla;
    //     estado.setNome(nome);
    //     estado.setSigla(sigla);
    //     estados.push_back(estado);
    //     cout << "digite 0 se deseja parar de inserir estados!!" << endl;
    //     cin >> escolha; 
    // } while (escolha);
    
    vector<Cidade> cidades;
    do
    {
        Estado estado;
        Cidade cidade(estado);
        cout << "Informe o nome da cidade."<< endl;
        while (getline(cin, nomeCidade))
        {
            if (nomeCidade != "")
            {
                break;
            }
            
        }
        cout << "Informa o estado a qual a cidade pertence" << endl;
        while (getline(cin, nomeEstado))
        {
            if (nomeEstado != "")
            {
                break;
            }
            
        }
        cout << "Informa a sigla do estado" << endl;
        cin >> sigla;
        cidade.setNome(nomeCidade);
        cidade.setEstado(nomeEstado, sigla);
        cidades.push_back(cidade);
        cout << "digite 0 se deseja parar de inserir estados!!" << endl;
        cin >> escolha; 
    } while (escolha);
    

    return 0;
}
