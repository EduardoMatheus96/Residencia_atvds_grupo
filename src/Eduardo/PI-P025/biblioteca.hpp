#ifndef COMPRAS_HPP
#define COMPRAS_HPP
#include <string>
#include <iomanip>
#include <ctime>
#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

class Usuario;
class Tweet;
class RedeSocial;
class DataHora;

class DataHora {
private:
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;

public:
    DataHora(int dia, int mes, int ano, int hora, int minuto) : dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto) {
        if (!validarDataHora()) {
            throw invalid_argument("Data ou hora inválida.");
        }
    }

    bool validarDataHora() const {
        // Verifica se o ano é válido (considerando um ano mínimo de 1900)
        if (ano < 1900)
            return false;

        // Verifica se o mês está entre 1 e 12
        if (mes < 1 || mes > 12)
            return false;

        // Verifica se o dia está dentro do intervalo válido para o mês
        if (dia < 1 || dia > 31)
            return false;

        // Verifica se a hora está dentro do intervalo de 0 a 23
        if (hora < 0 || hora > 23)
            return false;

        // Verifica se os minutos estão dentro do intervalo de 0 a 59
        if (minuto < 0 || minuto > 59)
            return false;

        return true; // A data e hora são válidas
    }


    string obterDataHoraFormatada() const {
        stringstream ss;
        ss << setfill('0') << setw(2) << dia << "/" << setw(2) << mes << "/" << ano << " ";
        ss << setw(2) << hora << ":" << setw(2) << minuto;
        return ss.str();
    }
};

class Usuario
{
private:
    string nome_usuario;
    string nome;
    vector<Usuario> seguidores;
    vector<Usuario> seguindo;
public:
    Usuario() = default;
    Usuario(string nome_usuario, string nome);
    Usuario(Usuario &&) = default;
    Usuario(const Usuario &) = default;
    Usuario &operator=(Usuario &&) = default;
    Usuario &operator=(const Usuario &) = default;
    ~Usuario() = default;

    string getNome_Usuario() const;
    void setNome_Usuario(string nome_usuario);
    string getNome() const;
    void setNome(string nome);

    void postar_tweet(Tweet& tweet) const;
    void seguir_usuario(Usuario& usuario);
    vector<Usuario> receber_feed() const;
    
};

class Tweet
{
private:
    Usuario autor;
    string conteudo;
    DataHora datahora;
    
public:
    Tweet() = default;
    Tweet(Usuario autor, string conteudo, DataHora datahora);
    Tweet(Tweet &&) = default;
    Tweet(const Tweet &) = default;
    Tweet &operator=(Tweet &&) = default;
    Tweet &operator=(const Tweet &) = default;
    ~Tweet() = default;

    
};

class RedeSocial
{
private:
    vector<Usuario> usuarios;
    vector<Tweet> tweets;
public:
    RedeSocial() = default;
    RedeSocial(RedeSocial &&) = default;
    RedeSocial(const RedeSocial &) = default;
    RedeSocial &operator=(RedeSocial &&) = default;
    RedeSocial &operator=(const RedeSocial &) = default;
    ~RedeSocial() = default;

    void registrar_usuario(string nome_usuario, string nome);
    Usuario buscar_usuario(string nome_usuario);
    vector<Usuario> listar_usuarios();
    vector<Tweet> listar_tweets();
    
};

#endif