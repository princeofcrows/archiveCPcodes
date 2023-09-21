
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
vector <long long> x;
vector <long long> y;

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

vector < vector <long long> > graph(105);
long long m, n, mx;
int color[105];

bool check(long long i){
    for(long long j=0;j<graph[i].size();j++){
        if(color[graph[i][j]]) return false;
    }
    return true;
}

void dfs(long long i){
    if(i>n){
        long long cnt = 0;
        for(long long j=1;j<=n;j++){
            if(color[j]){
                cnt++;
            }
        }
        if(cnt>mx){
            x.clear();
            for(long long j=1;j<=n;j++){
                if(color[j]) x.push_back(j);
            }
            mx = cnt;
            return;
        }
    }
    else{
        color[i] = 0;
        dfs(i+1);
        color[i] = 1;
        if(check(i)) dfs(i+1);
        color[i] = 0;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, k;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector < vector <long long> > tgraph(100005);
        swap(tgraph, graph);
        for(i=0;i<m;i++){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        mx = 0;
        dfs(1);
        cout << mx <<endl;
        for(i=0;i<x.size();i++){
            cout << x[i];
            if(i!=x.size()-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}















