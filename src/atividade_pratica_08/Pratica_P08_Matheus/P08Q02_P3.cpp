#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numAlunos = 15;
    float nota1[numAlunos];
    float nota2[numAlunos];
    float media[numAlunos];

    for (int i = 0; i < numAlunos; i++) {
        float valorAleatorio1 = ((float)rand() / RAND_MAX) * 10; 
        float valorAleatorio2 = ((float)rand() / RAND_MAX) * 10; 

        nota1[i] = valorAleatorio1;
        nota2[i] = valorAleatorio2;

        media[i] = (nota1[i] + nota2[i]) / 2;

        cout << "Nota do Aluno #" << i + 1 << " (Prova 1): " << nota1[i] << endl;
        cout << "Nota do Aluno #" << i + 1 << " (Prova 2): " << nota2[i] << endl;

        if (nota2[i] > nota1[i]) {
            cout << "Evoluiu" << endl;
        } else if (nota2[i] < nota1[i]) {
            cout << "Regrediu" << endl;
        } else {
            cout << "Constante" << endl;
        }

        cout << "Média do Aluno #" << i + 1 << ": " << media[i] << endl;
    }
    
    return 0;
}
