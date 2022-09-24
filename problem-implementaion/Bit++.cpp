#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        
        if(x[1] == '+'){
            count++;
        } else {
            count--;
        }
    }

    cout << count << endl;

    return 0;
}