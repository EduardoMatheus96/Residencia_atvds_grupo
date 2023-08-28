#include <iostream>
#include <cctype>
using namespace std;

int main(void){
    //Letra a
    char ch1, ch2, ch3;
    
    //Letra b
    cout << "Insira um caracter: ";
    cin >> ch1;

    //Letra c
    isdigit(ch1) 
    ? cout << "É um digito !" << endl 
    : !isalpha(ch1)
    ? cout << "Não é um caracter alfabetico !" 
    : isupper(ch1) 
    ? cout << "É um caracter maiusculo !" << endl 
    : cout << "É um caracter minusculo" << endl;
    
    //Letra d
    /*
    Resposta: Sim fornece eu ja usei na questao anterior atraves da biblioteca cctype
    */

    ch2 = '81';
    cout << "Imprimindo o caracter ch2 em decimal: " << static_cast<int>(ch2) << endl;
    return 0;
}