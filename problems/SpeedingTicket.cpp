#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<int> road(n);
    vector<int> l_road(n);
    for(int i = 0; i < n; i++){
        cin >> road[i] >> l_road[i];
    }

    vector<int> bernie(m);
    vector<int> l_bernie(m);
    for(int i = 0; i < m; i++){
        cin >> bernie[i] >> l_bernie[i];
    }

    int r = 0, b = 0;
    int max_vel = 0;
    int vel;
    while(r != n && b != m){
        if(road[r] > bernie[b]){
            road[r] -= bernie[b];
            if(l_road[r] < l_bernie[b]){
                vel = l_bernie[b] - l_road[r];
                max_vel = max(max_vel, vel);
            }
            if(road[r] == 0) r++;
            b++;
        }
        else{
            bernie[b] -= road[r];
            if(l_road[r] < l_bernie[b]){
                vel = l_bernie[b] - l_road[r];
                max_vel = max(max_vel, vel);
            }
            if(bernie[b] == 0)  b++;
            r++;
        }
    }

    cout << max_vel << "\n";

    return 0;
}
