#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c;

        cin >> a;
        cin >> b;
        cin >> c;
        if(c == 0){
            if(a == b) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else {
            c++;
            long long aa = min(a,b);
            long long bb = max(a,b);

            long long x;
            x = aa * c;
            if(x >= bb){
                cout << "YES" << endl;
            } else {
                cout << "NO";
            }
        }

        return 0;

    }

}