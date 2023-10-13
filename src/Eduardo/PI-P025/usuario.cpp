#include "biblioteca.hpp"

Usuario::Usuario(const string &nome_usuario, const string &nome)
    : nome_usuario(nome_usuario), nome(nome) {}

void Usuario::postar_tweet(const string& conteudo, const tm& data_criacao) {
    Tweet* tweet = new Tweet(this, conteudo, data_criacao); // Cria um novo Tweet com 'new'
    tweets.push_back(tweet); // Adiciona o ponteiro ao vetor de tweets
}

void Usuario::seguir(Usuario *usuario)
{
    seguindo.push_back(usuario);
    usuario->seguidores.push_back(this);
}

vector<Tweet *> Usuario::receber_feed() const
{
    vector<Tweet *> feed;
    for (const auto &usuario : seguindo)
    {
        for (const auto &tweet : usuario->tweets)
        {
            feed.push_back(tweet);
        }
    }
    return feed;
}

const string &Usuario::get_nome_usuario() const
{
    return nome_usuario;
}

const string &Usuario::get_nome() const
{
    return nome;
}

// Método para obter os tweets do usuário
vector<Tweet> Usuario::get_tweets() const {
    vector<Tweet> tweets_objetos;
    tweets_objetos.reserve(tweets.size());  // Reservar espaço para evitar realocações

    for (const auto& tweet_ptr : tweets) {
        tweets_objetos.push_back(*tweet_ptr);  // Copiar o tweet apontado para o novo vetor
    }

    return tweets_objetos;
}
