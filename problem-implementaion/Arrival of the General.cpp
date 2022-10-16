#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int max_value = 0, min_value = 110;
    int max_index = 0, min_index = 0;

    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;

        if(a > max_value){
            max_index = i;
            max_value = a;            
        }

        if(a <= min_value){
            min_index = i;
            min_value = a;
        }
    }

    if(max_index > min_index){
        cout << (max_index - 1) + (n - min_index) - 1;
    } else {
        cout << (max_index - 1) + (n - min_index);
    }

    return 0;
}