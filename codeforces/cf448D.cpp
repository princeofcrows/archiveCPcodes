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

long long func(long long a, long long n, long long m){
    a--;
    long long res = 0;
    for(long long i=1;i<=n;i++){
        res+=min(m, a/i);
    }
    return res;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m;
    cin >> n >> m >> k;
    l = 1;
    h = n*m;
    while(l<=h){
        a = (l+h)/2;
        if(func(a, n, m)<k) l = a+1;
        else h = a-1;
    }
    cout << l-1;
    return 0;
}





















