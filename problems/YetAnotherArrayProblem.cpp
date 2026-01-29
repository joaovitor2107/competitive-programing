#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TAM 1000000000000000000

void primes(vector<int>&p){
    ll product=2;
    ll i = 3;

    while(i <= 59){
        for(int j{0}; j < p.size(); j++){
            if(i%p[j] == 0) break;
            if(j == p.size()-1){
                p.push_back(i);
                product *= i;
            }
        }
        i++;
    }

}

int mingcd(ll a, const vector<int>p){
    for(int i{0}; i < p.size(); i++){
        if(a%p[i] != 0) return p[i];
    }
    return -1;
}

int main(){

    int t;
    cin >> t;

    vector<int> p = {2};
    primes(p);

    for(int i{0}; i < t; i++){
        int n;
        cin >> n;
        int me = INT_MAX;
        int aux;
        for(int j{0}; j < n; j++){
            ll a;
            cin >> a;
            aux = mingcd(a, p);
            me = min(aux, me);
        }
        cout << me << endl;
    }

    return 0;
}
