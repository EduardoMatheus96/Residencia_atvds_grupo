#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Tweet
{
public:
    Tweet(Usuario *autor, const string &conteudo): autor(autor), conteudo(conteudo)
    {
        time_t now = time(0);
        data_criacao = ctime(&now);
    }

    Usuario *getAutor() const
    {
        return autor;
    }

    string getConteudo() const
    {
        return conteudo;
    }

    string getDataCriacao() const
    {
        return data_criacao;
    }

private:
    Usuario *autor;
    string conteudo;
    string data_criacao;
};

class Usuario
{
public:
    Usuario(const string &nome_usuario, const string &nome)
        : nome_usuario(nome_usuario), nome(nome) {}

    string getNomeUsuario() const
    {
        return nome_usuario;
    }

    string getNome() const
    {
        return nome;
    }

    void postarTweet(const string &conteudo)
    {
        Tweet novoTweet(this, conteudo);
        tweets.push_back(novoTweet);
    }

    void seguir(Usuario *usuario)
    {
        if (usuario != this)
        {
            seguindo.push_back(usuario);
            usuario->seguidores.push_back(this);
        }
    }

    vector<Tweet> receberFeed() const
    {
        vector<Tweet> feed;
        for (const Usuario *seguido : seguindo)
        {
            for (const Tweet &tweet : seguido->tweets)
            {
                feed.push_back(tweet);
            }
        }
        // Ordenar os tweets em ordem cronológica reversa
        sort(feed.begin(), feed.end(), [](const Tweet &a, const Tweet &b)
             { return a.getDataCriacao() > b.getDataCriacao(); });
        return feed;
    }

private:
    string nome_usuario;
    string nome;
    vector<Usuario *> seguidores;
    vector<Usuario *> seguindo;
    vector<Tweet> tweets;
};

class RedeSocial
{
public:
    void registrarUsuario(const string &nome_usuario, const string &nome)
    {
        Usuario novoUsuario(nome_usuario, nome);
        usuarios.push_back(novoUsuario);
    }

    Usuario *buscarUsuario(const string &nome_usuario)
    {
        for (Usuario &usuario : usuarios)
        {
            if (usuario.getNomeUsuario() == nome_usuario)
            {
                return &usuario;
            }
        }
        return nullptr;
    }

    vector<Usuario> listarUsuarios() const
    {
        return usuarios;
    }

private:
    vector<Usuario> usuarios;
};

int main()
{
    RedeSocial redeSocial;

    redeSocial.registrarUsuario("usuario1", "Usuario 1");
    redeSocial.registrarUsuario("usuario2", "Usuario 2");
    redeSocial.registrarUsuario("usuario3", "Usuario 3");

    Usuario *usuario1 = redeSocial.buscarUsuario("usuario1");
    Usuario *usuario2 = redeSocial.buscarUsuario("usuario2");
    Usuario *usuario3 = redeSocial.buscarUsuario("usuario3");

    if (usuario1 && usuario2 && usuario3)
    {
        usuario1->seguir(usuario2);
        usuario1->seguir(usuario3);
        usuario2->postarTweet("Primeiro tweet do usuario2.");
        usuario3->postarTweet("Primeiro tweet do usuario3.");

        vector<Tweet> feedUsuario1 = usuario1->receberFeed();
        cout << "Feed do usuario1:" << endl;
        for (const Tweet &tweet : feedUsuario1)
        {
            cout << tweet.getAutor()->getNomeUsuario() << ": " << tweet.getConteudo() << endl;
        }
    }

    return 0;
}