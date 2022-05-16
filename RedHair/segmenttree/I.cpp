#include <bits/stdc++.h>
using namespace std;
#define MX 100005

int tree[MX*5], ara[MX], sn[MX], en[MX], ara2[MX], cnt[MX];

void init(int node, int i, int j){
    if(i==j){
        tree[node] = ara2[i];
        return;
    }
    int l = node*2;
    int r = node*2 + 1;
    int m = (i+j)/2;
    init(l, i, m);
    init(r, m+1, j);
    tree[node] = max(tree[l], tree[r]);
    return;
}

int query(int node, int b, int e, int i, int j){
    if(b>j||e<i) return 0;
    if(b>=i&&e<=j) return tree[node];
    int l = node*2;
    int r = node*2 + 1;
    int m = (b+e)/2;
    int p1 = query(l, b, m, i, j);
    int p2 = query(r, m+1, e, i, j);
    return max(p1, p2);
}

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, q, c, cs, t, ans;
    scanf("%d", &t);
    cs = 1;
    while(t--){
        scanf("%d%d%d", &n, &c, &q);
        for(i=1;i<=n;i++){
            sn[i] = -1;
            cnt[i] = 0;
        }
        for(i=1;i<=n;i++){
            scanf("%d", &ara[i]);
            if(sn[ara[i]]==-1){
                sn[ara[i]] = i;
            }
            en[ara[i]] = i;
            cnt[ara[i]]++;
        }
        for(i=1;i<=n;i++){
            ara2[i] = cnt[ara[i]];
        }
        init(1, 1, n);
        printf("Case %d:\n", cs++);
        while(q--){
            scanf("%d%d", &i, &j);
            if(ara[i]==ara[j]) printf("%d\n", j-i+1);
            else{
                ans = en[ara[i]]-i+1;
                ans = max(ans, j-sn[ara[j]]+1);
                i = en[ara[i]]+1;
                j = sn[ara[j]]-1;
                if(j>=i) ans = max(query(1, 1, n, i, j), ans);
                printf("%d\n", ans);
            }
        }
    }
    return 0;
}












