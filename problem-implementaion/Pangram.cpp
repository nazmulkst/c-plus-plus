#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s, s_new;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
    }

    sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            while(s[i] == s[i+1] && i < s.size()){
                i++;
            }
        }

        s_new += s[i];
    }

    if(s_new.size() == 26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}