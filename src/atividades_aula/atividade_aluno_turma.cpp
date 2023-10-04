/*
Crie em c++ duas classes em C++: Aluno e Turma.
    A classe Aluno deve ter os seguintes atributos:
        Nome do aluno (uma string).
        Número de identificação do aluno (um inteiro).
        Crie um construtor para a classe Aluno que permita inicializar os atributos.
        Crie um método exibirDetalhes() na classe Aluno que exiba os detalhes do aluno (nome e número
        de identificação).
    Classe Turma:
        A classe Turma deve ter um vector de objetos da classe Aluno.
        Crie um método adicionarAluno() na classe Turma que permita adicionar um
        aluno à coleção.
        Crie um método listarAlunos() na classe Turma que liste todos os alunos da
        turma, exibindo seus detalhes usando o método exibirDetalhes() da classe
        Aluno.
        Crie uma função main() pra testar tudo isso

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno
{
private:
    string nome;
    int numeroIdentificacao;

public:
    Aluno(string nome, int numeroIdentificacao)
    {
        this->nome = nome;
        this->numeroIdentificacao = numeroIdentificacao;
    }

    void exibirDetalhes()
    {
        cout << "Nome do aluno: " << this->nome << endl;
        cout << "Numero de identificacao: " << this->numeroIdentificacao << endl;
    }
};

class Turma
{
private:
    vector<Aluno> alunos;

public:
    void adicionarAluno(Aluno aluno)
    {
        this->alunos.push_back(aluno);
    }

    void listarAlunos()
    {
        cout << "Lista de Alunos da Turma:" << endl;
        for (Aluno aluno : this->alunos)
        {
            aluno.exibirDetalhes();
            cout << endl;
        }
    }
};

int main()
{
    Aluno aluno1("Joao", 101);
    Aluno aluno2("Maria", 102);
    Aluno aluno3("Pedro", 103);

    Turma turma;

    turma.adicionarAluno(aluno1);
    turma.adicionarAluno(aluno2);
    turma.adicionarAluno(aluno3);

    turma.listarAlunos();

    return 0;
}
