#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, score;

    cin >> n;

    cin >> k;

    int arr[n+1], next_round = 0;

    for(int i = 1; i <= n; i++){
        cin >> score;
        arr[i] = score;
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] >= arr[k] && arr[i] > 0){
            next_round++;
        }
    }

    cout << next_round << endl;
}