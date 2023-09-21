#include <bits/stdc++.h>
using namespace std;

#define MX 100005

set <int> S;
set <int>::iterator it;

int l[MX], r[MX], ara[2*MX];

int main(){
    //freopen("in.txt", "r", stdin);
    int n, t, i, j, cs, f;
    scanf("%d", &t);
    cs = 1;
    while(t--){
        scanf("%d", &n);
        int ans = 0;
        for(i=1;i<=n;i++){
            scanf("%d%d", &l[i], &r[i]);
        }
        for(i=1;i<=2*n+1;i++){
            S.insert(i);
            ara[i] = -1;
        }
        for(i=n;i>=1;i--){
            f = 0;
            for(j=l[i];j<=r[i];j++){
                if(ara[j]!=-1){
                    it = S.lower_bound(j);
                    j = *it;
                    j--;
                    continue;
                }
                f = 1;
                ara[j] = i;
                S.erase(S.find(j));
            }
            if(f) ans++;
        }
        printf("Case %d: %d\n", cs++, ans);
        S.clear();
    }
    return 0;
}







