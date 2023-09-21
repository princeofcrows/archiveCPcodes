#include <bits/stdc++.h>

using namespace std;
vector < vector <int> > graph(100005);
bool vis[100005];
stack <int> stk;
void toposort(int u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push(u);
}
void toposort2(int u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        toposort2(graph[u][i]);
    }
}
int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, k, l, m, t, ans, a, b;
    cin >> t;
    while(t--){
        cin >> n >> m;
        //cout << n <<" " <<m<<endl;
        for(i=0;i<=n;i++) graph[i].clear();
        for(i=0;i<m;i++){
            cin >> a >> b;
            graph[a].push_back(b);
        }
        memset(vis, false, sizeof vis);
        for(i=1;i<=n;i++){
            if(vis[i]==false){
                toposort(i);
            }
        }
        ans = 0;
        memset(vis, false, sizeof vis);
        while(!stk.empty()){
            j = stk.top();
            stk.pop();
            if(vis[j]==false){
                ans++;
                toposort2(j);
            }
        }
        cout << ans <<endl;
    }
    return 0;
}


