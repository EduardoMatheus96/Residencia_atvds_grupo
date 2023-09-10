#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include "../../funcoes/head_funcoes.h"

using namespace std;

void exercicio06()
{ 
    bool escolha = 1;
    while (escolha)
    {
        cout << "Menu dos alunos: " << endl;
        cout << "Deseja inserir as notas de um aluno ?" << endl;
        cout << "1.Inserir Aluno: " << endl;
        cout << "0.Sair do programa" << endl;
        cin >> escolha; 
        if(escolha)pegaImprimeAluno();
    } 
    
}