//princ30fcr0ws

#include <bits/stdc++.h>

using namespace std;
#define MX 1000005
#define int long long

int ara[MX], ara2[MX];
vector <int> x;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, a;
    a = 0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    a = 0;
    int c = 0;
    memset(ara2, 0, sizeof ara2);
    for(i=n;i>=1;i--){
        ara2[i]++;
        j = i-ara[i];
        j = max(c, j);
        ara2[j]--;
    }
    for(i=1;i<=n;i++){
        ara2[i]+=ara2[i-1];
    }
    for(i=1;i<=n;i++){
        if(ara2[i]>=0) a++;
    }
    cout << a;
    return 0;
}
