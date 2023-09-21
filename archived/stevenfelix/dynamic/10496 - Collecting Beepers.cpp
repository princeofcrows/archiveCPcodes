
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

long long dp[1<<15][15];

long long dist[25][25], n;

long long ts(long long mask, long long atp){
    long long o = 1;
    if(mask==(o<<(n+1))-1) return dist[atp][0];
    long long ret = dp[mask][atp];
    if(ret!=-1) return ret;
    ret = 9999999999999;
    for(long long i=0;i<=n;i++){
        if(!(mask&(o<<i))){
            ret = min(ret, ts((mask|(o<<i)), i)+dist[atp][i]);
        }
    }
    return dp[mask][atp] = ret;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, mn, d, l;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cin >> ara[0] >> ara2[0];
        cin >> n;
        for(i=1;i<=n;i++){
            cin >> ara[i] >> ara2[i];
        }
        for(i=0;i<=n;i++){
            for(j=0;j<=n;j++){
                dist[i][j] = abs(ara[i]-ara[j])+abs(ara2[i]-ara2[j]);
            }
        }
        memset(dp, -1, sizeof dp);
        cout <<"The shortest path has length "<<ts(0, 0)<<endl;
    }
    return 0;
}















