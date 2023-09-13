#include <iostream>
#include <vector>
using namespace std;


struct Point {
    int x;
    int y;
};

int main(){

    Point p1;

    p1.x = 10;
    p1.y = 20;

    vector<Point> teste;

    // teste[0].x = 1; 
    
    teste.at(0).x = 1; 

    Point p2 = {3, 15};

    cout << p1.x << "  " << p2.x << endl;





    return 0;
}