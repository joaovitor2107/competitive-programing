#include <bits/stdc++.h>
using namespace std;

string do_permutations(vector<int> vec, int j, int k){

    vector<vector<int>> res;
    for(int i{1}; i <= max(j, k); i++){
        if(i == j){
            res.push_back(vec);
        }
        if(i == k){
            res.push_back(vec);
        }
        next_permutation(vec.begin(), vec.end());
    }

    int a = 0;
    for(int i{0}; i < res[0].size(); i++){
        if(res[0][i] == res[1][i]){
            a++;
        }
    }

    int b = res[0].size() - a;

    string ans = "0A0B";
    ans[0] += a;
    ans[2] += b;

    return ans;
}

int main(){

    int t;
    cin >> t;
    for(int i{0}; i < t; i++){
        int n, j, k;
        cin >> n >> j >> k;

        if(n == 12){
            vector<int> vec = {1,2};
            cout << do_permutations(vec, j, k) << endl;
        }
        else if(n == 123){
            vector<int> vec = {1,2,3};
            cout << do_permutations(vec, j, k) << endl;
        }
        else if(n == 1234){
            vector<int> vec = {1,2,3,4};
            cout << do_permutations(vec, j, k) << endl;
        }
    }

    return 0;
}
