#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int g[1005][1005];
queue <pii> q;
vector <piii> v;

int32_t main(){
    read();
    //write();
    //fst;
    int n, m;
    while(si(n)!=EOF){
        si(m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                si(g[i][j]);
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i+1 < n && j+1 < m) {
                    int cnt = 1 + (g[i+1][j] == g[i][j])
                     + (g[i+1][j+1] == g[i][j])
                     + (g[i][j+1] == g[i][j]);

                    if(cnt == 4){
                        v.pb({g[i][j], {i + 1, j + 1}});
                        for(int kk=i;kk<i+2;kk++)
                            for(int ll=j;ll<j+2;ll++)
                                g[kk][ll] = 0;
                        q.push({i, j});
                    }
                }
            }
        }

        while(!q.empty()) {
            pii p = q.front();
            q.pop();

            int i = p.fi;
            int j = p.se;

            //cout << i <<" " << j << endl;
            for(int k=max(0, i-1);k<=min(i+1, n-2);k++) {
                for(int l=max(0, j-1);l<=min(j+1, m-2);l++) {
                    set <int> st;
                    for(int kk=k;kk<k+2;kk++)
                        for(int ll=l;ll<l+2;ll++)
                            if(g[kk][ll] != 0) st.insert(g[kk][ll]);

                    if(st.size() == 1) {
                        q.push({k, l});
                        v.pb({*st.begin(), {k + 1, l + 1}});
                        for(int kk=k;kk<k+2;kk++)
                            for(int ll=l;ll<l+2;ll++)
                                g[kk][ll] = 0;
                    }
                }
            }
        }

        bool f = true;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(g[i][j] != 0) f = false;
            }
        }

        if(!f) cout << -1 << endl;
        else {
            cout << v.size() << endl;
            reverse(v.begin(), v.end());
            for(auto p: v) {
                printf("%d %d %d\n", p.se.fi, p.se.se, p.fi);
            }
        }

        v.clear();
    }
    return 0;
}
