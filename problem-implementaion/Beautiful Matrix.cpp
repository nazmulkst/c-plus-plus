#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, val, arr[5+1][5+1], result = 0;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 5; j++){
            cin >> val;

            arr[i][j] = val;

            if(arr[i][j] == 1){
                result = abs((i-3)) + abs((j-3));
            }
        }
    }

    cout << result << endl;

    return 0;
}