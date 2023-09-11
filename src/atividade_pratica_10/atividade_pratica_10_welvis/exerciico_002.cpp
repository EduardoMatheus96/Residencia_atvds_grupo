/*
Sistema de controle de notas de estudantes 
    Etapa 2: equipe 
    Complemente o programa implementando a ordenação dos nomes pelo critério 
    lexicográfico (alfabético) 
    Utilize o algoritmo bubble sort descrito abaixo para implementar

*/

/*
//vetor possui os elementos a ordenar 
n = vetor.end()-1 
fazer { 
  trocou = falso 
    para (j = vetor.begin(); j < n; j++) { 
            se vetor(j) > vetor(j + 1) { 
        inverte as posições de vetor(j+1) e 
vetor(j) 
        trocou = verdadeiro; 
            } 
        } 
  n-- 
} enquanto (trocou)

*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// void bubbleSort(vector<string> *nomes, int n){
//     do{
//         bool trocou = false;
//         for (int j = 0; j < n; j++){
//             if(nomes[j] > nomes[j+1]){
//                 string auxNames = nomes[j];
//                 nomes[j] = nomes[j+1];
//                 nomes[j+1] = auxNomes;
//                 trocou = true;
//             }
//         }
//     }while()
// }

int main() {
    int N;
    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    vector<string> nomes;
    vector<float> notas1, notas2;

    for (int i = 0; i < N; i++) {
        string nome;
        float nota1, nota2;

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome;

        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;

        nomes.push_back(nome);
        notas1.push_back(nota1);
        notas2.push_back(nota2);
    }

    // Exibir os nomes e notas dos alunos
    cout << "\nLista de Alunos e Notas:\n";
    for (int i = 0; i < N; i++) {
        cout << "Aluno: " << nomes[i] << ", Nota 1: " << notas1[i] << ", Nota 2: " << notas2[i] << endl;
    }

    return 0;
}
