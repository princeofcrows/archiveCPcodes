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
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x[100005];
vector <long long> y;
map <char, bool> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n;
    cin >> str;
    ans = 0;
    dat['a'] = 1;
    dat['e'] = 1;
    dat['i'] = 1;
    dat['o'] = 1;
    dat['u'] = 1;
    for(i=0;i<str.length()-1;i++){
        if((dat[str[i]])&&(dat[str[i+1]])){
             ans++;
        }
    }
    cout << ans;
    return 0;
}





















