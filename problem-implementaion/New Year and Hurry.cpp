#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, k;

    cin >> n >> k;

    int rest = 240 - k, count = 0;

    for(int i = 1; i <= n; i++){
        if(rest >= (i * 5)){
            count++;
            rest -= (i * 5);
        }
    }

    cout << count << endl;

    return 0;
}