#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx], ind[mx];

bool localMaxima(int i) {
    return (ara[i] > ara[i-1] && ara[i] > ara[i+1]);
}

int32_t main(){
    read();
    //write();
    //fst;
    int t;
    si(t);

    while(t--){
        int n, ans = 0;
        si(n);

        for(int i=0;i<n;i++) {
            si(ara[i]);
            ind[i] = false;
        }

        for(int i=1;i<n-1;i++) {
            ind[i] = localMaxima(i);
        }

        for(int i=1;i<n-1;i++) {
            if(ind[i-1] && ind[i+1]) {
                ind[i-1] = false;
                ind[i+1] = false;
                ara[i] = max(ara[i-1], ara[i+1]);
                ans++;
            }
        }
        for(int i=1;i<n-1;i++) {
            if(ind[i]) {
                ind[i] = false;
                ara[i] = max(ara[i-1], ara[i+1]);
                ans++;
            }
        }

        printf("%d\n", ans);
        for(int i=0;i<n;i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");

    }
    return 0;
}
