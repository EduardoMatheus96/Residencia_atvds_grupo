#ifndef COMPRAS_HPP
#define COMPRAS_HPP
#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include <sstream> 
#include <iomanip> 

using namespace std;

class Tweet;
class Usuario {
private:
    string nome_usuario;
    string nome;
    vector<Usuario*> seguidores;
    vector<Usuario*> seguindo;
    vector<Tweet*> tweets;

public:
    Usuario(const string& nome_usuario, const string& nome);
    Usuario() = default;
    void postar_tweet(const string& conteudo, const tm& data_criacao);
    void seguir(Usuario* usuario);
    vector<Tweet*> receber_feed() const;
    const string& get_nome_usuario() const;
    const string& get_nome() const;
    vector<Tweet> get_tweets() const;
};

class Tweet {
private:
    Usuario* autor;
    string conteudo;
    tm data_criacao;

public:
    Tweet(Usuario* autor, const string& conteudo, const tm& data_criacao);
    Tweet() = default;
    Usuario* get_autor() const;
    const string& get_conteudo() const;
    void set_data_criacao(const tm& data);
    tm get_data_criacao() const;
    string tm_to_string(const tm t);
};

class RedeSocial {
private:
    vector<Usuario*> usuarios;
    vector<Tweet*> tweets;

public:
    void registrar_usuario(const string& nome_usuario, const string& nome);
    Usuario* buscar_usuario(const string& nome_usuario) const;
    void listar_usuarios() const;
    void listar_tweets() const;
    const vector<Usuario*>& get_usuarios() const;
    const vector<Tweet*>& get_tweets() const;
};

#endif