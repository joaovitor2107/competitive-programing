#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){

    int n, b;
    cin >> n >> b;
    int x, y;
    vector<pair<int,int>> p(n);
    int mnx=INT_MAX, mxx=0;
    int mny=INT_MAX, mxy=0;
    for(int i{0}; i < n; i++){
        cin >> x >> y;
        mnx = min(mnx, x);
        mny = min(mny, y);
        mxx = max(mxx, x);
        mxy = max(mxy, y);

        p[i] = {x, y};
    }

    sort(p.begin(), p.end());

    mnx++;
    mny++;
    mxx--;
    mxy--;
    int res = INT_MAX;
    int aux;

    for(int i{mnx}; i < mxx; i+=2){
        for(int j{mny}; j < mxy; j+=2){
            int a1=0, a2=0, a3=0, a4=0;
            for(int h{0}; h < n; h++){
                x = p[h].first;
                y = p[h].second;
                if(x > i && y > j) a1++;
                else if(x < i && y > j) a2++;
                else if(x > i && y < j) a3++;
                else if(x < i && y < j) a4++;
            }
            aux = max(a1, a2);
            aux = max(aux, a3);
            aux = max(aux, a4);
            res = min(aux, res);
        }
    }

    cout << res << "\n";

    return 0;
}
