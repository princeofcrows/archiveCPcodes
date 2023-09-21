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
vector <long long> x;
long long ara[100000];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, d, ans, n, k;
    cin >> n >> k >> m;
    a = pow(2,n);
    b = pow(2, m);
    ara[1] = k;
    c = 1;
    if(k==a&&m!=n){
        cout << -1;
        return 0;
    }
    for(i=2;i<=b;i++){
        if(c>=k){
            cout << -1;
            return 0;
        }
        ara[i] = c;
        c++;
    }
    c = a;
    for(i=b+1;i<=a;i++){
        if(c==k) c--;
        ara[i] = c;
        c--;
    }
    for(i=1;i<=a;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}













