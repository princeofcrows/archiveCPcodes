#include <bits/stdc++.h>
using namespace std;
#define MX 1000005
#define int long long

int ara[MX], cnt[MX], n, t, block, ara2[MX];

struct query{
    int l, r, i;
}q[MX];

bool comp(query a, query b){
    if(a.l/block != b.l/block){
        return a.l/block < b.l/block;
    }
    return a.r < b.r;
}

void MOs(){
    block = sqrt(n);
    sort(q, q+t, comp);
    int curl, curr, ans;
    curl = curr = ans = 0;
    for(int i=0;i<t;i++){
        int l = q[i].l;
        int r = q[i].r;
        while(curl<l){
            ans -= (cnt[ara[curl]]*2-1)*ara[curl];
            cnt[ara[curl]]--;
            curl++;

        }
        while(curl>l){
            ans += (cnt[ara[curl-1]]*2+1)*ara[curl-1];
            cnt[ara[curl-1]]++;
            curl--;
        }
        while(curr<=r){
            ans += (cnt[ara[curr]]*2+1)*ara[curr];
            cnt[ara[curr]]++;
            curr++;
        }
        while(curr>r+1){
            ans -= (cnt[ara[curr-1]]*2-1)*ara[curr-1];
            cnt[ara[curr-1]]--;
            curr--;
        }
        ara2[q[i].i] = ans;
    }
    for(int i=0;i<t;i++){
        printf("%lld\n", ara2[i]);
    }
}


int32_t main(){
    //freopen("in.txt", "r", stdin);
    scanf("%lld%lld", &n, &t);
    for(int i=0;i<n;i++){
        scanf("%lld", &ara[i]);
    }
    for(int i=0;i<t;i++){
        scanf("%lld%lld", &q[i].l, &q[i].r);
        q[i].i = i;
        q[i].l--;
        q[i].r--;
    }
    MOs();
    return 0;
}
