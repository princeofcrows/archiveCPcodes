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
long long ara[105], ara2[200005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> k;
    cin >> str;
    memset(ara, 0, sizeof ara);
    a = 0;
    for(i=0;i<str.length();i++){
        ara[str[i]-'0']++;
        a+=(str[i]-'0');
    }
    b = a-k;
    if(b<0){
        b *= -1;
        ans = 0;
        for(i=0;i<=9;i++){
            while(ara[i]){
                if(b<=0) break;
                b -= (9-i);
                ara[i]--;
                ans++;
            }
            if(b<=0) break;
        }
        cout << ans;
        return 0;
    }
    else{
        cout << 0;
    }
    return 0;
}













