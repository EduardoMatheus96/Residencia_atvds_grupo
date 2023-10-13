#include "biblioteca.hpp"

Tweet::Tweet(Usuario *autor, const string &conteudo, const tm &data_criacao)
    : autor(autor), conteudo(conteudo), data_criacao(data_criacao) {}

Usuario *Tweet::get_autor() const
{
    return autor;
}

const string &Tweet::get_conteudo() const
{
    return conteudo;
}

void Tweet::set_data_criacao(const tm &data)
{
    data_criacao = data;
}

tm Tweet::get_data_criacao() const
{
    return data_criacao;
}

string tm_to_string(const tm t) {
    ostringstream oss;
    oss << put_time(&t, "%Y-%m-%d %H:%M:%S");  // Formato: YYYY-MM-DD HH:MM:SS
    return oss.str();
}