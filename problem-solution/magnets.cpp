#include <iostream>

using namespace std;

int main(){
    int n, i;

    cin >> n;

    int k, count = 0, arr[100000];

    for(i = 0; i < n; i++){
        cin >> k;
        arr[i] = k;
    }

    for(i = 0; i < n; i++){
        if(arr[i] == 10){
            while(arr[i] == 10 && i < n){
                i++;
            }
            count++;
        } else {
            while(arr[i] == 01 && i < n){
                i++;
            }
            count++;
        }
        
        i--;
    }


    cout << count << endl;

    return 0;
}