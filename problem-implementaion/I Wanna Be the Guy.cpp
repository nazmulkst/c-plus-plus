#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, result = 0;

    cin >> n;

    int arr[n+1] = {0}, p, q, level;

    cin >> p; 

    for(int i = 1; i <=p; i++){
        cin >> level;

        arr[level] = 1;
    }

    cin >> q; 

    for(int i = 1; i <=q; i++){
        cin >> level;

        arr[level] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == 0){
            result = 1;
            break;
        }
    }

    if(result == 0){
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }


    return 0;
}