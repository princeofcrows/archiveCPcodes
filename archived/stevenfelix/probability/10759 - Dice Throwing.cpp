#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ara[30][305], po[26];

int main(){
    //freopen("in.txt", "r", stdin);
    ll i, n, x, a, b, c, j, l;
    memset(ara, 0, sizeof ara);
    ara[1][1] = ara[1][2] = ara[1][3] = ara[1][4] = ara[1][5] = ara[1][6] = 1 ;
    for(l=2;l<=24;l++){
        for(i=1;i<150;i++){
            for(j=1;j<=6;j++){
                if((i-j)>=(l-1)){
                    ara[l][i] += ara[l-1][i-j];
                }
            }
        }
    }
    po[0] = 1;
    for(i=1;i<=24;i++){
        po[i] = po[i-1]*6;
    }
    while(cin >> n >> x){
        if(!n&&!x) break;
        b = po[n];
        a = b;
        for(l=x-1;l>=1;l--) a -= ara[n][l];
        //cout << a << endl;
        c = __gcd(a, b);
        if(b/c==1) cout << a/c << endl;
        else cout << a/c << "/" << b/c << endl;
    }
    return 0;
}
