#include <iostream>

using namespace std;

int main(void)

{
   unsigned short int genInt; 
   unsigned char gen;

   cout << "Entre com a informacao de ge3ne da planta a ser conferida: " <<endl;
   cin >> genInt;

   unsigned char genTest = 0b1;
    if (genInt >= 1 && genInt <= 8) {
    gen = genInt;

    bool gen1 = (gen & genTest);
    if (gen1 == 0)
    {
       cout << "O gene 1 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 1 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen2 = (gen & genTest);
    if (gen2 == 0)
    {
       cout << "O gene 2 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 2 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen3 = (gen & genTest);
    if (gen3 == 0)
    {
       cout << "O gene 3 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 3 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen4 = (gen & genTest);
    if (gen4 == 0)
    {
       cout << "O gene 4 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 4 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen5 = (gen & genTest);
    if (gen5 == 0)
    {
       cout << "O gene 5 nao esta presente! " << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 5 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen6 = (gen & genTest);
    if (gen6 == 0)
    {
       cout << "O gene 6 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 6 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen7 = (gen & genTest);
    if (gen7 == 0)
    {
       cout << "O gene 7 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 7 esta presente!" << endl;
        genTest = genTest << 1;
    }
   bool gen8 = (gen & genTest);
    if (gen8 == 0)
    {
       cout << "O gene 8 nao esta presente!" << endl;
       genTest = genTest << 1;
    }
    else{
        cout << "O gene 8 esta presente!" << endl;
        genTest = genTest << 1;
    }
    }
    else {
        cout << "Numero de gene invalido. Digite um numero entre 1 e 8." << endl;
    }

 return 0;

}