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
long long ara[1000005], ara2[200005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    cin >> str;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n;i++){
        if(!dat[str[i]]){
            dat[str[i]] = i+1;
            dat2[str[i]] = i+1;
            str1+=str[i];
        }
        else{
            dat2[str[i]] = i+1;
        }
    }
    for(i=0;i<str1.length();i++){
        ara[dat[str1[i]]]++;
        ara[dat2[str1[i]]+1]--;
    }
    for(i=1;i<=n;i++){
        ara[i] = ara[i-1]+ara[i];
    }
    for(i=1;i<=n;i++){
        if(ara[i]>k){
            cout <<"YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}













