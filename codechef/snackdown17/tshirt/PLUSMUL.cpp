//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair  <long long, long long>  > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005], ara3[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

map <long long, long long> dat;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, g ,s, k;
    long long mod = 1000000007;
    cin >> t;
    while(t--){
        cin >> n;
        a = 0;
        c = 1;
        for(i=0;i<n;i++){
            cin >> ara[i];
            ara[i]%=mod;
            a+=ara[i];
            a%=mod;
            c*=ara[i];
            c%=mod;
        }
        ans = 0;
        ara2[0] = ara[0];
        b = 1;
        for(i=1;i<n;i++){
            ara2[i] = ara2[i-1]*b+ara[i]*ara2[i-1];
            ara2[i]%=mod;
            b*=2;
            b%=mod;
        }
        ara3[n-1] = ara[n-1];
        b = 1;
        for(i=n-2;i>=0;i--){
            ara3[i] = ara3[i+1]*b+ara[i]*ara3[i+1];
            ara2[i]%=mod;
            b*=2;
            b%=mod;
        }
        ans+=(ara2[n-1]+ara3[0]);
        ans/=2;
        cout << (ans%mod)%mod << endl;
    }
    return 0;
}




















