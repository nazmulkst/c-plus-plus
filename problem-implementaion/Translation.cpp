#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;

    cin >> s;

    cin >> t;
    
    int ans = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[s.size() - 1 - i]){
            ans++;
        }
    }

    if(ans == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}