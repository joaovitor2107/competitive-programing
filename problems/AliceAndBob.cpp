#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i{0}; i < t; i++){
        int n, a;
        cin >> n >> a;
        int prev, act;
        int res = 0;

        bool flag = false;


        int one_more = a + 1;
        int one_less = a - 1;
        int pm=0, pl = 0, pam = 0, pal = 0;
        for(int j{0}; j < n; j++){
           cin >> act;
           if(abs(act - a) >= abs(act - one_more)) pam++;
           else pm++;
           if(abs(act - a) >= abs(act - one_less)) pal++;
           else pl++;
        }
        if(pal > pam) res = one_less;
        else res = one_more;

        cout << res << "\n";
    }

   return 0;
}
