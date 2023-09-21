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
long long ara[105][105], ara2[13][105][105];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, q;
    cin >> n >> q >> k;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n;i++){
        cin >> a >> b >> d;
        l = d;
        for(j=0;j<=10;j++){
            ara2[j][a][b] += l;
            l++;
            if(l>k){
                l = 0;
            }
        }
    }
    for(l=0;l<=10;l++){
        for(i=1;i<=100;i++){
            for(j=1;j<=100;j++){
                ara2[l][i][j] = ara2[l][i][j] + ara2[l][i][j-1];
            }
        }
    }
    for(l=0;l<=10;l++){
        for(i=1;i<=100;i++){
            for(j=1;j<=100;j++){
                ara2[l][i][j] = ara2[l][i][j] + ara2[l][i-1][j];
            }
        }
    }
    while(q--){
        cin >> t >> a >> b >> c >> d;
        a--;
        b--;
        t=t%(k+1);
        ans = ara2[t][c][d]-ara2[t][c][b]-ara2[t][a][d]+ara2[t][a][b];
        cout << ans << endl;
    }
    return 0;
}













