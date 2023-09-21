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
vector < vector <long long> > graph(100005);
int vis[100005];
int edge[100005];
stack <long long> stk;
queue <long long> q;

void dfs(long long u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        dfs(graph[u][i]);
    }
    stk.push(u);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, mn;
    cin >> n >> m;
    memset(edge, false, sizeof edge);
    while(m--){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        edge[a] = edge[b] = true;
    }
    memset(vis, false, sizeof vis);
    for(i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }
    c = d = 0;
    memset(vis, -1, sizeof vis);
    while(!stk.empty()){
        a = stk.top();
        if(vis[a]==-1&&edge[a]){
            q.push(a);
            vis[a] = 0;
            c++;
        }
        stk.pop();
        while(!q.empty()){
            a = q.front();
            q.pop();
            for(i=0;i<graph[a].size();i++){
                if(vis[graph[a][i]]==-1){
                    if(vis[a]==0){
                        vis[graph[a][i]] = 1;
                        d++;
                    }
                    else{
                        vis[graph[a][i]] = 0;
                        c++;
                    }
                    q.push(graph[a][i]);
                }
                else{
                    if(vis[a]==vis[graph[a][i]]){
                        cout << -1;
                        return 0;
                    }
                }
            }
        }
    }
    cout << c <<endl;
    for(i=1;i<=n;i++) if(vis[i]==0) cout << i <<" ";
    cout << endl;
    cout << d <<endl;
    for(i=1;i<=n;i++) if(vis[i]==1) cout << i <<" ";
    cout << endl;
    return 0;
}











