
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

vector < vector < pair <long long, long long> > > graph(1005);
vector < vector <long long> > catfood(1005);
vector <long long> dis(1005, INT_MAX);
bool vis[100005];
long long n, m, k;
void dijsktra(){
    priority_queue < pair <long, long>, vector < pair <long long, long long> >, greater <pair <long long, long long> > > q;
    pair <long long, long long> temp;
    dis[1] = 0;
    temp.first = 1;
    temp.second = 0;
    q.push(temp);
    while(!q.empty()){
        temp = q.top();
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx;
    cin >> n >> m >> k;
    for(i=0;i<n;i++){
        cin >> t;
        while(t--){
            cin >> temp;
            catfood[i].push_back(temp);
        }
    }
    for(i=0;i<m;i++){
        cin >> a >> b >> t;
        graph[a].push_back({b, t});
        graph[b].push_back({a, t});
    }
    cout << ans;
    return 0;
}















