/* 
    Exercício 4: Organização de Código 
        • Em grupo, escolham uma funcionalidade simples para um programa (por 
        exemplo, uma calculadora de operações matemáticas). 
        • Dividam o programa em diferentes funções, atribuindo a cada membro do 
        grupo a responsabilidade por uma função específica. 
        • Juntem as funções criadas por cada membro e criem um programa completo 
        que utilize todas elas. 
        • Usem os recursos do Git para dividir e juntar os códigos. 

*/

#include <iostream>
using namespace std;

// Função para ler um número float do usuário
float lerNumero() {
    float numero;
    cout << "Digite um numero: ";
    cin >> numero;
    return numero;
}

// Função para realizar a adição de dois números
float somar(float num1, float num2) {
    return num1 + num2;
}

// Função para realizar a subtração de dois números
float subtrair(float num1, float num2) {
    return num1 - num2;
}

// Função para realizar a multiplicação de dois números
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Função para realizar a divisão de dois números
float dividir(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Erro: divisao por zero." << endl;
        return 0.0;
    }
}

int main() {
    float numero1, numero2;

    numero1 = lerNumero();
    numero2 = lerNumero();

    cout << "Resultado da Soma: " << somar(numero1, numero2) << endl;
    cout << "Resultado da Subtracao: " << subtrair(numero1, numero2) << endl;
    cout << "Resultado da Multiplicacao: " << multiplicar(numero1, numero2) << endl;
    cout << "Resultado da Divisao: " << dividir(numero1, numero2) << endl;

    return 0;
}
