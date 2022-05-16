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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
bool alp[50];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    cin >> b;
    for(i=0;i<b;i++){
        cin >> a;
        ara[a] = 1;
    }
    cin >> b;
    for(i=0;i<b;i++){
        cin >> a;
        ara2[a] = 1;
    }
    for(i=0;i<=1000000;i++){
        if(ara[i%n]||ara2[i%m]){
            ara[i%n] = 1;
            ara2[i%m] = 1;
        }
    }
    for(i=0;i<n;i++){
        if(!ara[i]){
            cout << "No";
            return 0;
        }
    }
    for(i=0;i<m;i++){
        if(!ara2[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}







