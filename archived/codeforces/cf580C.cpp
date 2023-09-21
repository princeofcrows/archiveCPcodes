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

bool flag[100005], vis[100005];
vector < vector <long long> > graph(100005);
long long m, ans;
long long cats[100005];

void dfs(long long u, long long p){
	if(vis[u]==true){
		return;
	}
	vis[u] = true;
	for(int i=0;i<graph[u].size();i++){
		if(vis[graph[u][i]]) continue;
		long long temp = cats[u];
		if(temp<=m){
			if(flag[graph[u][i]]==true) temp++;
			else temp = 0;	
		}
		cats[graph[u][i]] = temp;
		dfs(graph[u][i], u);
	}
	if(graph[u].size()==1&&graph[u][0]==p&&cats[u]<=m){
		//cout << u << endl;
		if(u!=1)ans++;
		return;
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
    long long int n, temp, t, j, i, h, h2, m2, c, a, b, mx, d;
    cin >> n >> m;
    for(i=1;i<=n;i++){
		cin >> temp;
		if(temp==0) flag[i] = false;
		else flag[i] = true;
    }
    for(i=1;i<n;i++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
    }
    memset(vis, false, sizeof vis);
    ans = 0;
    cats[1] = (int)flag[1];
    dfs(1, 0);
    cout << ans;
    return 0;
}












