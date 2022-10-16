#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[3];

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    sort(arr, arr+3);
    
    int m1 = arr[1] - arr[0];
    int m2 = abs(arr[1] - arr[2]);


    cout << m1 + m2 << endl;

    return 0;
}