#include <bits/stdc++.h>

using namespace std;

int main(){
    int k, r;

    cin >> k >> r;

    int sum = k, count = 1;

    for(int i = 0; ; i++){
        if(sum % 10 == 0 || sum % 10 == r){
            cout << count << endl;
            break;
        }

        sum += k;

        count++;
    }

    return 0;
}