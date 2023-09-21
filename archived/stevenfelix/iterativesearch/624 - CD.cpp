
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

string str, str1, str2, star[100005];

long long ara[200005], ara2[200005], ara3[200005];
bool flagar[25];

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

long long dp[30], t, p;
bool flag[30];

long long track(long long i, long long n){
    if(n==t) return t;
    if(i==p) return n;
    long long ret1, ret2;
    ret1 = ret2 = 0;
    if(n+ara[i]<=t) ret1 = track(i+1, n+ara[i]);
    ret2 = track(i+1, n);
    return dp[i] = max(ret1, ret2);
}

void trkprnt(long long i, long long n, vector <long long> cds){
    if(n==0){
        x = cds;
        return;
    }
    if(i==p) return;

    trkprnt(i+1, n, cds);
    if(n-ara[i]>=0){
        cds.push_back(ara[i]);
        trkprnt(i+1, n-ara[i], cds);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, j, i, m, h, h2, m2, c, a, b, mx, k, d, l, n;
    while(cin >> t){
        cin >> p;
        for(i=0;i<p;i++){
            cin >> ara[i];
        }
        memset(flag, false, sizeof flag);
        ans = track(0, 0);
        vector <long long> tempo;
        trkprnt(0, ans, tempo);
        for(i=0;i<x.size();i++){
            cout << x[i] <<" ";
        }
        cout << "sum:"<<ans <<endl;
        x.clear();
    }
    return 0;
}















