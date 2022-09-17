#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;

    int i, c=0;

    cin >> s;

    sort(s.begin(), s.end());

    // cout << s << endl;
    
    for(i = 0; i < s.size(); i++){
        if(s[i] != s[i - 1]){
            c++;
        }
    }
    if(c % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    // cout << c << endl;
    return 0;
}