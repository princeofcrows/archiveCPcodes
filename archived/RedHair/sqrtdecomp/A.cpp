#include <bits/stdc++.h>

using namespace std;

#define MX 100005

int n, m, ara[MX], ara3[MX], block, cnt[MX];

struct query{
    int l, r, i;
} ara2[MX];

bool comp(query a, query b){
    if(a.l/block!=b.l/block){
        return a.l/block < b.l/block;
    }
    return a.r<b.r;
}

void MOs(){
    block = sqrt(n);
    sort(ara2, ara2+m, comp);
    int curl, curr, ans;
    curl = curr = ans = 0;
    memset(cnt, 0, sizeof cnt);
    for(int i=0;i<m;i++){
        int l = ara2[i].l;
        int r = ara2[i].r;
        while(curl<l){
            if(ara[curl]<=n){
                cnt[ara[curl]]--;
                if(cnt[ara[curl]]+1==ara[curl]) ans--;
                if(cnt[ara[curl]]==ara[curl]) ans++;
            }
            curl++;
        }
        while(curl>l){
            if(ara[curl-1]<=n){
                cnt[ara[curl-1]]++;
                if(cnt[ara[curl-1]]-1==ara[curl-1]) ans--;
                if(cnt[ara[curl-1]]==ara[curl-1]) ans++;
            }
            curl--;
        }
        while(curr<=r){
            if(ara[curr]<=n){
                cnt[ara[curr]]++;
                if(cnt[ara[curr]]-1==ara[curr]) ans--;
                if(cnt[ara[curr]]==ara[curr]) ans++;
            }
            curr++;
        }
        while(curr>r+1){
            if(ara[curr-1]<=n){
                cnt[ara[curr-1]]--;
                if(cnt[ara[curr-1]]+1==ara[curr-1]) ans--;
                if(cnt[ara[curr-1]]==ara[curr-1]) ans++;
            }
            curr--;
        }
        ara3[ara2[i].i] = ans;
    }
    for(int i=0;i<m;i++){
        cout << ara3[i] << endl;
    }

}

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<m;i++){
        cin >> ara2[i].l >> ara2[i].r;
        ara2[i].l--;
        ara2[i].r--;
        ara2[i].i = i;
        //cout << ara2[i].l << " "<<ara2[i].r<<endl;
    }
    MOs();
    return 0;
}














