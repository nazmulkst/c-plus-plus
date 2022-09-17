#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;

    int curr = 0, capacity = 0;

    while(n--){
        cin >> a >> b;

        curr = curr - a;
        curr = curr + b;

        if(curr > capacity){
            capacity = curr;
        }
    }

    cout << capacity << endl;

    return 0;
}