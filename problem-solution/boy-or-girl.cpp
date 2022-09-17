#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string s;
    int i, x, c = 0;

    cin >> s;
    map<char, int>mp;

    for(i = 0; i < s.size(); i++){
        mp[s[i]]++;
        x = s[i];
        if(mp[x] == 1){
            c++;
        }
    }

    if(c % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}