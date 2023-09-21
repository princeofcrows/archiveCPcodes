//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;
long long mod;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, n;
    cin >> t;
    mod = 1000000007;
    while(t--){
        cin >> a >> b >> c;
        x.clear(); y.clear(); z.clear();
        for(i=0;i<a;i++){
            cin >> temp;
            x.push_back(temp);
        }
        for(i=0;i<b;i++){
            cin >> temp;
            y.push_back(temp);
        }
        for(i=0;i<c;i++){
            cin >> temp;
            z.push_back(temp);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        sort(z.begin(), z.end());
        ara[0] = 0;
        for(i=0;i<a;i++){
            ara[i+1] = ara[i]+x[i];
            ara[i+1]%=mod;
        }
        ara2[0] = 0;
        for(i=0;i<c;i++){
            ara2[i+1] = ara2[i]+z[i];
            ara2[i+1]%=mod;
        }
        ans = 0;
        for(i=0;i<y.size();i++){
            n = upper_bound(x.begin(), x.end(), y[i]) - x.begin();
            m = upper_bound(z.begin(), z.end(), y[i]) - z.begin();
            //cout << n <<" "<<m<<endl;
            j = (ara[n]+y[i]*(n))%mod;
            l = (ara2[m]+y[i]*(m))%mod;
            ans += (j*l)%mod;
            ans%=mod;
        }
        cout << ans%mod <<endl;
    }
    return 0;
}







