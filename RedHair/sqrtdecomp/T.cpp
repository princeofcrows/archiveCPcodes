#include <bits/stdc++.h>
using namespace std;
#define MX 100007
#define int long long

int n, k, m, ara[MX], cnt[MX], block, ara2[MX], tree[MX];

struct Dquery{
    int l, r, i;
}q[MX];

void init(){
    memset(tree, 0, sizeof tree);
}

void update(int idx, int val){
    while(idx<=MX-5){
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}


int query(int idx){
    int sum = 0;
    while(idx>0){
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}

bool comp(Dquery a, Dquery b){
    if(a.l/block!=b.l/block){
        return a.l/block < b.l/block;
    }
    return a.r < b.r;
}

void MOs(){
    block = sqrt(n);
    sort(q, q+m, comp);
    int curl, curr, ans;
    curl = curr = ans = 0;
    init();
    k = max(0LL, k);
    for(int i=0;i<m;i++){
        int l = q[i].l;
        int r = q[i].r;
        while(curl<l){
            if(ara[curl]+k<=MX-5){
                ans += query(ara[curl]+k-1);
                ans -= query(MX-5);
            }
            if(ara[curl]-k>=1){
                ans -= query(ara[curl]-k);
            }
            update(ara[curl], -1);
            curl++;
        }
        while(curl>l){
            if(ara[curl-1]+k<=MX-5){
                ans -= query(ara[curl-1]+k-1);
                ans += query(MX-5);
            }
            if(ara[curl-1]-k>=1){
                ans += query(ara[curl-1]-k);
            }
            update(ara[curl-1], 1);
            curl--;
        }
        while(curr<=r){
            if(ara[curr]+k<=MX-5){
                ans -= query(ara[curr]+k-1);
                ans += query(MX-5);
            }
            if(ara[curr]-k>=1){
                ans += query(ara[curr]-k);
            }
            update(ara[curr], 1);
            curr++;
        }
        while(curr>r+1){
            if(ara[curr-1]+k<=MX-5){
                ans += query(ara[curr-1]+k-1);
                ans -= query(MX-5);
            }
            if(ara[curr-1]-k>=1){
                ans -= query(ara[curr-1]-k);
            }
            update(ara[curr-1], -1);
            curr--;
        }
        ara2[q[i].i] = ans;
    }
    for(int i=0;i<m;i++){
        printf("%lld\n", ara2[i]);
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    scanf("%lld%lld%lld", &n, &m ,&k);
    for(int i=0;i<n;i++) scanf("%lld", &ara[i]);
    for(int i=0;i<m;i++){
        scanf("%lld%lld", &q[i].l, &q[i].r);
        q[i].l--;
        q[i].r--;
        q[i].i = i;
    }
    MOs();
    return 0;
}
