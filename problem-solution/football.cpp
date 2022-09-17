#include <iostream>

using namespace std;

int main(){
    string s;

    cout << "Enter String: ";
    cin >> s;
    int ans = 0;

    cout << "String: " << s << endl;
    cout << "Size: " << s.size() << endl;

    for(int i = 0; i < s.size(); i++){
        int count = 0;
        if(s[i] == '0'){
            while(s[i] == '0' && i < s.size()){
                count++;
                i++;
            }
        } else {
            while(s[i] == '1' && i < s.size()){
                count++;
                i++;
            }
        }
        if(count >= 7){
            ans = 1;
        }
        i--;
    }

    if(ans == 1){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}