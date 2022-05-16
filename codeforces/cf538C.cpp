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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l, n, m;
    cin >> n >> m;
    cin >> ara[0] >> ara2[0];
    ans = ara2[0]+(ara[0]-1);
    for(i=1;i<m;i++){
        cin >> ara[i] >> ara2[i];
        a = ara[i]-ara[i-1];
        b = abs(ara2[i]-ara2[i-1]);
        if(a<b){
            cout << "IMPOSSIBLE";
            return 0;
        }
        c = max(ara2[i], ara2[i-1])+(a-b)/2;
        ans = max(c, ans);
    }
    c = ara2[i-1]+n-ara[i-1];
    cout << max(ans, c);
    return 0;
}













