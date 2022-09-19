#include <iostream>

using namespace std;

int main(){
    int n, k, i;

    cin >> n;

    int arr[1000];

    for(i = 1; i <= n; i++){
        cin >> k;
        arr[k] = i;
    }

    for(i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}