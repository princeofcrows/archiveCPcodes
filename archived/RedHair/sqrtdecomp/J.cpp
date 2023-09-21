#include <bits/stdc++.h>
using namespace std;

#define MX 1<<20
#define int long long

struct info{
    int l, r, i;
} q[MX];

int ara[MX], ara2[MX], n, m, k, block, cnt[MX];

////////////////////////////////////

bool comp(info a, info b){
    if(a.l/block!=b.l/block){
        return a.l/block < b.l/block;
    }
    return a.r < b.r;
}


void MOs(){
    block = sqrt(n);
    sort(q, q+m, comp);
    int ans, curl, curr, x;
    curl = curr = ans = x = 0;
    memset(cnt, 0, sizeof cnt);
    for(int i=0;i<m;i++){
        int l = q[i].l;
        int r = q[i].r;
        while(curl<l){
            x = ara[curl];
            cnt[x]--;
            ans-=cnt[x^k];
            //if(x==k) ans--;
            curl++;
        }
        while(curl>l){
            x = ara[curl-1];
            ans+=cnt[x^k];
            cnt[x]++;
            //if(x==k) ans++;
            curl--;
        }
        while(curr<=r){
            x = ara[curr];
            ans+=cnt[x^k];
            //if(x==k) ans++;
            cnt[x]++;
            curr++;
        }
        while(curr>r+1){
            x = ara[curr-1];
            cnt[x]--;
            ans-=cnt[x^k];
            //if(x==k) ans--;
            curr--;
        }
        ara2[q[i].i] = ans;
    }
    for(int i=0;i<m;i++){
        cout << ara2[i] << endl;
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    n++;
    ara[0] = 0;
    for(int i=1;i<n;i++){
        cin >> ara[i];
        ara[i]^=ara[i-1];
    }
    for(int i=0;i<m;i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--;
        q[i].i = i;
    }
    MOs();
    return 0;
}
