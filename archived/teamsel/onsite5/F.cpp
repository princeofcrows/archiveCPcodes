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

vector <string> star;
string str, s1, s2;
int dp[2001][2001];

void dfs(int a, int b, int i, string d){
    str+=star[a-1][b-1];
    if(i==d.length()) return;
    if(d[i]=='E'){
        dfs(a, b+1, i+1, d);
    }
    else if(d[i]=='W'){
        dfs(a, b-1, i+1, d);
    }
    else if(d[i]=='S'){
        dfs(a+1, b, i+1, d);
    }
    else if(d[i]=='N'){
        dfs(a-1, b, i+1, d);
    }
}

int lcs(int i, int j){
    if(i==s1.length()||j==s2.length()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = 0;
    if(s1[i]==s2[j]){
        ans = lcs(i+1, j+1)+1;
    }
    else{
        ans = max(lcs(i+1, j), lcs(i, j+1));
    }
    return dp[i][j] = ans;
}

int main() {
    freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h2, m2, c, a, b, mx, d, k, l, n, ans, h, w;
    int ara[10005], dec[10005], inc[10005];
    cin >> t;
    d = 1;
    while(t--){
        cin >> h >> w;
        star.clear();
        string d1, d2;
        for(i=0;i<h;i++){
            cin >> str;
            star.push_back(str);
        }
        cin >> n >> a >> b;
        cin >> d1;
        str.clear();
        dfs(a, b, 0, d1);
        s1 = str;
        cin >> m >> a >> b;
        cin >> d2;
        str.clear();
        dfs(a, b, 0, d2);
        s2 = str;
        //cout << s2 <<s1<< endl;
        memset(dp, -1, sizeof dp);
        ans = lcs(0, 0);
        cout <<"Case "<<d++<<": " <<s1.length()-ans << " " << s2.length()-ans << endl;
    }
    return 0;
}

















