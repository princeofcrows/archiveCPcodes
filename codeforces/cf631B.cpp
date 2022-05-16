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

string star[200000], str, str1;
pair <long long, long long> ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
bool alp[50];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m >> k;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    for(i=1;i<=k;i++){
        cin >> a >> b >> c;
        if(a==1){
            ara[b].first = c;
            ara[b].second = i;
        }
        else if(a==2){
            ara2[b].first = c;
            ara2[b].second = i;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(ara[i].second>ara2[j].second) cout << ara[i].first  <<" ";
            else if(ara[i].second<=ara2[j].second) cout << ara2[j].first  <<" ";
        }
        cout << endl;
    }
    return 0;
}







