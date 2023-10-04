#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno
{
private:
    string nome;
    unsigned int numIdentificacao;
public:
    Aluno() {}
    Aluno(string nome, unsigned int numIdentificacao){
        this-> nome = nome;
        this->numIdentificacao = numIdentificacao;
    }
    ~Aluno() {}
    string getNome(){
        return this-> nome;
    }
    unsigned int getNumIdentificacao(){
        return this->numIdentificacao;
    }
    void exibirDetalhes(){
        cout << " O aluno " << nome 
            << " de numero de identificacao "
            << numIdentificacao << endl;
    }
};

class Turma
{
private:
    vector<Aluno> alunos;
public:
    Turma() {}
    Turma(vector<Aluno> alunos){
        this->alunos = alunos;
    }
    ~Turma() {}
    void adicionarAluno(Aluno &aluno){
        alunos.push_back(aluno);
    }
    void listarAlunos(){
        for (Aluno &a : alunos)
        {
            a.exibirDetalhes();             
        }
        
    }
};

int main(void)  
{
    Aluno aluno01("Eduardo", 1);
    Aluno aluno02("Welvis", 2);
    Aluno aluno03("Wilton", 3);
    Turma turma;
    turma.adicionarAluno(aluno01);
    turma.adicionarAluno(aluno02);
    turma.adicionarAluno(aluno03);        
    turma.listarAlunos();
    return 0;
}
