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

string star[200000], str, str1;
long long ara[28], ara2[28], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> str >> str1;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<str.length();i++){
        ara[str[i]-'a']++;
    }
    for(i=0;i<str1.length();i++){
        ara2[str1[i]-'a']++;
    }
    ans = 0;
    for(i=0;i<26;i++){
        if(ara2[i]&&!ara[i]){
            ans = -1;
            break;
        }
        ans += min(ara[i], ara2[i]);
    }
    cout << ans;
    return 0;
}















