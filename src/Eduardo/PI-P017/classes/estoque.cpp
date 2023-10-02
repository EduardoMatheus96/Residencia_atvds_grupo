#include <iostream>
#include <string>
using namespace std;

class Estoque
{
     private :
        string nome;
        int quantidade;
     public :

          string getNome(){
            this->nome;
          }

          int getQuantidae(){
            this->quantidade;
          }

          void setNome(string nome){
            this->nome = nome;
          }

          void setQuantidade(int quantidade){
            this->quantidade = quantidade;
          }
          void atuaizarEstoque(int codigoProduto) {
            if(this->quantidade > 0){
                this->quantidade--;
            }
        }
};
