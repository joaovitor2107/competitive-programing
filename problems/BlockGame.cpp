#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);
    char a[10];
    char b[10];

    map<char, int> m;
    set<char> c;
    for(int i = 0; i < 26;i++){
        m['a'+i] = 0;
    }

    for(int i = 0; i < n; i++){
        c.clear();

        scanf("%9s", a);
        scanf("%9s", b);

        int alen = strlen(a);
        int blen = strlen(b);
        for(int j = 0; j < alen; j++){
            c.insert(a[j]);
        }
        for(int j = 0; j < blen; j++){
            c.insert(b[j]);
        }

        for(set<char>::iterator it = c.begin(); it != c.end(); it++){
            m[*it]++;
        }
    }


    for(int i = 0; i < 26;i++){
        printf("%d\n", m['a'+i]);
    }

    return 0;
}
