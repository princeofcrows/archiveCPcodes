
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

long long dp[10][10];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d, l;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> dp[i][j];
            }
        }
        long long per[n];
        for(i=0;i<n;i++) per[i] = i;
        ans = 0;
        mx = 99999999999999;
        while(1){
            ans = 0;
            for(j=0;j<n;j++){
                ans+=dp[j][per[j]];
            }
            mx = min(mx, ans);
            next_permutation(per, per+n);
            for(i=0;i<n;i++){
                if(per[i]!=i) break;
            }
            if(i==n) break;
        }
        cout << mx << endl;
    }

    return 0;
}















