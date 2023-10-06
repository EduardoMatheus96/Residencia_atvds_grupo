#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Usuario{
    private:
    string cpf;
    string nome;
    string endereco;
    string telefone;
    
    public:
    Usuario(string cpf, string nome, string endereco, string telefone);

    void setCPF(string cpf){
        this->cpf = cpf;
    }

    void setNome(string nome){
        this->nome = nome;
    }
    void setEndereco(string endereco){
        this->endereco = endereco;
    }
    void setTelefeone(string telefone){
        this->telefone = telefone;
    }

    string getCPF(){
        return cpf;
    }
    string getNome(){
        return nome;
    }
    string getEndereco(){
        return endereco;
    }
    string getTelefone(){
        return telefone;
    }
};