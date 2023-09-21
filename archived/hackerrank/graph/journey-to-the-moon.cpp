
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
//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <long long> > graph(100005);
bool vis[100005];
long long pep, rec;
void dfs(long long u){
    if(vis[u]) return;
    vis[u] = true;
    pep++; rec++;
    long long i;
    for(i=0;i<graph[u].size();i++){
        dfs(graph[u][i]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    memset(vis, false, sizeof vis);
    pep = 0;
    ans = 0;
    for(i=0;i<n;i++){
        if(vis[i]==false){
            rec = 0;
            dfs(i);
            //cout << rec <<" "<<pep <<" "<< i<<endl;
            ans+=(rec*(n-pep));
        }
    }
    cout << ans;
    return 0;
}















