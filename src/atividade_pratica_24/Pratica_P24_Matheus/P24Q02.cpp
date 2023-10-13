#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cliente
{
private:
    string nome;
    string cpf;

public:
    Cliente(string nome, string cpf)
    {
        this->cpf = cpf;
        this->nome = nome;
    }

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getCPF()
    {
        return cpf;
    }

    void setCPF(string cpf)
    {
        this->cpf = cpf;
    }
};

class Dependente
{
private:
    string nome;
    int idade;
    Cliente *dependenteDe;

public:
    /* Dependente(string nome, int idade, Cliente dependenteDe) {
         this->nome = nome;
         this->idade = idade;
         this->dependenteDe = &dependenteDe;
     }*/

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }
    int getIdade()
    {
        return idade;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    Cliente getDependente()
    {

        return *dependenteDe;
    }

    void setDependente(Cliente *dependenteDe)
    {
        this->dependenteDe = dependenteDe;
    }
    string getCpfResponsavel(){
        dependenteDe->getCPF();
    }
};

class Evento
{
private:
    string nome;
    string duracao;

public:
    Evento(string nome, string duracao)
    {
        this->nome = nome;
        this->duracao = duracao;
    }

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getDuracao()
    {
        return duracao;
    }

    void setDuracao(string duracao)
    {
        this->duracao = duracao;
    }
};

class Pacote
{
private:
    string nome;
    vector<Evento*> eventos;

public:
    Pacote(/* args */) {}

    string getNome()
    {
        return nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void adicionarEvento(Evento *evento)
    {
        eventos.push_back(evento);
    }

    vector<Evento*> getEventos(){
        return eventos;
    }
};

class Roteiro : public Evento
{
private:
    string local;
    string atracao;

public:
    Roteiro(string nome, string duracao, string local, string atracao) : Evento(nome, duracao)
    {
        this->local = local;
        this->atracao = atracao;
    }

    string getLocal()
    {
        return local;
    }

    void setLocal(string local)
    {
        this->local = local;
    }

    string getAtracao()
    {
        return atracao;
    }

    void setAtracao(string atracao)
    {
        this->atracao = atracao;
    }
};

class Deslocamento : public Evento
{
private:
    float distancia;
    string tipoTransporte;

public:
    Deslocamento(string nome, string duracao, float distancia, string tipoTransporte) : Evento(nome, duracao)
    {
        this->distancia = distancia;
        this->tipoTransporte = tipoTransporte;
    }

    float getDistancia()
    {
        return distancia;
    }

    void setDistancia(float distancia)
    {
        this->distancia = distancia;
    }

    string getTipoTransporte()
    {
        return tipoTransporte;
    }

    void setTipoTransporte(string tipoTransporte)
    {
        this->tipoTransporte = tipoTransporte;
    }
};

class Pernoite : public Evento
{
private:
    string local;

public:
    Pernoite(string nome, string distancia, string local) : Evento(nome, distancia)
    {
        this->local = local;
    }

    string getLocal()
    {
        return local;
    }

