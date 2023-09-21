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

long long ara[15], alp[27];

string str;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        cin >> str;
        n = str.length();
        memset(ara, 0, sizeof ara);
        memset(alp, 0, sizeof alp);
        for(i=0;i<n;i++){
            ara[str[i]-'0']++;
        }
        for(i=65;i<=90;i++){
            a = i%10;
            b = i/10;
            if(a==b){
                if(ara[a]>=2) alp[i-65] = 1;
            }
            else if(ara[a]&&ara[b]){
                alp[i-65] = 1;
            }
        }
        for(i=0;i<26;i++){
            if(alp[i]){
                cout << (char)('A'+i);
            }
        }
        cout << endl;
    }
    return 0;
}













