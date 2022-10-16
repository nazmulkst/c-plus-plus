#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, new_str;

    cin >> str;

    for(int i = 0; i < str.size(); i+=2){
        if(str[i] != '+'){
            new_str.push_back(str[i]);
        }
    }

    sort(new_str.begin(), new_str.end());

    for(int i = 0; i < new_str.size(); i++){
        cout << new_str[i];
        if(i != (new_str.size() - 1)){
            cout << "+";
        }
    }

    return 0;
}