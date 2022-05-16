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
long long ara[55][5], b;
vector <long long> x;

long long dp(long long i, long long c){
    if(i==x.size()){
        return 0;
    }
    if(ara[i][c]!=-1) return ara[i][c];
    //cout << i <<" "<<a <<endl;
    long long ret, ret2, d;
    d = 1;
    ret = ret2 = 0;
    ret += (x[i] - dp(i+1, c^d));
    ret2 -= (x[i] - dp(i+1, c));
    return ara[i][c] = max(ret, ret2);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c;
    cin >> n;
    b = 0;
    memset(ara, -1, sizeof ara);
    for(i=0;i<n;i++){
        cin >> a;
        b+=a;
        x.push_back(a);
    }
    ans = dp(0, 0);
    a = (ans+b)/2;
    c = b-a;
    cout << c << " " <<a;
    return 0;
}





















