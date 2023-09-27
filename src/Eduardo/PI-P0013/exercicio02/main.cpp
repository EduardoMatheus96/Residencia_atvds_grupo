#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct empregado
{
    string nome;
    string sobrenome;
    string anoNascimento;
    string rg;
    string anoAdmissao;
    double salario;
};

void reajustaDezPorCento(vector<empregado> &empregados)
{
    for (auto &&i : empregados)
    {
        i.salario = i.salario + (i.salario * 0.1); 
    }
}   

void preencheNomes(vector<empregado> &nomes)
{
    srand(time(NULL));
    string auxiliar = "";
    for (size_t i = 0; i < 50; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            auxiliar = auxiliar + (char)('a' + (char)rand()%26);    
        }
        nomes[i].nome = auxiliar;
        auxiliar = "";


    }
}
void preencheSobreNomes(vector<empregado> &sobreNomes)
{
    srand(time(NULL));
    string auxiliar = "";
    for (size_t i = 0; i < 50; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            auxiliar = auxiliar + (char)('a' + (char)rand()%26);    
        }
        sobreNomes[i].sobrenome = auxiliar;
        auxiliar = "";
        
    }
}

void preencheRG(vector<empregado> &rg)
{
    srand(time(NULL));
    string auxiliar = "";
    for (size_t i = 0; i < 50; i++)
    {
        for (size_t j = 0; j < 13; j++)
        {
            auxiliar = auxiliar + (char)(rand()%10);    
        }
        rg[i].rg = auxiliar;
        auxiliar = "";
        
    }
}

// void preencheAdmissao(vector<empregado> &admissao)
// {
//     srand(time(NULL));
//     string auxiliar = "";
//     for (size_t i = 0; i < 50; i++)
//     {
//         // for (size_t j = 0; j < 4; j++)
//         // {
//         //     auxiliar = auxiliar + (char)(1990 + rand()%2024);    
//         // }
//         auxiliar = (1990 + rand()%2024);
//         admissao[i].anoAdmissao = auxiliar;
        
//     }
// }
// void preencheNascimento(vector<empregado> &nascimento)
// {
//     srand(time(NULL));
//     string auxiliar = "";
//     for (size_t i = 0; i < 50; i++)
//     {
//         // for (size_t j = 0; j < 4; j++)
//         // {
//         //     auxiliar = auxiliar + (char)(1990 + rand()%2024);    
//         // }
//         auxiliar = (1910 + rand()%2024);
//         nascimento[i].anoNascimento = auxiliar;
        
//     }
// }

int main(void)
{
    
    vector<empregado> empregados;
    preencheNomes(empregados);
    preencheSobreNomes(empregados);
    preencheRG(empregados);
    // preencheAdmissao(empregados);
    // preencheNascimento(empregados);
    // for (auto &&i : empregados)
    // {
    //     cout 
    //     << "O salario de "
    //     << i.nome 
    //     << i.sobrenome
    //     << " é de: R$ "
    //     << i.salario
    //     << endl;
    // }
    // reajustaDezPorCento(empregados);
    


    return 0;
}
