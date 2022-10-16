#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int police = 0, crime = 0;

    for(int i = 0; i < n; i++){
        int a;

        cin >> a;

        if(a > 0){
            police+=a;
        } else {
            if(police == 0){
                crime++;
            } else {
                police--;
            }
        }
    }

    cout << crime << endl;

    return 0;
}