#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;

    int small = 0, captial = 0;

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            captial++;
        } else {
            small++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(small >= captial){
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}