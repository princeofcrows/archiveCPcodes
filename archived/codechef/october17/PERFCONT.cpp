#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    //freopen("in.txt", "r", stdin);
    int t, i, n, p, ara[501], h, e;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &p);
        h = e = 0;
        for(i=0;i<n;i++){
            scanf("%d", &ara[i]);
            if(ara[i]>=p/2) e++;
            else if(ara[i]<=p/10) h++;
        }
        if(h==2&&e==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
