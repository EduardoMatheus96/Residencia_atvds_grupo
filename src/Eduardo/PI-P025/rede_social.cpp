#include "biblioteca.hpp"

void RedeSocial::registrar_usuario(const string& nome_usuario, const string& nome_real) {
        Usuario* novo_usuario = new Usuario(nome_usuario, nome_real);
        usuarios.push_back(novo_usuario);
    }

    Usuario* RedeSocial::buscar_usuario(const string& nome_usuario) const{
        for (Usuario* usuario : usuarios) {
            if (usuario->get_nome_usuario() == nome_usuario) {
                return usuario;
            }
        }
        return nullptr; // Usuário não encontrado
    }

    void RedeSocial::listar_usuarios() const {
        cout << "Usuários na rede social:\n";
        for (Usuario* usuario : usuarios) {
            cout << "Nome de usuário: " << usuario->get_nome_usuario() << ", Nome real: " << usuario->get_nome() << "\n";
        }
    }

    void RedeSocial::listar_tweets() const {
        cout << "Tweets na rede social:\n";
        for (Tweet* tweet : tweets) {
            cout << "Autor: " << tweet->get_autor()->get_nome_usuario() << ", Conteúdo: " << tweet->get_conteudo() << "\n";
        }
    }
const vector<Usuario *> &RedeSocial::get_usuarios() const
{
    return usuarios;
}

const vector<Tweet *> &RedeSocial::get_tweets() const
{
    return tweets;
}