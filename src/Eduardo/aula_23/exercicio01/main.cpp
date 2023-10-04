#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
private:
    string nome;
    unsigned int idade;
public:
    Animal(string nome, unsigned int idade){
        this->nome = nome;
        this->idade = idade;
    }
    string getNome() const{
        return this->nome;
    }
    unsigned int getIdade() const{
        return this->idade;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(unsigned int idade){
        this->idade = idade;
    }
    virtual string fazerSom() {};
};

class Cachorro : public Animal
{
private:
    
public:
    Cachorro(string nome, unsigned int idade):Animal(nome,idade) {}
    string fazerSom() override{
        return "AUAUAU";
    }
};

class Cachorrinho: public Animal
{
private:
    /* data */
public:
    Cachorrinho(string nome, unsigned int idade):Animal(nome, idade) {
    }
    ~Cachorrinho() {}
    // void fazerSom() override {
    //     Cachorro::fazerSom();
    //     cout << "(baixinho)..." << endl;
    // }
};

int main(void)
{
    Animal animal("gato", 2);
    cout << animal.getNome() << " de idade: " << animal.getIdade() << endl;
    Cachorro cachorro("Lippy", 14);
    Cachorrinho cachorrinho("tst", 3);
    cout << "Nome do cachorro: "
        << cachorro.getNome() 
        << " de idade: "
        << cachorro.getIdade()
        << ", Faz: " 
        << cachorro.fazerSom() 
        << endl;
    cout << cachorrinho.fazerSom() << endl;
    return 0;
}
