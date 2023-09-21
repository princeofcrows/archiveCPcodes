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
vector < pair <long long, long long> > ab;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    temp = n;
    d = 0;
    while(temp!=0){
        d++;
        temp/=10;
    }
    for(i=0;i<d-1;i++){
        cin >> a;
        x.push_back(a);
    }
    reverse(x.begin(), x.end());
    temp = n;
    ans = 1;
    b = 0;
    for(i=0;i<d-1;i++){
        a = temp%10-b;
        temp/=10;
        if(x[i]==0){
            ans *= (a+1);
        }
        else{
            ans *= (10);
        }
        b = x[i];
    }
    ans *= (temp-b+1);
    cout << ans;
    return 0;
}













