#include <iostream>

using namespace std;

int main(){
    int k, n, w, i, d;

    cin >> k >> n >> w;

    int sum = 0;

    for(i = 1; i <= w; i++){
        sum += i;
    }

    d = (sum * k) - n;

    if(d < 0){
        cout << "0" << endl;
    } else {
        cout << d << endl;
    }

    return 0;
}