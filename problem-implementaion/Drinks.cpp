#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, v;

   cin >> n;

   double value = 0;

   for(int i = 0; i < n; i++){
        cin >> v;

        value += v;        
   }

   cout << fixed << setprecision(12) << (value / n) << endl;

   return 0;
}