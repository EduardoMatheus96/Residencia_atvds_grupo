#include <iostream>
#include "./exercicio02/parte01/exercicio02.cpp"
#include "./exercicio02/parte02/parte02.cpp"
#include "./exercicio02/parte03/parte03.cpp"

using namespace std;

int main() {
    int opcao;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Exercicio 2" << endl;
        cout << "2. Exercicio 3" << endl;
        cout << "3. Exercicio 4" << endl;
        cout << "0. Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                int subOpcao1;
                cout << "\nExericio 2:" << endl;
                cout << "1. Parte 1" << endl;
                cout << "2. Parte 2" << endl;
                cout << "3. Parte 3" << endl;
                cout << "Escolha uma parte: ";
                cin >> subOpcao1;

                switch (subOpcao1) {
                    case 1:
                        exercicio02Parte01();
                        break;
                    case 2:
                        parte02();
                        break;
                    case 3:
                        parte03();
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
                break;

            case 2:
                int subOpcao2;
                cout << "\nExercicio 3:" << endl;
                cout << "1. Parte 1" << endl;
                cout << "2. Parte 2" << endl;
                cout << "Escolha uma parte: ";
                cin >> subOpcao2;

                switch (subOpcao2) {
                    case 1:
                        
                        break;
                    case 2:
                        
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
                break;

            case 3:
                int subOpcao3;
                cout << "\nExercicio 4:" << endl;
                cout << "1. Parte 1" << endl;
                cout << "2. Parte 2" << endl;
                cout << "Escolha uma parte: ";
                cin >> subOpcao3;

                switch (subOpcao3) {
                    case 1:
                        
                        break;
                    case 2:
                        
                        break;
                    default:
                        cout << "Opcao invalida." << endl;
                        break;
                }
                break;

            case 0:
                return 0;

            default:
                cout << "Opcao invalida." << endl;
                break;
        }
    }

    return 0;
}
