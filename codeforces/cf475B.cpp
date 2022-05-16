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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
long long dp[25][25], cnt, n, m;
bool flag;

void dfs(long long i, long long j){
    if(i>=n||i<0||j>=m||j<0) return;
    if(dp[i][j]) return;
    dp[i][j] = 1;
    cnt++;
    if(str[i]=='>') dfs(i, j+1);
    else if(str[i]=='<') dfs(i, j-1);
    if(str1[j]=='^') dfs(i+1, j);
    else if(str1[j]=='v') dfs(i-1, j);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    cin >> str >> str1;
    reverse(str.begin(), str.end());
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            memset(dp, 0, sizeof dp);
            cnt = 0;
            dfs(i, j);
            if(cnt!=(n*m)){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}













