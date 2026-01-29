#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin >> n >> x;
    int val;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(m.find(val) == m.end()){
            m[x-val] = i;
        }
        else{
            m[val]++;
            i++;
            cout << m[val] << " " << i << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << "\n";

    return 0;
}
