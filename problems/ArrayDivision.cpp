#include <bits/stdc++.h>
using namespace std;

// dividimos em k subarrays testamos se da para construir uma resposta com esses k subarrays dado que nenhum desses subarrays podem passar de max_sum
// se não der aumentamos a max_sum
bool can_divide(vector<long long>&vec, long long k, long long max){

    long long subarrays = 1;
    long long current_sum = 0;
    for(long long i = 0; i < vec.size(); i++){
        if(vec[i] + current_sum <= max){
            current_sum += vec[i];
        }
        else{
            subarrays++;
            current_sum=vec[i];
        }
        if(subarrays > k){
            return false;
        }
    }

    return true;
}

// fazemos uma busca binaria no espaco de valores possiveis
// faz
long long max_sum(vector<long long>&vec, long long k, long long l, long long r){
    long long mid;
    long long res = r;
    while(l <= r){
        mid = (long long)((l+r)/2);
        if(can_divide(vec, k, mid)){
            r = mid - 1;
            res = mid;
        }
        else{
            l = mid + 1;
        }
    }

    return res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    vector<long long> vec(n);
    long long max = 0;
    long long sum = 0;

    for(long long i=0; i < n; i++){
        cin >> vec[i];
        sum += vec[i];
        if(vec[i] > max) max = vec[i];
    }

    cout << max_sum(vec, k, max, sum) << "\n";



    return 0;
}
