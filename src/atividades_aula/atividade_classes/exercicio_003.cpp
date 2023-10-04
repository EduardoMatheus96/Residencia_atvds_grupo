#include <iostream>
#include <string>

using namespace std;

// Classe base ItemBiblioteca
class ItemBiblioteca
{
public:
    // Construtor da classe ItemBiblioteca
    ItemBiblioteca(string titulo, string autor, int numCopias) : titulo(titulo), autor(autor), numCopias(numCopias) {}

    // Método para exibir informações sobre o item
    void mostrarInfo()
    {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Numero de copias disponiveis: " << numCopias << endl;
    }

private:
    string titulo;
    string autor;
    int numCopias;
};

// Subclasse Livro que herda de ItemBiblioteca
class Livro : public ItemBiblioteca
{
public:
    // Construtor da classe Livro
    Livro(string titulo, string autor, int numCopias, int numPaginas) : ItemBiblioteca(titulo, autor, numCopias), numPaginas(numPaginas) {}

    // Método para exibir informações específicas de livros
    void mostrarInfo()
    {
        ItemBiblioteca::mostrarInfo(); // Chama o método da classe base
        cout << "Numero de paginas: " << numPaginas << endl;
    }

private:
    int numPaginas;
};

// Subclasse DVD que herda de ItemBiblioteca
class DVD : public ItemBiblioteca
{
public:
    // Construtor da classe DVD
    DVD(string titulo, string autor, int numCopias, int duracao) : ItemBiblioteca(titulo, autor, numCopias), duracao(duracao) {}

    // Método para exibir informações específicas de DVDs
    void mostrarInfo()
    {
        ItemBiblioteca::mostrarInfo(); // Chama o método da classe base
        cout << "Duracao (em minutos): " << duracao << endl;
    }

private:
    int duracao;
};

int main()
{
    // Cria objetos das subclasses Livro e DVD
    Livro livro("Dom Quixote", "Miguel de Cervantes", 5, 800);
    DVD dvd("Star Wars", "George Lucas", 3, 120);

    // Exibe informações sobre os itens da biblioteca
    cout << "Informacoes sobre o livro:" << endl;
    livro.mostrarInfo();

    cout << "\nInformacoes sobre o DVD:" << endl;
    dvd.mostrarInfo();

    return 0;
}
