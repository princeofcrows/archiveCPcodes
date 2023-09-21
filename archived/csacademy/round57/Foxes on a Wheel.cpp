#include <bits/stdc++.h>
using namespace std;
string str;
#define int long long
#define MX 100005
int ara[MX];
set <int> S;
set <int>::iterator it1;
set <int>::iterator it2;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, n, k, c, ans, f, l, a, b;
    cin >> n >> k ;
    l = 0;
    for(i=0;i<k;i++){
        cin >> ara[i];
    }
    sort(ara, ara+k);
    for(i=0;i<k;i++){
        cin >> c;
        S.insert(c);
    }
    S.insert(1000000);
    ans = 0;
    for(i=0;i<k;i++){
        a = ara[i] - 1;
        if(a<=0) a += n;
        b = ara[i] + 1;
        if(b>n) b = 1;
        it1 = S.lower_bound(a);
        it2 = S.lower_bound(b);
        if(*it1==a&&*it2!=b){
            ans++;
            S.erase(it1);
        }
        else if(*it1!=a&&*it2==b){
            ans++;
            S.erase(it2);
        }
        else if(*it1==a&&*it2==b){
            l++;
        }
    }
    //cout << ans << " ";
    cout << ans + (S.size()-l-1)*2 + l;
    return 0;
}













