//princ30fcr0w5
#include <bits/stdc++.h>
using namespace std;
int ara[200005], vis[200005];
map <int, int> mp;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, a, l, n;
    cin >> n;
    memset(vis, -1, sizeof vis);
    vis[0] = 1;
    a = 1;
    l = 2;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        if(vis[ara[i]]!=-1){
            vis[i] = vis[ara[i]];
            vis[ara[i]] = -1;
        }
        else{
            vis[i] = l++;
            a++;
        }
    }
    cout << a;
    return 0;
}
