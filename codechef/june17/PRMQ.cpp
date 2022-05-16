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

long long ara[200005], ara2[1000005], ara3[1000005], ara4[100005];
vector <long long> x;

void seive(){
    long long i, j;
    memset(ara2, true, sizeof ara2);
    for(i=2;i<=1000000;i++){
        if(ara2[i]){
            x.push_back(i);
            for(j=2*i;j<=1000000;j+=i){
                ara2[j] = 0;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, n;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    seive();
    cout << x.size();
    return 0;
}







