#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    set <int> s;
    int k, n = 4;

    for(int i = 0; i < n; i++){
        cin >> k;
        
        // cout << "K value: " << k << endl;

        s.insert(k);
    }

    // sort(s.begin(), s.end());
    cout << 4 - s.size() << endl;
    // cout << "set s size: " << s.size() << endl; // Set store if duplicate value is more than one quantity
    return 0;
}