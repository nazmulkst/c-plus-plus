#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    getline(cin, s);

    set <char> k;

    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            k.insert(s[i]);
        }
    }

    cout << k.size() << endl;

    return 0;
}