#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int worst, best, count = 0;

    cin >> worst;

    best = worst;

    while(--n){
        int a;
        cin >> a;
        if(a < worst){
            worst = a;
            count++;
        }

        if(a > best){
            best = a;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}