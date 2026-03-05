#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

int main(int argc, char *argv[]) {

    int t;
    cin >> t;
    int n;
    int a;
    for(int i = 0; i < t; i++){
        cin >> n;
        vi odd;
        vi even;
        vi vec(n);
        for(int j = 0; j < n; j++){
            cin >> a;
            if(a & 1){
                odd.push_back(a);
            }
            else even.push_back(a);
        }
        if(odd.size() == 0){
            cout << 0 << endl;
            break;
        }
        sort(odd.begin(), odd.end());
        sort(even.rbegin(), even.rend());
        // maior impar - todos os pares - menor impar - segundo maior impar - segundo menor impar - ...

        int tamo = odd.size() - 1;
        int tame = even.size() - 1;
        int ite = 0;
        while(tame >= 0 || tamo >= 0){
        }

    }

    return 0;
}
