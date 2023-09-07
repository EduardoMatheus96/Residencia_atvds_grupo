#include <iostream>

using namespace std;

int main(void){
    double temps[250], max = 0, min = 40, tempMedia = 0, tempsOneAfter[250];
    srand(time(NULL));

    for (int i = 0; i < 250; i++)
    {
        //Letra a
        temps[i] = 10 + 30.0 * (1.0 * rand()/RAND_MAX);  
        if(temps[i] > max){
            max = temps[i];  
        }
        else if(temps[i] < min){
            min = temps[i];
        }
        tempMedia += temps[i]; 
        
    }
    //Letra b
    cout << "A temperatura máxima reportada foi de: " 
        << max 
        << " graus"
        << endl;

    cout << "A temperatura minima reportada foi de: " 
        << min 
        << " graus"
        << endl;

    //Letra c
    cout << "A temperatura média foi de: "
    << tempMedia/250
    <<endl;

    for (int i = 0; i < 250; i++)
    {
        if (temps[i] > tempMedia){
            tempsOneAfter[i] = temps[i]++;
        }
        else if (temps[i] == tempMedia)
        {
            tempsOneAfter[i] = temps[i];
        }
        else if (temps[i] < tempMedia){
            tempsOneAfter[i] = temps[i] - 2;
        }
    }
    
    //Letra d
    cout << "As temperaturas ficaram: \n";
    for (int i = 0; i < 250; i+=10)
    {

        cout << i
        << " - " 
        << temps[i] 
        << " graus"    
        << endl;
    }
    cout << "As temperaturas após uma hora ficaram: \n";
    for (int i = 0; i < 250; i+=10)
    {

        cout << i
        << " - " 
        << tempsOneAfter[i] 
        << " graus"    
        << endl;
    }
    
    return 0;
}