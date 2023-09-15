/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> intercala(vector<int> vec, int tam1, vector<int> vec2, int tam2){

    vector<int> retorno;

    for (int i = 0; i < tam1 || i < tam2; i++)
    {
        if (tam1 > tam2){  
            if (i < tam2)
            {
                if (i%2 == 0){
                    retorno.push_back(vec[i]);
                }
            
                if (i%2 != 0){
                    retorno.push_back(vec2.at(i));
                }
            }
            else
                retorno.push_back(vec[i]);
            }
        if (tam2 > tam1){
            if (i < tam1)
            {
                if (i%2 == 0){
                    retorno.push_back(vec[i]);
                }
            
                if (i%2 != 0){
                    retorno.push_back(vec2[i]);
                }
            }
            else
                retorno.push_back(vec2[i]);
        }

    }
    
    return retorno;
        
}

int main (void) {

    vector<int> vetinho1 = {1,2,3,4,5};
    vector<int> vetinho2 = {10,20,30,40,50};
    int tam1 = vetinho1.size();
    int tam2 = vetinho2.size();

    vector<int> vetinho3 = intercala(vetinho1, tam1, vetinho2, tam2);
    int tam3 = vetinho3.size();
    for (int i = 0; i < tam3; i++)
    {
        cout << vetinho3[i];
    }

return 0;
}
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> intercala(vector<int> vec1, int tam1, vector<int> vec2, int tam2) {
    vector<int> retorno;
    int i = 0, j = 0;

    while (i < tam1 || j < tam2) {
        if (i < tam1) {
            retorno.push_back(vec1[i]);
            i++;
        }
        if (j < tam2) {
            retorno.push_back(vec2[j]);
            j++;
        }
    }

    return retorno;
}

int main() {
    vector<int> vetinho1 = {1, 2, 3, 4, 5};
    vector<int> vetinho2 = {10, 20, 30, 40, 50};
    int tam1 = vetinho1.size();
    int tam2 = vetinho2.size();

    vector<int> vetinho3 = intercala(vetinho1, tam1, vetinho2, tam2);
    int tam3 = vetinho3.size();
    for (int i = 0; i < tam3; i++) {
        cout << vetinho3[i] << " ";
    }

    return 0;
}