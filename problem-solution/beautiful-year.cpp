#include <iostream>

using namespace std;

int main(){
    int year, first, second, third, fourth;

    cin >> year;

    for(int i = 0; ; i++){
        year++;
        first = year/1000;
        second = year/100 % 10;
        third = year/10 % 10;
        fourth = year % 10;

        if(first != second && first != third && first != fourth && second != third && second != fourth && third != fourth){
            cout << year << endl;
            break;
        }
        
    }

    return 0;
}