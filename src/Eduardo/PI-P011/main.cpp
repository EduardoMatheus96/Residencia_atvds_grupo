#include <iostream>
#include <map>
#include <functional>
#include "./exercicios/head_exercicios.hpp"

using namespace std;

void exercicio2()
{
    cout << "Você escolheu o Exercício 02." << endl;
}

// Implemente os outros exercícios de forma semelhante
map<int, function<void()>> exercicios = {
    {1, exercicio01},
    {3, exercicio03},
    {4, exercicio04},
    {5, exercicio05},
    {6, exercicio06},
    {7, exercicio07},
    {8, exercicio08},
    {9, exercicio09},
    {10, exercicio10},
    {11, exercicio11},
    {12, exercicio12},

    // Adicione os outros exercícios aqui
};

int main()
{
    cout << "Menu de Exercícios:" << endl;
    for (const auto &exercicio : exercicios)
    {
        cout << exercicio.first << ". Exercício " << exercicio.first << endl;
    }

    int opcao;
    cout << "Escolha uma opção (ou 0 para sair): ";
    cin >> opcao;

    while (opcao != 0)
    {
        auto it = exercicios.find(opcao);
        if (it != exercicios.end())
        {
            cout << "Você escolheu o Exercício " << opcao << "." << endl;
            it->second();
        }
        else
        {
            cout << "Opção inválida. Tente novamente." << endl;
        }

        cout << "\n\nMenu de Exercícios:" << endl;
        for (const auto &exercicio : exercicios)
        {
            cout << exercicio.first << ". Exercício " << exercicio.first << endl;
        }

        cout << "Escolha uma opção (ou 0 para sair): ";
        cin >> opcao;
    }

    cout << "Saindo do programa. Até logo!" << endl;

    return 0;
}
