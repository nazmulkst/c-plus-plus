#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int arr[n+1] = {0};

    for(int i = 0; i <= n; i+=2){
        arr[i] = 1;
    }


    if(arr[n]){
        cout << n << " is even number" << endl;
    } else {
        cout << n << " is odd number" << endl;
    }

    return 0;
}