#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    string text;

    for(int i = 1; i <= n; i++){
        if(n > 1 && i < n){
            if(i % 2 != 0){
                text += "I hate that ";
            } else {
                text += "I love that ";
            }
        } else {
            if(i % 2 != 0){
                text += "I hate it";
            } else {
                text += "I love it";
            }
        }
    }

    cout << text << endl;

    return 0;
}