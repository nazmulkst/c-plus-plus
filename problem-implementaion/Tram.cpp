#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int capacity = 0;

    int a, b, current = 0;

    while(n--){
        cin >> a >> b;
        current += (b - a);

        if(capacity < current){
            capacity = current;
        }
    }


    cout << capacity << endl;

    return 0;
}