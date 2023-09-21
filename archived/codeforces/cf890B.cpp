//princeofcrows
#include <bits/stdc++.h>
using namespace std;
int ara[200005], vis[200005];

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, a, l, n;
    cin >> n;
    memset(vis, -1, sizeof vis);
    for(i=1;i<=n;i++){
        cin >> ara[i];
        vis[ara[i]] = i;
    }
    a = 9999999;
    for(i=0;i<=200000;i++){
        if(vis[i]!=-1 && vis[i]<a){
            a = vis[i];
            l = i;
        }
    }
    cout << l;
    return 0;
}
