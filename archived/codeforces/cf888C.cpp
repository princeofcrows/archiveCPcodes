#include <bits/stdc++.h>
using namespace std;
#define MX 1005

int ara[MX];

string str;
vector <int> g[30];

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, ans, a, b;
    cin >> str;
    n = str.length();

    for(i=0;i<26;i++) g[i].push_back(0);

    for(i=0;i<n;i++){
        g[str[i]-'a'].push_back(i+1);
    }

    for(i=0;i<26;i++) g[i].push_back(n+1);

    a = 10000000;
    for(i=0;i<26;i++){
        b = 0;
        for(j=0;j<g[i].size();j++){
            b = max(b, g[i][j]-g[i][j-1]);
        }
        a = min(a, b);
    }
    cout << a;
    return 0;
}
