
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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

string str, str1, str2;

long long ara[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

vector < vector <long long> > graph(50005);
stack <long long> stk;
int vis[100005];
long long siz;

void toposort(long long u){
    if(vis[u]==1) return;
    vis[u] = 1;
    siz++;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push(u);
    vis[u] = 2;
}

void dfs(long long u){
    if(vis[u]==1) return;
    vis[u] = 1;
    for(int i=0;i<graph[u].size();i++){
        dfs(graph[u][i]);
    }
    vis[u] = 2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, a, b, mx, k, s, d, n;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a >> b;
            graph[a].push_back(b);
        }
        memset(vis, false, sizeof vis);
        temp = mx = a = 0;
        for(i=1;i<=n;i++){
            if(!vis[i]){
                siz = 0;
                toposort(i);
                if(siz>mx){
                    mx = siz;
                    a = stk.top();
                }
            }
        }

        cout <<"Case "<<d++<<": "<< a << endl;
        while(!stk.empty()) stk.pop();
        for(i=0;i<=n;i++) graph[i].clear();
    }
    return 0;
}















