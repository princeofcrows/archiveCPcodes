
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[100005];

long long ara[1000005], ara2[200005], ara3[200005];

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

string lon[100005], sml[100005], tsml[100005];

vector < vector <long long> > graph(100000);

long long dp[5][5], dp2[5][5];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, n;
    cin>>n;
    while(n--){
        c = 0;
        for(i=0;i<3;i++){
            cin >> str;
            for(j=0;j<3;j++){
                dp[i][j] = str[j]-'0';
                if(dp[i][j]==1) c++;
            }
        }
        if(c==0){
            cout << -1 << endl;
            continue;
        }
        ans = 0;
        while(1){
            c = 0;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    dp2[i][j] = 0;
                    if(i!=0) dp2[i][j] += dp[i-1][j];
                    if(j!=0) dp2[i][j] += dp[i][j-1];
                    if(i!=2) dp2[i][j] += dp[i+1][j];
                    if(j!=2) dp2[i][j] += dp[i][j+1];
                    dp2[i][j]=dp2[i][j]%2;
                }
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    dp[i][j] = dp2[i][j];
                    if(dp[i][j]==1) c++;
                }
            }
            ans++;
            if(!c) break;
        }
        cout << ans-1 << endl;
    }
    return 0;
}















