#include <iostream>
#include <string>

using namespace std;

class ItemBiblioteca
{
private:
    string titulo;
    string autor;
    unsigned int numCopias;
public:
    ItemBiblioteca(/* args */) {}
    ItemBiblioteca(string titulo, string autor, unsigned int numCopias){
        this->titulo = titulo;
        this->autor = autor;
        this->numCopias = numCopias;
    }
    ~ItemBiblioteca() {}
    string getTitulo(){
        return this-> titulo;
    }
    string getAutor(){
        return this-> autor;
    }
    unsigned int getNumCopias(){
        return this-> numCopias;
    }
};

class Livro : protected ItemBiblioteca
{
private:
    unsigned int numPags;
public:
    Livro(
        string titulo, string autor, unsigned int numCopias, unsigned int numPags
        ):ItemBiblioteca(titulo, autor, numCopias) {
            this->numPags = numPags;
        }
    ~Livro() {}

    void mostraLivroTela(Livro livro){
        cout << "O livro "
            << livro.getTitulo()
            << " escrito por "
            << livro.getAutor()
            << " tem "
            << livro.numPags
            << " paginas e "
            << livro.getNumCopias()
            << " disponiveis a venda";
    }
};

class DVD : protected ItemBiblioteca
{
private:
    unsigned int duracaoMin;
public:
    DVD(
        string titulo, string autor, unsigned int numCopias, unsigned int duracaoMin
    ):ItemBiblioteca(titulo, autor, numCopias) {
        this-> duracaoMin = duracaoMin;
    }
    ~DVD() {}
    void mostraDVDTela(DVD dvd){
        cout << "O DVD "
            << dvd.getTitulo()
            << " criado por "
            << dvd.getAutor()
            << " tem "
            << dvd.duracaoMin
            << " minutos de duracao e  "
            << dvd.getNumCopias()
            << " disponiveis a venda";
    }
};


int main()
{
    Livro livro01("Harry Potter - A pedra filosofal", "JK...", 22, 300);
    livro01.mostraLivroTela(livro01);
    cout << "\n\n";
    Livro livro02("Harry Potter - A camera secreta", "JK...", 14, 370);
    livro02.mostraLivroTela(livro02);
    cout << "\n\n";

    DVD dvd01("Harry Potter - A pedra filosofal", "JK...", 22,160);
    dvd01.mostraDVDTela(dvd01);
    cout << "\n\n";
    DVD dvd02("Harry Potter - A camera secreta", "JK...", 11,180);
    dvd02.mostraDVDTela(dvd02);
    cout << "\n\n";

    return 0;
}
