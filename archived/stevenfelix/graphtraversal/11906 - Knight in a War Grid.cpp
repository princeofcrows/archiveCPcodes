
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
long long grid[105][105];
long long o, e, r, c, m, n;

void dfs(long long a, long long b, long long dx[], long long dy[]){
    if(grid[a][b]) return;
    long long ans = 0;
    grid[a][b] = 1;
    for(long long i=0;i<2;i++){
        if(i==1&&dx[i-1]==0) continue;
        if(a+dx[i]>=r||a+dx[i]<0) continue;
        for(long long j=0;j<2;j++){
            if(b+dy[j]>=c||b+dy[j]<0) continue;
            if(j==1&&dy[j-1]==0) continue;
            if(grid[a+dx[i]][b+dy[j]]==-1) continue;
            dfs(a+dx[i], b+dy[j], dx, dy);
            ans++;
        }
    }
    if(n!=m){
        for(long long i=2;i<4;i++){
            if(a+dx[i]>=r||a+dx[i]<0) continue;
            if(i==3&&dx[i-1]==0) continue;
            for(long long j=2;j<4;j++){
                if(b+dy[j]>=c||b+dy[j]<0) continue;
                if(j==3&&dy[j-1]==0) continue;
                if(grid[a+dx[i]][b+dy[j]]==-1) continue;
                //cout << a <<" "<<b<<": "<<a+dx[i]<<" "<<b+dy[j]<<endl;
                dfs(a+dx[i], b+dy[j], dx, dy);
                ans++;
            }
        }
    }
    if(ans%2==1) o += 1;
    else e += 1;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, a, b, mx, k, s, d;
    cin >> t;
    d = 1;
    while(t--){
        cin>>r>>c>>m>>n;
        memset(grid, 0, sizeof grid);
        long long dx[] = {n, -n, m, -m};
        long long dy[] = {m, -m, n, -n};
        cin >> k;
        while(k--){
            cin >> a >> b;
            grid[a][b] = -1;
        }
        o = e = 0;
        dfs(0, 0, dx, dy);
        cout <<"Case "<<d++<<": "<< e <<" "<< o <<endl;
    }
    return 0;
}















