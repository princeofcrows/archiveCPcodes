//prince_of_crows
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
string star[200000], str, str1, str2;
long long ara[100005], ara2[100005], ara3[50005];
vector <long long> y;
vector <long long> z;
vector <long long> ya;
vector <long long> za;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> n >> m >> k >> x >> s;
    for(i=0;i<m;i++){
        cin >> a;
        y.push_back(a);
    }
    for(i=0;i<m;i++){
        cin >> a;
        ya.push_back(a);
    }
    for(i=0;i<k;i++){
        cin >> a;
        z.push_back(a);
        if(i>0) z[i] = max(z[i-1], z[i]);
    }
    for(i=0;i<k;i++){
        cin >> a;
        za.push_back(a);
    }
    t = 0;
    ans = n*x;
    for(i=0;i<m;i++){
        a = y[i];
        b = ya[i];
        if(b>s) continue;
        c = upper_bound(za.begin(), za.end(), s-b)-za.begin();
        c--;
        if(c!=-1){
            d = max(n-z[c], t);
            j = d*a;
            ans = min(ans, j);
        }
        else{
            j = n*a;
            ans = min(ans, j);
        }
    }
    for(i=0;i<k;i++){
        a = z[i];
        b = za[i];
        if(b>s) continue;
        d = max(n-a, t);
        j = d*x;
        ans = min(ans, j);
    }
    cout << ans;
    return 0;
}














