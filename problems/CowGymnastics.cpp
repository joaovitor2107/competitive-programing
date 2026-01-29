#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, n;
    cin >> k >> n;
    vector<vector<int>> cows(n, vector<int>(k));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> cows[i][j];
        }
    }

   int perfect_pairs = 0;

    for(int a = 1; a < n; a++){
        for(int b = a+1; b < n+1; b++){

            int count_pair = 0;

            for(int i = 0; i < k; i++){
                int pos_a = 0 , pos_b = 0;
                for(int j = 0; j < n; j++){
                    // para cada par verificar se a esta antes de b todas k vezes ou 0 vezes (significa b antes de a sempre)
                    if(cows[i][j] == a) pos_a = j;
                    if(cows[i][j] == b) pos_b = j;
                }

                if(pos_a > pos_b) count_pair++;
            }

            if(count_pair == k || count_pair == 0){
                perfect_pairs++;
            }

        }
    }

    cout << perfect_pairs << "\n";

    return 0;
}
