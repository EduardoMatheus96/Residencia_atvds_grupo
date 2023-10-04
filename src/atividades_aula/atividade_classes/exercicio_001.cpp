#include <iostream>
#include <string>

using namespace std;

// Classe base Animal
class Animal
{
public:
    // Construtor da classe Animal
    Animal(string nome, int idade) : nome(nome), idade(idade) {}

    // Método fazerSom() da classe Animal
    virtual void fazerSom()
    {
        cout << "O animal faz um som generico." << endl;
    }

protected:
    string nome;
    int idade;
};

// Subclasse Cachorro que herda de Animal
class Cachorro : public Animal
{
public:
    // Construtor da classe Cachorro
    Cachorro(string nome, int idade) : Animal(nome, idade) {}

    // Sobrescreve o método fazerSom() para emitir o som de um cachorro
    void fazerSom() override
    {
        cout << "Au Au!" << endl;
    }
};

int main()
{
    // Cria um objeto da classe Animal
    Animal animal("Bicho", 5);

    // Cria um objeto da classe Cachorro
    Cachorro cachorro("Rex", 3);

    // Chama o método fazerSom() de cada objeto
    cout << "Animal fazendo som: ";
    animal.fazerSom();

    cout << "Cachorro fazendo som: ";
    cachorro.fazerSom();

    return 0;
}
