#include <iostream>
#include "biblioteca.hpp"

int main() {
    RedeSocial redeSocial;

    // Registrar usuários
    redeSocial.registrar_usuario("joao123", "João");
    redeSocial.registrar_usuario("maria456", "Maria");

    // Obter os usuários
    Usuario* joao = redeSocial.buscar_usuario("joao123");
    Usuario* maria = redeSocial.buscar_usuario("maria456");

    // Postar tweets
    time_t tempo_agora = time(nullptr);  // Obter o tempo atual
    tm* data_hora = localtime(&tempo_agora);

    joao->postar_tweet("Olá, sou o João e este é meu primeiro tweet!", *data_hora);
    maria->postar_tweet("Oi! Estou começando a usar essa nova rede social.", *data_hora);
    // Seguir usuários
    joao->seguir(maria);

    // Listar usuários e tweets
    redeSocial.listar_usuarios();
    redeSocial.listar_tweets();

    // Listar feed de tweets para o João
    cout << "\nFeed do João:\n";
    vector<Tweet*> feedJoao = joao->receber_feed();
    for (const auto& tweet : feedJoao) {
        cout << tweet->get_autor()->get_nome() << " - "  << "\n";
        cout << "    " << tweet->get_conteudo() << "\n";
    }

    // Liberar a memória alocada para os objetos
    for (const auto& usuario : redeSocial.get_usuarios()) {
        delete usuario;
    }
    for (const auto& tweet : redeSocial.get_tweets()) {
        delete tweet;
    }

    return 0;
}
