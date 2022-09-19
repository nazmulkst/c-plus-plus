#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, v[110];

    cin >> n;

    double sum = 0.0;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }


    double p = sum / n;

    cout << fixed << setprecision(12) << p << endl;

    return 0;
}