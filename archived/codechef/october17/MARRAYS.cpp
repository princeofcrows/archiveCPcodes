#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define f1 first
#define s2 second
#define MX 1000005
#define inf 999999999999999
vector <ll> g[MX];
vector < pair <ll, ll> > gp[MX];
vector <ll> dp[MX];
ll n;

void cl(){
    ll i, j;
    for(i=0;i<n;i++){
        g[i].clear();
        dp[i].clear();
        gp[i].clear();
    }
}

ll rec(ll i, ll j){
    if(i==n) return 0;
    ll a, b, ans;
    if(dp[i-1][j]!=-1) return dp[i-1][j];
    ans = 0;
    for(a=0;a<gp[i].size();a++){
        ans = max(ans, i*abs(g[i-1][j]-g[i][gp[i][a].f1])+rec(i+1, gp[i][a].s2));
        ans = max(ans, i*abs(g[i-1][j]-g[i][gp[i][a].s2])+rec(i+1, gp[i][a].f1));
    }
    return dp[i-1][j] = ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    ll i, j, t, a, m, ans, b, l, h, c;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        for(i=0;i<n;i++){
            scanf("%lld", &m);
            for(j=0;j<m;j++){
                scanf("%lld", &a);
                g[i].push_back(a);
                dp[i].push_back(-1);
            }
        }
        for(i=0;i<n;i++){
            a = inf;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]<a){
                    a = g[i][j];
                    m = j;
                }
            }
            l = -1;
            h = -1;
            c = inf;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]==a){
                    b = j+(ll)g[i].size()-1;
                    if(b>=g[i].size()) b -= (ll)g[i].size();
                    if(c>g[i][b]){
                        l = b;
                        h = j;
                        c = g[i][b];
                    }
                }
            }
            if(g[i].size()==1) gp[i].push_back({m, m});
            else gp[i].push_back({l, h});
            l = -1;
            h = -1;
            c = 0;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]==a){
                    b = j+(ll)g[i].size()-1;
                    if(b>=g[i].size()) b -= (ll)g[i].size();
                    if(c<g[i][b]){
                        l = b;
                        h = j;
                        c = g[i][b];
                    }
                }
            }
            if(g[i].size()==1) gp[i].push_back({m, m});
            else gp[i].push_back({l, h});

            a = 0;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]>a){
                    a = g[i][j];
                    m = j;
                }
            }
            l = -1;
            h = -1;
            c = inf;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]==a){
                    b = j+(ll)g[i].size()-1;
                    if(b>=g[i].size()) b -= (ll)g[i].size();
                    if(c>g[i][b]){
                        l = b;
                        h = j;
                        c = g[i][b];
                    }
                }
            }
            if(g[i].size()==1) gp[i].push_back({m, m});
            else gp[i].push_back({l, h});
            l = -1;
            h = -1;
            c = 0;
            for(j=0;j<g[i].size();j++){
                if(g[i][j]==a){
                    b = j+(ll)g[i].size()-1;
                    if(b>=g[i].size()) b -= (ll)g[i].size();
                    if(c<g[i][b]){
                        l = b;
                        h = j;
                        c = g[i][b];
                    }
                }
            }
            if(g[i].size()==1) gp[i].push_back({m, m});
            else gp[i].push_back({l, h});
        }
        ans = 0;
        for(i=0;i<gp[0].size();i++){
            //cout << i <<" " << b << endl;
            ans = max(ans, rec(1, gp[0][i].f1));
            ans = max(ans, rec(1, gp[0][i].s2));
        }
        printf("%lld\n", ans);
        cl();
    }
    return 0;
}



