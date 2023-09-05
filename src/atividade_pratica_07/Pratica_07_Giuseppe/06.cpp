#include <iostream>

using namespace std;

int main() {
    int matricula;
    double nota1, nota2, nota3, media;
    char continuar;

    cout << "Cadastro de Notas dos Alunos" << endl;

    do {
        cout << "Informe a matrícula do aluno (apenas números): ";
        cin >> matricula;

        cout << "Informe a nota da P1: ";
        cin >> nota1;

        cout << "Informe a nota da P2: ";
        cin >> nota2;

        cout << "Informe a nota da P3: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "=================================" << endl;
        cout << matricula << "    " << nota1 << "    " << nota2 << "    " << nota3 << "    " << media << endl;


        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}