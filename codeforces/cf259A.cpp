//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

string star[200000], str;
long long ara[200005];
bool vis[10];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    for(i=0;i<8;i++){
        cin >> star[i];
    }
    string str1 = "WBWBWBWB";
    string str2 = "BWBWBWBW";
    str = star[0];
    memset(vis, false, sizeof vis);
    for(i=0;i<8;i++){
        str = star[i];
        if(str==str1||str==str2) vis[i] = true;
    }
    for(i=0;i<8;i++){
        if(!vis[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}




















