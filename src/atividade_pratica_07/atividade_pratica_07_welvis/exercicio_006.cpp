/*
Exercício 6: 
    Desenvolva um programa que receba a matrícula (apenas números) e 3 notas de um 
    grupo de alunos. A cada aluno cadastrado o programa deve perguntar se deseja
    prosseguir com outro. Em seguida, calcule a média de cada aluno e imprima os dados 
    da seguinte forma:

    MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
    ===========================================
    123456789 10.0 8.0 9.9 8.5
    MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
    ===========================================
    123456789 10.0 8.0 9.9 8.5
    MATRICULA NOTA1 NOTA2 NOTA3 MEDIA
    ===========================================
    123456789 10.0 8.0 9.9 8.5


*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<int> matriculas;
    vector<float> notas1;
    vector<float> notas2;
    vector<float> notas3;
    vector<float> medias;
    char continuar;

    cout << "Cadastro de Alunos" << endl;

    do {
        int matricula;
        float nota1, nota2, nota3, media;

        // Solicita a matrícula e as notas
        cout << "Digite a matrícula do aluno (apenas numeros): ";
        cin >> matricula;
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        cout << "Digite a terceira nota: ";
        cin >> nota3;

        // Calcula a média
        media = (nota1 + nota2 + nota3) / 3.0;

        // Armazena os dados nos vetores
        matriculas.push_back(matricula);
        notas1.push_back(nota1);
        notas2.push_back(nota2);
        notas3.push_back(nota3);
        medias.push_back(media);

        // Pergunta se deseja continuar cadastrando outros alunos
        cout << "Deseja cadastrar outro aluno? (S para sim, qualquer outra tecla para sair): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    // Imprime os dados de todos os alunos cadastrados
    cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
    cout << "===========================================" << endl;

    for (size_t i = 0; i < matriculas.size(); i++) {
        cout << setw(9) << matriculas[i] << " ";
        cout << setw(5) << fixed << setprecision(1) << notas1[i] << " ";
        cout << setw(5) << fixed << setprecision(1) << notas2[i] << " ";
        cout << setw(5) << fixed << setprecision(1) << notas3[i] << " ";
        cout << setw(5) << fixed << setprecision(1) << medias[i] << endl;
    }

    return 0;
}

