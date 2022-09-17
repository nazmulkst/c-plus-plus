#include <iostream>

using namespace std;

int main(){
    double width, height, area;

    cout << "Enter Width: ";
    cin >> width;

    cout << "Enter Height: ";
    cin >> height;

    area = width * height;

    cout << "Result: " << area << endl;

    return 0;
}