
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

long long ara2[200005];
long long data[155][155], dp[305][305];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d, l;
    cin >> t;
    while(t--){
        cin >> n;
        memset(dp, 0, sizeof dp);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cin >> dp[i][j];
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dp[i][j+n] = dp[i][j];
                dp[i+n][j] = dp[i][j];
                dp[i+n][j+n] = dp[i][j];
            }
        }
        for(i=1;i<=2*n;i++){
            for(j=1;j<=2*n;j++){
                dp[i][j] += (dp[i][j-1]);
            }
        }
        for(i=1;i<=2*n;i++){
            for(j=1;j<=2*n;j++){
                dp[i][j] += (dp[i-1][j]);
            }
        }
        ans = -9999999999999;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=j;k<=j+n;k++){
                    for(l=i;l<=i+n;l++){
                        temp = dp[i][j]-dp[i][k]+dp[l][k]-dp[l][j];
                        ans = max(ans, temp);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}















