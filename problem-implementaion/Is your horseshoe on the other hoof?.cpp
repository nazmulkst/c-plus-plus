#include <bits/stdc++.h>

using namespace std;

int main(){
    set <int> s;

    for(int i = 0; i < 4; i++){
        int p;
        cin >> p;

        s.insert(p);
    }

    cout << 4 - s.size() << endl;

    return 0;
}