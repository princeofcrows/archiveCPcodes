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
long long ara[1005][1005], ara2[200005], ara3[200005], po;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f, r;
    cin >> n >> k >> d;
    for(i=1;i<=n;i++){
        t = i-1;
        c = 0;
        for(j=1;j<=d;j++){
            ara[j][i] = t%k+1;
            t/=k;
            if(ara[j][i]!=1) c = 1;
        }
        if(c==0&&i!=1){
            cout << -1;
            return 0;
        }
    }
    for(i=1;i<=d;i++){
        for(j=1;j<=n;j++){
            cout << ara[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}







