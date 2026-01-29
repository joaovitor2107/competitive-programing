#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    map<int,int> ls;
    int l = 0;
    int res = 0;
    for(int r = 0; r < n; r++){
        if(ls.count(v[r]) > 0 && ls[v[r]] >= l){
            l = ls[v[r]] + 1;
        }

        ls[v[r]] = r;
        res = max(res, r-l+1);
    }


    cout << res << "\n";
    return 0;
}
