#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, t;

    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());

    if(s == t){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // string mod = t;

    // for(int i = 0; i < s.size(); i++){
    //     swap(mod[i], s[s.size() - i - 1]);
    // }

    // if(mod == t){
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }

    return 0;
}