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
vector < vector <long long> > pom(105);

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

bool vis[105];
long long cnt[105], np, n, m;

void dfs(long long u, long long nd){
    if(vis[u]==true){
        if(u==nd&&cnt[u]==0){
            np++;
            cnt[u]++;
        }
        return;
    }
    vis[u] = true;
    for(int i=0; i<pom[u].size(); i++){
        dfs(pom[u][i], nd);
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i,h, h2, m2, c, a, b, mx, d, a2, d2, k2, k;
    scanf("%lld", &t);
    j = 1;
    while(t--){
        scanf("%lld%lld", &n, &m);
        for(i=0;i<=n;i++){
            pom[i].clear();
        }
        x.clear();
        for(i=0;i<m;i++){
            scanf("%lld%lld", &a, &b);
            pom[a].push_back(b);
        }
        np = 0;
        memset(cnt, 0, sizeof cnt);
        for(i=1; i<=n; i++){
            memset(vis, false, sizeof vis);
            dfs(i, i);
        }
        printf("Case %lld: %lld\n", j, n -np);
        j++;
    }
    return 0;
}


















