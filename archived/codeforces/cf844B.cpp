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
long long ara[65], dp[60][60];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> dp[i][j];
        }
    }
    ans = 0;
    a = 1;
    for(i=0;i<=55;i++){
        ara[i] = a;
        a*=2;
    }
    for(i=0;i<n;i++){
        a = b = 0;
        for(j=0;j<m;j++){
            if(dp[i][j]) a++;
            else b++;
        }
        ans+=ara[b]-1;
        ans+=ara[a]-1;
    }
    for(i=0;i<m;i++){
        a = b = 0;
        for(j=0;j<n;j++){
            if(dp[j][i]) a++;
            else b++;
        }
        ans+=ara[b]-1;
        ans+=ara[a]-1;
    }
    cout << ans-m*n;
    return 0;
}














