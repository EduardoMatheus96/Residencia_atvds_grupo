#include "controle_de_tarefas.hpp"

int main()
{
    BancoDeDados::carregarTarefas("tarefas.txt");

    int escolha;
    do
    {
        cout << "Menu:" << endl;
        cout << "1. Adicionar tarefa" << endl;
        cout << "2. Marcar tarefa como concluida" << endl;
        cout << "3. Listar tarefas pendentes" << endl;
        cout << "4. Salvar tarefas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
        {
            cin.ignore();
            cout << "Digite a descricao da tarefa: ";
            string descricao;
            getline(cin, descricao);
            GerenciadorTarefas::adicionarTarefa(descricao);
            break;
        }
        case 2:
        {
            cout << "Digite o indice da tarefa a ser marcada como concluida: ";
            int indice;
            cin >> indice;
            GerenciadorTarefas::marcarTarefaConcluida(indice);
            break;
        }
        case 3:
        {
            GerenciadorTarefas::listarTarefasPendentes();
            break;
        }
        case 4:
        {
            BancoDeDados::salvarTarefas("tarefas.txt");
            break;
        }
        case 0:
        {
            cout << "Saindo do aplicativo." << endl;
            break;
        }
        default:
        {
            cout << "Opcao invalida." << endl;
            break;
        }
        }
    } while (escolha != 0);

    return 0;
}
