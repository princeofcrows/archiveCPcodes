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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
long long dp[1005][1005], dp2[1005][1005];
queue <pair <long long, long long> >q;
stack <long long> stk;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m >> k;
    memset(dp, 0, sizeof dp);
    memset(dp2, 0, sizeof dp2);
    for(i=0;i<k;i++){
        cin >> a >> b;
        dp[a][b] = 1;
    }
    q.push({1, 1});
    while(!q.empty()){
        pair <long long, long long> top;
        top = q.front();
        q.pop();
        a = top.first;
        b = top.second;
        if(dp[a][b]==0){
            if(a+1<n&&dp[a+1][b]==1){
                dp2[a+1][b] = dp2[a][b];
                q.push({a+1, b});
            }
            if(a-1>=0&&dp[a-1][b]==1){
                dp2[a-1][b] = dp2[a][b];
                q.push({a-1, b});
            }
            if(b+1<m&&dp[a][b+1]==1){
                dp2[a][b+1] = dp2[a][b];
                q.push({a, b+1});
            }
            if(b-1>=0&&dp[a][b-1]==1){
                dp2[a][b-1] = dp2[a][b];
                q.push({a, b-1});
            }
        }
        else{
            if(a+1<n&&dp[a+1][b]==1){
                dp2[a+1][b] = dp2[a][b];
                q.push({a+1, b});
            }
            else if(a+1<n&&dp[a+1][b]==0){
                dp2[a+1][b] = dp2[a][b]+1;
                q.push({a+1, b});
            }
            if(a-1>=0&&dp[a-1][b]==1){
                dp2[a-1][b] = dp2[a][b];
                q.push({a-1, b});
            }
            if(a-1>=0&&dp[a-1][b]==1){
                dp2[a-1][b] = dp2[a][b];
                q.push({a-1, b});
            }
            if(b+1<m&&dp[a][b+1]==1){
                dp2[a][b+1] = dp2[a][b];
                q.push({a, b+1});
            }
            if(b-1>=0&&dp[a][b-1]==1){
                dp2[a][b-1] = dp2[a][b];
                q.push({a, b-1});
            }
        }
    }
    return 0;
}













