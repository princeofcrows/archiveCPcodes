#include <bits/stdc++.h>
using namespace std;
long long ara[300005], ara2[300005];
vector <long long> g[100005];
int main(){
    //freopen("in.txt", "r", stdin);
    long long int i, j, n, a, b, c, ans, k, m, l;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> m;
        for(j=0;j<m;j++){
            cin >> a;
            g[i].push_back(a);
        }
    }
    return 0;
}
