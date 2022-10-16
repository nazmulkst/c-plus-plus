#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, new_str;

    cin >> str;

    sort(str.begin(), str.end());

    for(int i = 0; i < str.size(); i++){
        if(str[i] == str[i+1]){
            while(str[i] == str[i+1] && i < str.size()){
                i++;
            }
        }
        new_str += str[i];
    }

    if(new_str.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}