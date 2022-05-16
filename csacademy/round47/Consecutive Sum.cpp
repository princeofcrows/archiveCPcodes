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
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x;
vector <long long> y;
map <char, bool> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n;
    for(i=0;i<=n;i++){
        b = i;
        c = b*(b+1)/2;
        x.push_back(c);
    }
    for(i=0;i<x.size();i++){
        b = x[i];
        a = n + x[i];
        if(binary_search(x.begin(), x.end(), a)){
            j = lower_bound(x.begin(), x.end(), a)-x.begin();
            if(i+1==j) continue;
            cout << i+1 <<" "<<j;
            return 0;
        }
    }
    cout << -1;
    return 0;
}





















