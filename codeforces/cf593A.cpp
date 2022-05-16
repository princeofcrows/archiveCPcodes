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
long long ara[500005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <string> y;
map <string, long long> dat;
long long dp[10], sz;
bool pos, vis[30];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str;
        memset(vis, false, sizeof vis);
        a = 0;
        for(j=0;j<str.length();j++){
            if(!vis[str[j]-'a']) a++;
            vis[str[j]-'a'] = 1;
        }
        if(a<3){
            y.push_back(str);
        }
    }
    mx = 0;
    memset(ara, 0, sizeof ara);
    for(i=0;i<y.size();i++){
        memset(vis, false, sizeof vis);
        a = 0;
        for(j=0;j<y[i].length();j++){
            if(!vis[y[i][j]-'a']) a++;
            vis[y[i][j]-'a'] = 1;
        }
        ans = 0;
        for(j=0;j<y.size();j++){
            for(l=0;l<y[j].length();l++){
                if(!vis[y[j][l]-'a']) break;
            }
            if(l==y[j].length()) ans+=y[j].length();
        }
        mx = max(ans, mx);
        if(a==1){
            for(j=0;j<26;j++) if(vis[j]) ara[j] = max(ans, ara[j]);
        }
    }
    for(i=0;i<26;i++){
        for(j=0;j<26;j++){
            if(i==j) continue;
            mx = max(mx, ara[i]+ara[j]);
        }
    }
    cout << mx;
    return 0;
}














