#include <bits/stdc++.h>
#define MX 100005
#define int long long
using namespace std;
string str, str1, str2;

int rev(int j){
    int k = 0;
    while(j){
        k = k*10 + j%10;
        j/=10;
    }
    return k;
}

int dl(int j, int p){
    int k = 1;
    while(j){
        k = k*10;
        k%=p;
        j/=10;
    }
    return k;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, m, r, p, ans;
    cin >> k >> p;
    j = 1;
    m = 1;
    ans = 0;
    for(i=0;i<k;i++){
        m = dl(j, p);
        l = rev(j);
        ans += ((j%p)*(m)+(l))%p;
        ans%=p;
        j++;
    }
    cout << ans%p;
    return 0;
}
