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
long long ara[101];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
map <char, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n;
        ans = 0;
        j = 0;
        for(i=1;i*i<=n;i++){
            ans += (n/i-n/(i+1))*i;
        }
        for(i=1;i*i<=n;i++){
            if(n/i!=i) ans += n/i;
        }
        cout << ans << endl;
    }
    return 0;
}







