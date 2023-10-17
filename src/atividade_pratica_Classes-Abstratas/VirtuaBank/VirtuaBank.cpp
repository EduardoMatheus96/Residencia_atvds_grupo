#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Transacao {
public:
    Transacao(const string& data, double valor, const string& descricao)
        : data(data), valor(valor), descricao(descricao) {}

    string getData() const { return data; }
    double getValor() const { return valor; }
    string getDescricao() const { return descricao; }

private:
    string data;
    double valor;
    string descricao;
};

class Conta {
public:
    Conta(int numero, const string& correntista)
        : numero(numero), correntista(correntista), saldo(0) {}

    int getNumero() const { return numero; }
    string getCorrentista() const { return correntista; }
    double getSaldo() const { return saldo; }

    virtual void deposito(string data, double valor, const string& descricao) = 0;
    virtual void retirada(string data, double valor, const string& descricao) = 0;
    virtual void imprimirExtrato() const = 0;

    void adicionarTransacao(const Transacao& transacao) {
        transacoes.push_back(transacao);
    }

protected:
    int numero;
    string correntista;
    double saldo;
    vector<Transacao> transacoes;
};

class ContaCorrenteComum : public Conta {
public:
    ContaCorrenteComum(int numero, const string& correntista)
        : Conta(numero, correntista) {}

    void deposito(string data,double valor, const string& descricao) override {
        saldo += valor;
        adicionarTransacao(Transacao(data, valor, descricao));
    }

    void retirada(string data,double valor, const string& descricao) override {
        if (valor <= saldo) {
            saldo -= valor;
            adicionarTransacao(Transacao(data, -valor, descricao));
        } else {
            cout << "Saldo insuficiente para retirada." << endl;
        }
    }

    void imprimirExtrato() const override {
        cout << "Extrato da Conta Corrente Comum:" << endl;
        for (const Transacao& transacao : transacoes) {
            cout << "Data: " << transacao.getData()
                      << " Descricao: " << transacao.getDescricao()
                      << " Valor: " << transacao.getValor() << endl;
        }
        cout << "Saldo: " << saldo << std::endl;
    }
};

class ContaCorrenteComLimite : public Conta {
public:
    ContaCorrenteComLimite(int numero, const string& correntista, double limite)
        : Conta(numero, correntista), limite(limite) {}

    void deposito(string data,double valor, const string& descricao) override {
        saldo += valor;
        adicionarTransacao(Transacao(data, valor, descricao));
    }

    void retirada(string data,double valor, const string& descricao) override {
        if (valor <= saldo + limite) {
            saldo -= valor;
            adicionarTransacao(Transacao(data, -valor, descricao));
        } else {
            cout << "Saldo e limite insuficientes para retirada." << endl;
        }
    }

    void imprimirExtrato() const override {
        cout << "Extrato da Conta Corrente Com Limite:" << endl;
        for (const Transacao& transacao : transacoes) {
            cout << "Data: " << transacao.getData()
                 << " Descricao: " << transacao.getDescricao()
                 << " Valor: " << transacao.getValor() << endl;
        }
        cout << "Saldo: " << saldo << endl;
        cout << "Limite de Cheque Especial: " << limite << endl;
    }

private:
    double limite;
};

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(int numero, const string& correntista, int diaAniversario)
        : Conta(numero, correntista), diaAniversario(diaAniversario) {}

    void deposito(string data,double valor, const string& descricao) override {
        saldo += valor;
        adicionarTransacao(Transacao(data, valor, descricao));
    }

    void retirada(string data, double valor, const string& descricao) override {
        if (valor <= saldo) {
            saldo -= valor;
            adicionarTransacao(Transacao(data, -valor, descricao));
        } else {
            cout << "Saldo insuficiente para retirada." << endl;
        }
    }

    void imprimirExtrato() const override {
        cout << "Extrato da Conta Poupanca:" << endl;
        for (const Transacao& transacao : transacoes) {
            cout << "Data: " << transacao.getData()
                 << " Descricao: " << transacao.getDescricao()
                 << " Valor: " << transacao.getValor() << endl;
        }
        cout << "Saldo: " << saldo << endl;
        cout << "Dia de Aniversario: " << diaAniversario << endl;
    }

private:
    int diaAniversario;
};

int main() {
    // Criando um mapa para associar números de conta com objetos de Conta
    map<int, Conta*> contas;

    // Criando contas e adicionando ao mapa
    ContaCorrenteComum conta1(1, "Alice");
    ContaCorrenteComLimite conta2(2, "Bob", 1000);
    ContaPoupanca conta3(3, "Charlie", 5);

    contas[conta1.getNumero()] = &conta1;
    contas[conta2.getNumero()] = &conta2;
    contas[conta3.getNumero()] = &conta3;

    // Realizando operações nas contas
    contas[1]->deposito("10/06/2017" ,1000, "Deposito inicial");
    contas[1]->retirada("15/10/2017",500, "Pagamento de contas");

    contas[2]->deposito("25/08/2020" ,1500, "Deposito inicial");
    contas[2]->retirada("26/09/2020" ,2000, "Compra com cartao de credito");

    contas[3]->deposito("12/02/2023",2000, "Deposito inicial");
    contas[3]->retirada("20/03/2023",500, "Saque para despesas mensais");

    // Imprimindo o extrato de todas as contas
    for (const auto& par : contas) {
        cout << "Numero da Conta: " << par.first << endl;
        par.second->imprimirExtrato();
        cout << endl;
    }

    return 0;
}
