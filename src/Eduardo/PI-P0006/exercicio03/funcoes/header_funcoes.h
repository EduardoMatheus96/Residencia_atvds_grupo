#ifndef FUNCOES_H
#define FUNCOES_H

char verificaASCII(char caracter);
char pegaAnterior(char caracter);
void imprimiCaracterDecimal(char caracter, bool escolha);
void imprimiCaracterOctal(char caracter, bool escolha);
void imprimiCaracterHexadecimal(char caracter, bool escolha);
bool verifaMaiscula(char caracter);
bool verifaMinuscula(char caracter);
bool verificaDigito(char caracter, char caracter02);
int comparaInteiros(int num01, int num02);
void printaMaiorOuIgual(int num01, int num02);
void parImpar(int numero);

#endif