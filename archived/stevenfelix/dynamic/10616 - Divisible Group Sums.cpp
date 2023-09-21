
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

long long ara[200005], sz[200005];

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

long long ara2[200005], dp[205][205][15];
long long m, d, n;

long long knap(long long i, long long sum, long long m){
    if(m==0){
        if(sum%d==0) return 1;
        else return 0;
    }
    if(i>=n) return 0;
    if(dp[i][sum][m]!=-1) return dp[i][sum][m];
    long long res1 = knap(i+1, (sum+ara2[i])%d, m-1);
    long long res2 = knap(i+1, sum, m);
    return dp[i][sum][m] = res1+res2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, mn, l, q;
    a = 1;
    while(cin >> n >> q){
        if(n==0&&q==0) break;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        cout << "SET "<<a++<<":\n";
        b= 1;
        while(q--){
            cin >> d >> m;
            for(i=0;i<n;i++){
                ara2[i] = ara[i]%d;
            }
            memset(dp, -1, sizeof dp);
            ans = knap(0, 0, m);
            cout <<"QUERY "<<b++<<": "<<ans << endl;
        }
    }
    return 0;
}















