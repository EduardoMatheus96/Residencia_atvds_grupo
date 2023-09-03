#include <iostream>
using namespace std;

int main() {
    float A, B;

    // Solicitar os números ao usuário
    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    // Realizar operações e mostrar resultados
    cout << "Soma = " << A + B << endl;
    cout << "Subtração = " << A - B << endl;
    cout << "Multiplicação = " << A * B << endl;


    // Verifica se B é diferente de zero para evitar erros
    if (B != 0) {
        cout << "Divisão = " << static_cast<double>(A) / B << endl;
        cout << "Resto da Divisão = " << A % B << endl;
    } else {
        cout << "Não é possível dividir por zero." << endl;
    }

    return 0;
}

// Versão com float

#include <iostream>
using namespace std;

int main() {
    float A, B;

    // Solicitar os números ao usuário
    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    // Realizar operações e mostrar resultados
    cout << "Soma = " << A + B << endl;
    cout << "Subtração = " << A - B << endl;
    cout << "Multiplicação = " << A * B << endl;
    
    // Verifica se B é diferente de zero para evitar erros
    if (B != 0) {
        cout << "Divisão = " << A / B << endl;
        // Não é possível calcular o resto da divisão para números float
    } else {
        cout << "Não é possível dividir por zero." << endl;
    }

    return 0;
}
