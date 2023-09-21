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

string star[200000], str, str1, str2, str3;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <string> dat;
long long n, b;

long long val(long long a){
    return (n*a-b*a*a);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> n >> b;
        l = 0;
        h = n/b;
        for(i=0;i<500;i++){
            a = (l*2 + h)/3;
            c = (l + 2*h)/3;
            if(val(a)>val(c)) h = c;
            else l = a;
        }
        ans = 0;
        c = 0;
        a = (n)/b;
        for(i=max(c, l-100);i<=min(l+100, a);i++){
            ans = max(ans, val(i));
        }
        for(i=max(c, h-100);i<=min(h+100, a);i++){
            ans = max(ans, val(i));
        }
        cout << ans << endl;
    }
    return 0;
}













