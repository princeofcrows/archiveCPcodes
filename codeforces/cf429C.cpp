#include <bits/stdc++.h>
using namespace std;
#define MX 100005

vector <int> g[MX];
vector <int> res;
bool vis[MX];
int ans, exb[MX], dib[MX];


void dfs(int u, int evn, int od, int lyr){
    if(vis[u]) return;
    vis[u] = true;
    if(lyr%2){
        if(od){
            if(exb[u]==dib[u]) {
                ans++;
                od = 1-od;
                res.push_back(u);
            }
        }
        else{
            if(exb[u]!=dib[u]){
                ans++;
                od = 1-od;
                res.push_back(u);
            }
        }
    }
    else{
        if(evn){
            if(exb[u]==dib[u]) {
                ans++;
                evn = 1-evn;
                res.push_back(u);
            }
        }
        else{
            if(exb[u]!=dib[u]){
                ans++;
                evn = 1-evn;
                res.push_back(u);
            }
        }
    }
    lyr++;
    for(int i=0;i<g[u].size();i++){
        dfs(g[u][i], evn, od, lyr);
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    int n, a, b, i;
    scanf("%d", &n);
    for(i=0;i<n-1;i++){
        scanf("%d%d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=1;i<=n;i++){
        scanf("%d", &exb[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d", &dib[i]);
    }
    ans = 0;
    dfs(1, 0, 0, 0);
    printf("%d\n", ans);
    for(i=0;i<res.size();i++){
        printf("%d\n", res[i]);
    }
    return 0;
}









