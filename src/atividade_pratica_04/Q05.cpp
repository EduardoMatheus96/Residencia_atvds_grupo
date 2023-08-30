#include <iostream>
using namespace std;

int main() {
    int intVar = 1;
    int intVar2 = 0;
    double doubleVar = 0.0;
    char charVar = 'a';
    char charVar2 = '\0';
    const char* strVar = "";
    bool boolVar = 9;


if (intVar != 0) {
        cout << "intVar is true" << endl;
    } else {
        cout << "intVar is false" << endl;
    }
if (intVar2 != 0) {
        cout << "intVar2 is true" << endl;
    } else {
        cout << "intVar2 is false" << endl;
    }
    if (doubleVar != 0) {
        cout << "doubleVar is true" << endl;
    } else {
        cout << "doubleVar is false" << endl;
    }

    if (charVar != 0) {
        cout << "charVar is true" << endl;
    } else {
        cout << "charVar is false" << endl;
    }

    if (charVar2 != 0) {
        cout << "charVar2 is true" << endl;
    } else {
        cout << "charVar2 is false" << endl;
    }

    if (strVar != 0) {
        cout << "strVar is true" << endl;
    } else {
        cout << "strVar is false" << endl;
    }

    if (boolVar != 0) {
        cout << "boolVar is true" << endl;
    } else {
        cout << "boolVar is false" << endl;
    }

    return 0;
}