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
vector < pair <long long, long long> > xy;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
long long dp[105][105], tdp[105][105], tdp2[105][105];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    a = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> dp[i][j];
            tdp2[i][j] = dp[i][j];
        }
    }
    for(i=0;i<n;i++){
        mx = 99999999999;
        for(j=0;j<m;j++){
            mx = min(mx, dp[i][j]);
        }
        ara[i] = mx;
        if(mx!=0){
            x.push_back(i);
            a+=mx;
        }
        for(j=0;j<m;j++){
            tdp2[i][j] = mx;
        }
    }
    for(i=0;i<m;i++){
        mx = 99999999999;
        for(j=0;j<n;j++){
            mx = min(mx, dp[j][i]-tdp2[j][i]);
        }
        ara2[i] = mx;
        if(mx!=0){
            y.push_back(i);
            a+=mx;
        }
    }
    memset(tdp, 0, sizeof tdp);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            tdp[i][j]+=ara[i];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            tdp[j][i]+=ara2[i];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(tdp[i][j]!=dp[i][j]){
                cout << -1;
                return 0;
            }
        }
    }
    cout << a << endl;
    for(i=0;i<x.size();i++){
        for(j=0;j<ara[x[i]];j++){
            cout << "row " << x[i]+1<<endl;
        }
    }
    for(i=0;i<y.size();i++){
        for(j=0;j<ara2[y[i]];j++){
            cout << "col " << y[i]+1<<endl;
        }
    }
    return 0;
}

























