#include <iostream>
#include <string>

using namespace std;

int main(){
    string n;

    cin >> n;

    int i, l = 0;

    for(i = 0; i < n.size(); i++){
        if(n[i] == '7' || n[i] == '4'){
            l++;
        }
    }

    if(l == 4 || l == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}