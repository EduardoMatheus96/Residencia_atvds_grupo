#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Tarefa
{
public:
    Tarefa(const string &descricao, bool concluida = false)
        : descricao(descricao), concluida(concluida) {}

    void marcarConcluida()
    {
        concluida = true;
    }

    bool estaConcluida() const
    {
        return concluida;
    }

    string getDescricao() const
    {
        return descricao;
    }

private:
    string descricao;
    bool concluida;
};

class GerenciadorTarefas
{
public:
    static void adicionarTarefa(const string &descricao)
    {
        tarefas.push_back(Tarefa(descricao));
    }

    static void adicionarTarefaByInstance(const Tarefa &tarefa)
    {
        tarefas.push_back(tarefa);
    }

    static void marcarTarefaConcluida(int indice)
    {
        if (indice >= 0 && indice < tarefas.size())
        {
            tarefas[indice].marcarConcluida();
        }
    }

    static void listarTarefasPendentes()
    {
        int contador = 0;
        for (const Tarefa &tarefa : tarefas)
        {
            if (!tarefa.estaConcluida())
            {
                cout << contador << ". " << tarefa.getDescricao() << endl;
                contador++;
            }
        }
    }

    static vector<Tarefa> getTarefas()
    {
        return tarefas;
    }

    static void clearTarefas()
    {
        tarefas.clear();
    }

private:
    static vector<Tarefa> tarefas;
};

vector<Tarefa> GerenciadorTarefas::tarefas;

class BancoDeDados
{
public:
    static void salvarTarefas(const string &nomeArquivo)
    {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open())
        {
            for (const Tarefa &tarefa : GerenciadorTarefas::getTarefas())
            {
                arquivo << tarefa.getDescricao() << "," << tarefa.estaConcluida() << "\n";
            }
            arquivo.close();
            cout << "Tarefas salvas com sucesso." << endl;
        }
        else
        {
            cout << "Erro ao abrir o arquivo para salvar as tarefas." << endl;
        }
    }

    static void carregarTarefas(const string &nomeArquivo)
    {
        ifstream arquivo(nomeArquivo);
        if (arquivo.is_open())
        {
            GerenciadorTarefas::clearTarefas();
            string linha;
            while (getline(arquivo, linha))
            {
                size_t pos = linha.find(",");
                if (pos != string::npos)
                {
                    string descricao = linha.substr(0, pos);
                    bool concluida = stoi(linha.substr(pos + 1));
                    GerenciadorTarefas::adicionarTarefaByInstance(Tarefa(descricao, concluida));
                }
            }
            arquivo.close();
            cout << "Tarefas carregadas com sucesso." << endl;
        }
        else
        {
            cout << "O arquivo de tarefas nao existe ou nao pode ser lido." << endl;
        }
    }
};

int main()
{
    BancoDeDados::carregarTarefas("tarefas.txt");

    int escolha;
    do
    {
        cout << "\nMenu:" << endl;
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
            cout << "Tarefa concluida com sucesso!" << endl;
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