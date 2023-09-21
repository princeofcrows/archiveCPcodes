
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

long long ara[200005], ara2[200005];

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

long long dp[50][305][305], n, m;

long long coinnum(long long i, long long re, long long im){
    long long res = re*re+im*im;
    if(res==m*m) return 0;
    if(res>m*m) return 999999999;
    if(i>=n) return 99999999;
    if(dp[i][re][im]!=-1) return dp[i][re][im];
    return dp[i][re][im] = min(coinnum(i+1, re+ara[i], im+ara2[i])+1, min(coinnum(i, re+ara[i], im+ara2[i])+1, coinnum(i+1, re, im)));
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, mn, d, l;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=0;i<n;i++){
            cin >> ara[i] >> ara2[i];
        }
        memset(dp, -1, sizeof dp);
        a = coinnum(0, 0, 0);
        if(a==99999999) cout <<"not possible" <<endl;
        else cout <<a<<endl;
    }
    return 0;
}















