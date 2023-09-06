#include <iostream>

using namespace std;


int main(void) {
    double tempsReports[250] = {0.0};
    double tempMedia = 0;

    srand(time(NULL));
    
    double max = 0;
    double min = 40;

    for (int i = 0; i< 250; i++){
        tempsReports[i] = (10 + 30.0*(1.0 * rand()/RAND_MAX));
        
    }

    // Determinando a temperatura máxima e mínima
    for (int i = 0; i < 250; i++){

        tempMedia += tempsReports[i];

        if(max < tempsReports[i]){
            max = tempsReports[i];
        }
        if(min > tempsReports[i]){
            min = tempsReports[i];
        } 
    }

    for (int i = 0; i < 250; i++){

        if(i < 7){
            cout << i << " -  " << tempsReports[i] << endl;
        }

        if(i > 122 && i <= 150){
            cout << i << " -  " << tempsReports[i] << endl;
        }
        

    }

    tempMedia = tempMedia/250;

    cout << "A maior tempratura registrada foi: " << max << endl;
    cout << "A menor tempratura registrada foi: " << min << endl; 

    cout << "A temperatura média é: " << tempMedia << endl;

}