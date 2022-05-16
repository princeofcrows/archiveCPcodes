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
priority_queue <pair <long long, long long>, vector <pair <long long, long long> >, greater <pair <long long, long long> > > fr[5];
priority_queue <pair <long long, long long>, vector <pair <long long, long long> >, greater <pair <long long, long long> > > bc[5];
bool vis[200005];
pair <long long, long long> tp;
pair <long long, long long> tp1;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        cin >> a;
        fr[a].push({ara[i], i});
    }
    for(i=0;i<n;i++){
        cin >> b;
        bc[b].push({ara[i], i});
    }
    cin >> m;
    memset(vis, true, sizeof vis);
    for(i=0;i<m;i++){
        cin >> a;
        tp = {9999999999, 999999};
        tp1 = {9999999999, 999999};
        while(!fr[a].empty()&&!vis[fr[a].top().second]){
            fr[a].pop();
        }
        while(!bc[a].empty()&&!vis[bc[a].top().second]){
            bc[a].pop();
        }
        if(fr[a].empty()&&bc[a].empty()){
            cout << -1 <<" ";
            continue;
        }
        if(!fr[a].empty())tp = fr[a].top();
        if(!bc[a].empty())tp1 = bc[a].top();
        if(tp.first<=tp1.first){
            vis[tp.second] = false;
            cout << tp.first <<" ";
            fr[a].pop();
        }
        else{
            vis[tp1.second] = false;
            cout << tp1.first <<" ";
            bc[a].pop();
        }
    }
    return 0;
}











