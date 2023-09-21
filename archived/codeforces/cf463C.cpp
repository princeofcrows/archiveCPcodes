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
vector <pair <long long, long long> > ab;
vector <long long> x;
string str, str1;
long long ara[2005][2005];
long long u[2005][2005], v[2005][2005], l[2005][2005], r[2005][2005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, c, h, m, b;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> ara[i][j];
        }
    }
    memset(u, 0, sizeof u);
    memset(v, 0, sizeof v);
    memset(r, 0, sizeof r);
    memset(l, 0, sizeof l);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            v[i][j] = v[i-1][j-1] + ara[i][j];
            u[i][j] = u[i-1][j+1] + ara[i][j];
        }
    }
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            l[i][j] = l[i+1][j+1] + ara[i][j];
            r[i][j] = r[i+1][j-1] + ara[i][j];
        }
    }
    mx = ans = 0;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2){
                if(u[i][j]+v[i][j]+l[i][j]+r[i][j]-3*ara[i][j]>=mx){
                    mx = u[i][j]+v[i][j]+l[i][j]+r[i][j]-3*ara[i][j];
                    a = i;
                    b = j;
                }
            }
            else{
                if(u[i][j]+v[i][j]+l[i][j]+r[i][j]-3*ara[i][j]>=ans){
                    ans = u[i][j]+v[i][j]+l[i][j]+r[i][j]-3*ara[i][j];
                    c = i;
                    d = j;
                }
            }
        }
    }
    cout << mx+ans << endl;
    cout << a << " " << b <<" " << c << " " << d;
    return 0;
}





















