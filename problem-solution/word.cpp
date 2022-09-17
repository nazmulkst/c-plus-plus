#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;

    cin >> s;

    int u = 0, l = 0;

    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])){
            u += 1;
        } else {
            l += 1;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(l >= u){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        } else {
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}