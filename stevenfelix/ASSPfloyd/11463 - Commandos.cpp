#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, str3;

ll arsz;
long long ara[10005], ara2[10005];
vector <string> star;
vector <string> as;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long graph[105][105];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, p, s, n, m;
    cin >> t;
    c = 1;
    while(t--){
        cin >> n >> m;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                graph[i][j] = 99999999999;
            }
        }
        for(i=0;i<n;i++){
            graph[i][i] = 0;
        }
        for(i=0;i<m;i++){
            cin >> a >> b;
            graph[a][b] = graph[b][a] = 1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    graph[j][k] = min(graph[j][k], graph[j][i]+graph[i][k]);
                }
            }
        }
        cin >> a >> b;
        ans = 0;
        for(i=0;i<n;i++){
            ans = max(graph[a][i]+graph[i][b], ans);
        }
        printf("Case %lld: %lld\n", c++, ans);
    }
    return 0;
}















