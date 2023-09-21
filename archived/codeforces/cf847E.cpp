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
vector <pair <int, int> > ab;
vector <int> g[105];
int ara[3][100005], le;

int dp(int i, int ans, int pos){
    if(i==str.length()) return 0;
    if(ara[pos][i]!=-1) return ara[pos][i];
    if(str[i]=='P'){
        if(pos==0) int ret = min(dp(i, ans, 1), dp(i, ans, 2));
        else{
            int ret = 0;
            for(j=i;j>=0;j--){
                if(str[j]==-1)
            }
        }
    }
    else{
        return ara[pos][i] = dp(i+1, ans, pos);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> str;
    return 0;
}





















