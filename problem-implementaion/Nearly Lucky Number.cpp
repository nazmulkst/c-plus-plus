#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;

    cin >> n;

    int count = 0;

    while(n){
        if(n % 10 == 7 || n % 10 == 4){
            count++;
        }
        n = n / 10;
    }

    if(count == 7 || count == 4){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}