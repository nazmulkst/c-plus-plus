#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b, new_number;
    
    cin >> a;

    cin >> b;

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            new_number += '1';
        } else {
            new_number += '0';
        }
    }

    cout << new_number << endl;

    return 0;
}