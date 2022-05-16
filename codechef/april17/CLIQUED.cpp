/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
vector < vector <pii> > graph(100005);
ll vis[100005], n, k, s, d,m ;

priority_queue <pii, vector<pii>, greater<pii> > q;
pii top;

void dijkstra(){
    for(int i=1;i<=n;i++)
        vis[i] = 9999999999999999;

    vis[s] = 0;
    q.push({0, s});
    while(!q.empty()){
        top = q.top();
        q.pop();
        if(top.first==vis[top.second]){
            for(int i=0;i<graph[top.second].size();i++){
                if(vis[graph[top.second][i].first]>vis[top.second]+graph[top.second][i].second){
                    vis[graph[top.second][i].first]=vis[top.second]+graph[top.second][i].second;
                    q.push({vis[graph[top.second][i].first], graph[top.second][i].first});
                }
            }
        }
    }
    if(s>k){
        long long dis, ind;
        dis = 9999999999999999;
        for(int i=1;i<=k;i++){
            if(vis[i]<dis){
                ind = i;
                dis = vis[i];
            }
        }
        for(int i=1;i<=k;i++){
            if(vis[i]>dis+d){
                vis[i] = dis+d;
                q.push({vis[i], i});
            }
        }
    }
    if(s<=k){
        for(int i=1;i<=k;i++) {
            if(i==s) continue;
            if(vis[i]>d){
                vis[i] = d;
                q.push({d, i});
            }
        }
    }
    while(!q.empty()){
        top = q.top();
        q.pop();
        if(top.first==vis[top.second]){
            for(int i=0;i<graph[top.second].size();i++){
                if(vis[graph[top.second][i].first]>vis[top.second]+graph[top.second][i].second){
                    vis[graph[top.second][i].first]=vis[top.second]+graph[top.second][i].second;
                    q.push({vis[graph[top.second][i].first], graph[top.second][i].first});
                }
            }
        }
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld%lld%lld%lld", &n, &k, &d, &m, &s);
        while(m--){
            scanf("%lld%lld%lld", &a, &b, &c);
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }
        dijkstra();
        for(i=1;i<=n;i++) printf("%lld ", vis[i]);;
        printf("\n");
        vector < vector <pii> > newg(100005);
        swap(newg, graph);
    }
    return 0;
}















