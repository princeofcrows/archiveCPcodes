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
long long ara[2006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dig[400][800];


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    ara[0] = ara[1] = 1;
    memset(dig, 0, sizeof dig);
    for(i=2;i<=20;i++){
        ara[i] = ara[i-1]*i;
    }
    cin >> t;
    d = 1;
    while(t--){
        cin>>str;
        ans = ara[str.length()];
        char ch;
        for(i=0;i<26;i++){
            ch = (char)('A'+i);
            a = 0;
            for(j=0;j<str.length();j++){
                if(str[j]==ch) a++;
            }
            ans/=ara[a];
        }
        cout << "Data set "<<d++<<": "<<ans << endl;
    }
    return 0;
}
















