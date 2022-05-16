//prince0fcr0ws
#include <bits/stdc++.h>

using namespace std;

#define MX (1<<19)
#define MX2 71
#define MX3 100003
#define mod 1000000007
//#define int long long

int ara2[MX2], dp[MX2][MX], n, ara3[MX2], po2[MX3];
int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67};

int subpro(int mask, int i){
    if(i>=71) return (mask==0);
    if(dp[i][mask]!=-1) return dp[i][mask];
    long long int ret = 0;
    long long int o, e;
    if(ara2[i]==0){
        o = 0;
        e = 1;
    }
    else{
        o = e = po2[ara2[i]-1];
    }
    ret += subpro(mask, i+1)*e;
    ret %= mod;
    ret += subpro(mask^ara3[i], i+1)*o;
    ret %= mod;
    return dp[i][mask] = (int)(ret);
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, j, a, b, l, ans, x, k, c, m;
    cin >> n;
    memset(ara2, 0, sizeof ara2);
    memset(ara3, 0, sizeof ara3);
    for(i=0;i<n;i++){
        cin >> a;
        ara2[a]++;
    }

    po2[0] = 1;
    for(i=1;i<=n;i++) po2[i] = (po2[i-1]*2)%mod;

    for(i=2;i<71;i++){
        a = i;
        j = 0;
        m = 0;
        while(a!=1){
            if(a%primes[j]==0){
                a/=primes[j];
                m ^= (1<<j);
            }
            else j++;
        }
        ara3[i] = m;
        //cout << i << " " << m << endl;
    }
    memset(dp, -1, sizeof dp);
    ans = (subpro(0, 0)-1)%mod;
    if(ans<0) ans += mod;
    cout << ans;
    return 0;
}















