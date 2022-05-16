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
long long ara[505][505], n;
vector < pair <long long, long long> > ab;
vector <string> dat;

long long coinchange(long long i, long long j){
    if(j==0) return 1;
    if(ara[i][j]!=-1) return ara[i][j];
    long long ret = 0;
    for(long long l=i+1;l<=j;l++){
        ret+=coinchange(l, j-l);
    }
    return ara[i][j] = ret;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    memset(ara, -1, sizeof ara);
    cout << coinchange(0, n)-1;
    return 0;
}