    void setLocal(string local)
    {
        this->local = local;
    }
};

Evento criarEvento()
{
    int menu = 0;

    while (menu != 4)
    {
        cout << "Selecione o tipo do evento:\n"
             << "(1) Roteiro\n"
             << "(2) Deslocamento\n"
             << "(3) Pernoite\n"
             << "(4) Sair\n";
        cin >> menu;

        string nome, duracao, local, atracao, tipoTransporte;
        float distancia;

        if (menu == 1)
        {
            cout << "Digite o nome do Roteiro: " << endl;
            cin >> nome;
            cout << "Digite a duração do Roteiro: " << endl;
            cin >> duracao;
            cout << "Digite o local do Roteiro: " << endl;
            cin >> local;
            cout << "Digite a atração do Roteiro: " << endl;
            cin >> atracao;
            return Roteiro(nome, duracao, local, atracao);
        }
        else if (menu == 2)
        {
            cout << "Digite o nome do Deslocamento: ";
            cin >> nome;
            cout << "Digite a duração do Deslocamento: ";
            cin >> duracao;
            cout << "Digite a distância do Deslocamento: ";
            cin >> distancia;
            cout << "Digite o tipo de transporte do Deslocamento: ";
            cin >> tipoTransporte;

            return Deslocamento(nome, duracao, distancia, tipoTransporte);
        }
        else if (menu == 3)
        {
            cout << "Digite o nome da Pernoite: ";
            cin >> nome;
            cout << "Digite a duração da Pernoite: ";
            cin >> duracao;
            cout << "Digite o local da Pernoite: ";
            cin >> local;
            return Pernoite(nome, duracao, local);
        }
        else if (menu == 4)
        {
            cout << "Saindo do menu.\n";
        }
        else
        {
            cout << "Opção inválida. Tente novamente.\n";
        }
    }
}

void listarEventos(vector<Evento> eventos)
{

    cout << "Evento cadastrados: " << endl;
    for (Evento n : eventos)
    {   
        cout << "Nome do evento: " << n.getNome() << endl;
    }
}

Pacote criarPacote(vector<Evento> eventos)
{
    string nomeTemp;
    string eventoTemp;
    Pacote temp;
    char continuar;
    int tentativas = 3; // Defina um limite para tentativas

    cout << "Defina o nome do Pacote: " << endl;
    cin >> nomeTemp;
    temp.setNome(nomeTemp);

    listarEventos(eventos);

    do
    {
        cout << "Digite o Evento que deseja adicionar ao Pacote ou '0' para sair: " << endl;
        cin >> eventoTemp;

        if (eventoTemp == "0")
        {
            break; // O usuário escolheu sair
        }

        bool eventoEncontrado = false;
        for (Evento &n : eventos)
        {
            if (eventoTemp == n.getNome())
            {
                temp.adicionarEvento(&n);
                eventoEncontrado = true;
                break; // Evento encontrado, saia do loop
            }
        }

        if (!eventoEncontrado)
        {
            cout << "Evento não encontrado. Tente novamente." << endl;
            tentativas--;
            if (tentativas == 0)
            {
                cout << "Limite de tentativas atingido. Saindo do menu de adição de eventos." << endl;
                break;
            }
        }

        cout << "Deseja adicionar outro evento? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return temp;
}

Cliente criarCliente()
{

    string nome, cpf;

    cout << "Digite o nome do cliente: " << endl;
    cin >> nome;
    cout << "Digite o CPF do cliente: " << endl;
    cin >> cpf;

    return Cliente(nome, cpf);
}

Dependente criarDepedente(vector<Cliente> clientes)
{
    char menu, continuar;
    string nome, nomeCliente;
    int idade;
    Dependente temp;
    int tentativas = 3; // Defina um limite para tentativas

    cout << "O cliente tem dependentes? (S)Sim  (N)Não " << endl;
    cin >> menu;
    if (menu == 'S' || menu == 's')
    {
        cout << "Digite o nome do responsavel: " << endl;
        cin >> nomeCliente;
        do
        {

            bool clienteEncontrado = false;
            for (Cliente n : clientes)
            {
                if (nomeCliente == n.getNome())
                {
                    cout << "Digite o nome do dependente: " << endl;
                    cin >> nome;
                    cout << "Digite a idade do dependente: " << endl;
                    cin >> idade;
                    temp.setNome(nome);
                    temp.setIdade(idade);
                    temp.setDependente(&n);
                    clienteEncontrado = true;
                    return temp;
                    break; // Cliente encontrado, saia do loop
                }
            }

            if (!clienteEncontrado)
            {
                cout << "Cliente não encontrado. Tente novamente." << endl;
                tentativas--;
                if (tentativas == 0)
                {
                    cout << "Limite de tentativas atingido. Saindo do menu de adição de dependente." << endl;
                    break;
                }
            }

            cout << "Deseja adicionar outro dependente? (S/N): ";
            cin >> continuar;
        } while (continuar == 'S' || continuar == 's');
    }
}

/*void listarClientes(vector<Cliente> clientes, vector<Dependente> dependentes){
    cout << "Clientes cadastrados: " << endl;

    for(Cliente n : clientes)
    {
        cout << "Nome do Cliente: " << n.getNome() << endl;
        for (Dependente z : dependentes)
        {
            if (n.getCPF() == z.getCpfResponsavel())
            {
                
                cout << "Nome Depedente: " << z.getNome() << endl;
            }
        }
        
    }
}*/

void listarClientes(vector<Cliente> clientes, vector<Dependente> dependentes) {
    cout << "Clientes cadastrados: " << endl;

    for (Cliente n : clientes) {
        cout << "Nome do Cliente: " << n.getNome() << endl;
        
        // Listar dependentes do cliente
        bool possuiDependentes = false;
        for (Dependente z : dependentes) {
            if (n.getCPF() == z.getCpfResponsavel()) {
                cout << "Nome do Dependente: " << z.getNome() << endl;
                possuiDependentes = true;
            }
        }
        
        if (!possuiDependentes) {
            cout << "Nenhum dependente cadastrado." << endl;
        }
    }
}

void listarPacotes(vector<Pacote> pacotes){
    cout << "Pacotes cadastrados: " << endl;

    for (Pacote n : pacotes) {
        cout << "Nome do pacote: " << n.getNome() << endl;
        
        // Listar dependentes do cliente

        for (Evento* z : n.getEventos()) {

             cout << "Nome do evento: " << z->getNome() << endl;

            }
        cout << "Esses são os eventos cadastrados!" << endl;
        }
    }


int main()
{
    vector<Evento> eventos;
    vector<Pacote> pacotes;
    vector<Cliente> clientes;
    vector<Dependente> dependentes;
    char continuar;

    do
    {
        eventos.push_back(criarEvento());
        cout << "Deseja adicionar outro evento? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    eventos.push_back(Roteiro("Roteiro 1", "2 horas", "Local 1", "Atração 1"));
    eventos.push_back(Deslocamento("Deslocamento 1", "3 horas", 100.0, "Ônibus"));
    eventos.push_back(Pernoite("Pernoite 1", "1 noite", "Hotel 1"));
    pacotes.push_back(criarPacote(eventos));
    clientes.push_back(criarCliente());
    dependentes.push_back(criarDepedente(clientes));
    return 0;
}