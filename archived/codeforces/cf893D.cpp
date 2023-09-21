#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MX 100005
int ara[MX];

void ex(){
    cout << -1;
    exit(0);
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, d, i, j, l, h, ans;
    cin >> n >> d;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    l = h = ans = j = 0;
    for(i=0;i<n;i++){
        l+=ara[i];
        h+=ara[i];
        if(l>d){
            ex();
        }
        if(!ara[i]){
            if(h>=0) l = max(0LL, l);
            else{
                l = 0;
                h = d;
                ans++;
            }
        }
        h = min(d, h);
    }
    cout << ans;
    return 0;
}
