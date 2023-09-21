#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll ans;

void rec(ll a, ll b){
    if(b==0) return;
    if(a==1){
        ans+=b;
        return;
    }
    if(a>=b){
        ans+=a/b;
        a = a%b;
    }
    rec(b, a);
}

int main(){
    ll a, b;
    cin >> a >> b;
    ans = 0;
    rec(a, b);
    cout << ans;
    return 0;
}
