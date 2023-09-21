#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll MAX = 300000;
vector<ll> V;
string ans = "";

void gen(ll n)
{
    V.push_back(0);
    V.push_back(0);
    for(ll i=1; i<=n; i++){
        ll x = i*(i+1);
        x = x/2;
        V.push_back(x);
    }
}

void prnt(ll k)
{
    for(ll i=1; i<=k; i++) ans += "(";
    for(ll i=1; i<=k; i++) ans += ")";
}

void prnt_single(ll k)
{
    for(ll i=1; i<=k; i++){
        ans += "(";
        ans += ")";
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    ll n, k;
    scanf("%lld%lld", &n, &k);
    gen(n);
    bool flag = true;
    while(1){
        if(k == 0) break;
        if(k==2){
            ans+="(()())";
            n-=3;
            k-=2;
            if(n < 0){
                flag = false;
                break;
            }
            if(n == 0 && k != 0){
                flag = false;
                break;
            }
            if(k == 0) break;
            continue;
        }
        if(k==4){
            ans+="((())())";
            n-=4;
            k-=4;
            if(n < 0){
                flag = false;
                break;
            }
            if(n == 0 && k != 0){
                flag = false;
                break;
            }
            if(k == 0) break;
            continue;
        }
        ll idx = upper_bound(V.begin(), V.end(), k) - V.begin();
        idx--;
        k = k - V[idx];
        prnt(idx);
        n = n - idx;
        if(n < 0){
            flag = false;
            break;
        }
        if(n == 0 && k != 0){
            flag = false;
            break;
        }
        if(k == 0) break;
    }
    if(flag){
        prnt_single(n);
        cout << ans;
    }
    else cout << "Impossible";
    return 0;
}





