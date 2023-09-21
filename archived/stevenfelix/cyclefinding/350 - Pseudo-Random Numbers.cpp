#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int z, i, m, l, a, j, ans, cs;
    cs = 1;
    while(scanf("%d%d%d%d", &z, &i, &m, &l)){
        if(!z&&!i&&!m&&!l) break;
        int ara[m];
        memset(ara, 0, sizeof ara);
        j = 0;
        while(1){
            j++;
            a = (z*l + i)%m;
            if(ara[a]!=0){
                ans = j-ara[a];
                break;
            }
            ara[a] = j;
            l = a;
        }
        printf("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
