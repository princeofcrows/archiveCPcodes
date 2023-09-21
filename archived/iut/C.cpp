#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
vector <pii> graph[1005];
priority_queue <pii, vector<pii>, greater<pii>> q;
ll vis[1005];

void dijkestra(ll sx, ll n, ll x){
    ll a, b, c, d;
    for(int i=1;i<=n;i++)
        vis[i] = 9999999999999999;
    vis[sx] = x;
    q.push({x, sx});
    pii top;
    while(!q.empty()){
        top = q.top();
        q.pop();
        a = top.first;
        b = top.second;
        if(a==vis[b]){
            for(int i=0;i<graph[b].size();i++){
                c = graph[b][i].first;
                d = graph[b][i].second;
                if(vis[c]>d&&vis[b]<=d){
                    vis[c]=d;
                    q.push({d, c});
                }
            }
        }
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    ll t, a, b, c, e, i, x, y;
    scanf("%lld", &e);
    for(i=1;i<=e;i++){
        scanf("%lld%lld%lld", &a, &b, &c);
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    scanf("%lld", &c);
    while(c--){
        scanf("%lld%lld%lld%lld", &a, &x, &b, &y);
        dijkestra(a, 1001, x);
        if(vis[b]<=y) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}





















