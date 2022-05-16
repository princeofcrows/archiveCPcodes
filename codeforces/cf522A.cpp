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

string star[200000], str, str1, str2;
long long ara[100], ara2[100], ara3[100], ara4[100], ara5[100];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <string, long long> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> str >> str1 >> str2;
        for(j=0;j<str.length();j++) str[j] = tolower(str[j]);
        for(j=0;j<str2.length();j++) str2[j] = tolower(str2[j]);

        if(dat[str2]){
            dat[str] = dat[str2]+1;
            ans = max(dat[str], ans);
        }
        else{
            dat[str] = 2;
            ans = max(dat[str], ans);
        }
    }
    cout << ans;
    return 0;
}
















