#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int m = 1, total = 0, arr[n+1];
        
        for(int i = 1; i < 6; i++){
            arr[i] = n % 10;

            n = n / 10;

            if(arr[i] != 0){
                total++;
            }
        }

        cout << total << endl;

        for(int i = 1; i < 6; i++){
            if(arr[i] != 0){
                cout << arr[i] * m << " ";
            }
            m = m * 10;
        }

        cout << endl;

    }
    

    return 0;
}