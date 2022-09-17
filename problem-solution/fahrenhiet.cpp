#include <iostream>

using namespace std;

int main(){
    double cels, fahr;

    cout << "Eter Celcius: ";
    cin >> cels;

    fahr = 1.8 * cels + 32;

    cout << "Fahrenhiet: " << fahr << endl;
    
    cels = (fahr - 32) * 5/9;

    cout << "Celcius: " << cels;

    return 0;
}