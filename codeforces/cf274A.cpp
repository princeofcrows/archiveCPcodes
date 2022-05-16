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
long long ara[200005], ara2[200005];
vector < pair < long long, pair <long long, long long> > > ab;
map <char, int> dat;
bool flag;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    sort(ara, ara+n);
    ans = 0;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n;i++){
        if(ara2[i]) continue;
        a = ara[i];
        b = 1;
        ara2[i] = 1;
        while(1){
            a = a*k;
            j = lower_bound(ara, ara+n, a)-ara;
            if(j==n||ara[j]!=a||ara2[j]) break;
            ara2[j] = 1;
            b++;
        }
        ans += b/2+b%2;
    }
    cout << ans;
    return 0;
}













