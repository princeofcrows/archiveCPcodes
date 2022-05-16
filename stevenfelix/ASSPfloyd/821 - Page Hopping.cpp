#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

ll arsz;
vector <ll> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

double adj[105][105];
map <ll, ll> dat;
void floyd(ll a){
    for(ll k=1;k<=a;k++){
        for(ll i=1;i<=a;i++){
            for(ll j=1;j<=a;j++){
                adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j] );
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, p, s, n, m;
    t = 1;
    for(i=0;i<101;i++)
        for(j=0;j<101;j++)
            adj[i][j] = 999999999999999;
    a = 1;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        if(dat[n]==0) dat[n] = a++;
        if(dat[m]==0) dat[m] = a++;
        adj[dat[n]][dat[m]] = 1;
        while(cin>>n>>m){
            if(n==0&&m==0) break;
            if(dat[n]==0) dat[n] = a++;
            if(dat[m]==0) dat[m] = a++;
            adj[dat[n]][dat[m]] = 1;
        }
        a--;
        for(i=1;i<=a;i++){
            adj[i][i] = 0;
        }
        floyd(a);
        double res = 0;
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                if(j!=i) res+=adj[i][j];
            }
        }
        printf("Case %lld: average length between pages = %.3lf clicks\n", t++, res/((a-1)*a*1.0));
        for(i=0;i<101;i++)
            for(j=0;j<101;j++)
                adj[i][j] = 999999999999999;
        dat.clear();
        a = 1;
    }
    return 0;
}















