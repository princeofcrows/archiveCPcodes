#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> g[100005];
int ara[100005];
bool vis[100005];
stack <int> stk;

void dfs(int u, int par){
    if(vis[u]) return;
    vis[u] = 1;
    int a = 0;
    for(int i=0;i<g[u].size();i++){
        if(g[u][i]!=par) dfs(g[u][i], u);
    }
    vector <int> x;
    for(int i=0;i<g[u].size();i++){
        if(g[u][i]!=par) x.push_back(ara[g[u][i]]);
    }
    sort(x.rbegin(), x.rend());
    for(int i=0;i<x.size();i++){
        a = max(x[i]+i+1, a);
    }
    x.clear();
    ara[u] = a;
    return ;
}

int main(){
    //freopen("in.txt", "r", stdin);
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        while(cin>>a){
            if(!a) break;
            g[i].push_back(a);
            g[a].push_back(i);
        }
    }
    int t;
    cin >> t;

    memset(vis, false, sizeof vis);
    dfs(t, -1);
    /*for(int i=1;i<=n;i++){
        cout << i <<": "<<ara[i] <<endl;
    }*/
    cout << ara[t];
    return 0;
}













