#include <iostream>
#include<cmath>

// match one value which is not square value

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int x;
        int ans = 0;

        for(int i = 0; i < n; i++){
            cin >> x;

            int a = sqrt(x);

            if(a*a != x) ans = 1;

        }
        if(ans == 1){
            cout << "YES";
        } else {
            cout << "NO";
        }
        return 0;
    }
}