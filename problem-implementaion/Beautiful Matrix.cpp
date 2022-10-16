#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, val, arr[6][6], result = 0;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 5; j++){
            cin >> val;

            arr[i][j] = val;

            if(arr[i][j] == 1){
                result = abs((i-3)) + abs((j-3));
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}