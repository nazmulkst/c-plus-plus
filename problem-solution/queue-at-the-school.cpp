#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
#include <string>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>

using namespace std;

int main(){
    int n, t;

    cin >> n >> t;

    string s;

    cin >> s;
    
    while(t--){
        for(int i = 0; i < n - 1; i ++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}