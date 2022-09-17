#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, c = 0;
    string s;

    cin >> n;

    while(n--){
        cin >> s;

        if(s[1] == '+'){
            c++;
        } else {
            c--;
        }
    }

    cout << c << endl;

    return 0;
}