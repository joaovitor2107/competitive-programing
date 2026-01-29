#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n, m;
    cin >> n >> m;
    long long a;
    vector<long long> cit(n);

    for(long long i = 0; i < n; i++){
        cin >> a;
        cit[i] = a;
    }

    long long b;
    long long max_val = 0;
    long long MAX = 64*64;
    vector<long long> cit_dist(n, MAX);

    for(long long i = 0; i < m; i++){
        cin >> b;
        for(long long j = 0; j < n; j++){
            cit_dist[j] = min(cit_dist[j], abs(cit[j] - b));
            if(i == m - 1){
                max_val = max(cit_dist[j], max_val);
            }
        }
    }


    cout << max_val << "\n";

    return 0;
}
