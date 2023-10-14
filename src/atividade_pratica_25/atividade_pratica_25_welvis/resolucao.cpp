#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

class Usuario; // Declaração antecipada da classe Usuario

class Tweet
{
public:
    Tweet(Usuario *autor, const string &conteudo);

    Usuario *get_autor() const;
    string get_conteudo() const;
    tm get_data_criacao() const;

private:
    Usuario *autor;
    string conteudo;
    tm data_criacao;
};

class Usuario
{
public:
    Usuario(const string &nome_usuario, const string &nome);

    void postar_tweet(const string &tweet);
    void seguir(Usuario *usuario);
    vector<Tweet> receber_feed() const;

    string get_nome_usuario() const;
    string get_nome() const;
    vector<Usuario *> get_seguidores() const;
    vector<Usuario *> get_seguindo() const;
    vector<Tweet> get_tweets() const;

private:
    string nome_usuario;
    string nome;
    vector<Usuario *> seguidores;
    vector<Usuario *> seguindo;
    vector<Tweet> tweets;
};

// Implementação de Tweet
Tweet::Tweet(Usuario *autor, const string &conteudo)
    : autor(autor), conteudo(conteudo)
{
    time_t now = time(0);
    data_criacao = *localtime(&now);
}

Usuario *Tweet::get_autor() const
{
    return autor;
}

string Tweet::get_conteudo() const
{
    return conteudo;
}

tm Tweet::get_data_criacao() const
{
    return data_criacao;
}

// Implementação de Usuario
Usuario::Usuario(const string &nome_usuario, const string &nome)
    : nome_usuario(nome_usuario), nome(nome) {}

void Usuario::postar_tweet(const string &tweet)
{
    Tweet novo_tweet(this, tweet);
    tweets.push_back(novo_tweet);
}

void Usuario::seguir(Usuario *usuario)
{
    seguindo.push_back(usuario);
    usuario->seguidores.push_back(this);
}

// Função de comparação para objetos tm (data e hora)
bool compare_tm(const tm &a, const tm &b)
{
    if (a.tm_year != b.tm_year)
    {
        return a.tm_year > b.tm_year;
    }
    if (a.tm_mon != b.tm_mon)
    {
        return a.tm_mon > b.tm_mon;
    }
    if (a.tm_mday != b.tm_mday)
    {
        return a.tm_mday > b.tm_mday;
    }
    if (a.tm_hour != b.tm_hour)
    {
        return a.tm_hour > b.tm_hour;
    }
    if (a.tm_min != b.tm_min)
    {
        return a.tm_min > b.tm_min;
    }
    return a.tm_sec > b.tm_sec;
}

vector<Tweet> Usuario::receber_feed() const
{
    vector<Tweet> feed;
    for (Usuario *usuario : seguindo)
    {
        for (const Tweet &tweet : usuario->get_tweets())
        {
            feed.push_back(tweet);
        }
    }

    return feed;
    // sort(feed.begin(), feed.end(), [](const Tweet &a, const Tweet &b)
    //      { return compare_tm(a.get_data_criacao(), b.get_data_criacao()); });
}

string Usuario::get_nome_usuario() const
{
    return nome_usuario;
}

string Usuario::get_nome() const
{
    return nome;
}

vector<Usuario *> Usuario::get_seguidores() const
{
    return seguidores;
}

vector<Usuario *> Usuario::get_seguindo() const
{
    return seguindo;
}

vector<Tweet> Usuario::get_tweets() const
{
    return tweets;
}

class RedeSocial
{
public:
    void registrar_usuario(const string &nome_usuario, const string &nome);
    Usuario *buscar_usuario(const string &nome_usuario);
    vector<Usuario> listar_usuarios() const;
    vector<Tweet> listar_tweets(vector<Usuario> usuarios) const;

private:
    vector<Usuario> usuarios;
};

void RedeSocial::registrar_usuario(const string &nome_usuario, const string &nome)
{
    Usuario novo_usuario(nome_usuario, nome);
    usuarios.push_back(novo_usuario);
}

Usuario *RedeSocial::buscar_usuario(const string &nome_usuario)
{
    for (Usuario &usuario : usuarios)
    {
        if (usuario.get_nome_usuario() == nome_usuario)
        {
            return &usuario;
        }
    }
    return nullptr;
}

vector<Usuario> RedeSocial::listar_usuarios() const
{
    return usuarios;
}

vector<Tweet> RedeSocial::listar_tweets(vector<Usuario> usuarios) const
{
    vector<Tweet> todos_tweets;
    for (Usuario &usuario : usuarios)
    {
        for (const Tweet &tweet : usuario.get_tweets())
        {
            todos_tweets.push_back(tweet);
        }
    }
    return todos_tweets;
}

int main()
{
    // Exemplo de uso da rede social.
    RedeSocial rede_social;

    rede_social.registrar_usuario("usuario1", "Pedro");
    rede_social.registrar_usuario("usuario2", "Joao");

    Usuario *usuario1 = rede_social.buscar_usuario("usuario1");
    Usuario *usuario2 = rede_social.buscar_usuario("usuario2");

    usuario1->postar_tweet("Meu primeiro tweet!");
    usuario2->postar_tweet("Olá, mundo!");

    usuario1->seguir(usuario2);

    vector<Tweet> feed_usuario1 = usuario1->receber_feed();
    vector<Tweet> feed_usuario2 = usuario2->receber_feed();

    cout << "AAAAAAAAAAAAAAAA" << endl;

    cout << "Feed de Usuario 1:" << endl;
    for (const Tweet &tweet : feed_usuario1)
    {
        cout << tweet.get_conteudo() << endl;
    }

    cout << "Feed de Usuario 2:" << endl;
    for (const Tweet &tweet : feed_usuario2)
    {
        cout << tweet.get_conteudo() << endl;
    }

    return 0;
}
