#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int days = 0, rest;

    days = min(a, b);

    if(a > b){
        rest = a -b;
    } else {
        rest = b - a;
    }

    if(rest >= 2){
        rest = rest / 2;
    } else {
        rest = 0;
    }

    cout << days;
    cout << " " << rest << endl;

    return 0;
}