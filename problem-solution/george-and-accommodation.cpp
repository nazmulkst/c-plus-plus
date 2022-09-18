#include <iostream>

using namespace std;

int main(){
    int n, p[1000], q[1000], room = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p[i] >> q[i];
        
        if((q[i] - p[i]) >= 2){
            room++;
        }
    }

    cout << room << endl;

    return 0;
}