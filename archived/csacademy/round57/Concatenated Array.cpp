#include <bits/stdc++.h>
using namespace std;
string str;
#define int long long

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, n, k, c, ans, f, l;
    cin >> n >> k >> str;
    c = 0;
    for(i=0;i<n;i++){
        if(str[i]=='1'){
            c = 1;
            break;
        }
    }
    if(!c){
        cout << n*k;
        return 0;
    }
    i = f = ans = l = 0;
    while(str[i]!='1'){
        i++;
        f++;
    }
    for(i=0;i<n;i++){
        if(str[i]=='1'){
            l = 0;
            continue;
        }
        l++;
        ans = max(ans, l);
    }
    if(k==1) cout << ans;
    else cout << max(ans, f+l);
    return 0;
}
