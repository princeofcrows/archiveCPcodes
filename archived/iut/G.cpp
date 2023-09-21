#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
priority_queue <pii, vector<pii>, greater<pii>> q;
int g[305][305];
int MC[1005], n, m;
int ans;
string str;
int pc[305];
int pcm[305];
int prc[305];

int main(){
    freopen("in.txt", "r", stdin);
    int t, a, b, c, e, i, y, j, cs;
    cs = 1;
    scanf("%d", &e);
    while(e--){
        scanf("%d%d%d", &n, &m, &c);
        memset(g, 0, sizeof g);
        memset(pc, 0, sizeof pc);
        for(i=0;i<c;i++){
            scanf("%d%d", &a, &b);
            g[a][b] = 1;
        }
        ans = 0;
        for(i=1;i<=n;i++){
            a = 0;
            b = 0;
            memset(prc, 0, sizeof prc);
            for(j=1;j<=m;j++){
                if(g[i][j]){
                    if(pc[j-1]-prc[j-1]>=1){
                        a++;
                    }
                    else{
                        b++;
                        ans++;
                    }
                }
                prc[j] = pc[j-1]+b;
            }
            for(j=1;j<=m;j++){
                pc[j] = prc[j];
            }
        }
        printf("Case %d: %d\n", cs++, ans);
    }
    return 0;
}





















