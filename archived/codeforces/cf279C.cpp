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
long long ara[100005], inc[100005], dek[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
stack <long long> stk;
vector <long long> g[100005];
vector <long long> rg[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, mn, c, a, b, mx, d, k, l, f;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    inc[n] = 1;
    for(i=n-1;i>=1;i--){
        if(ara[i]<=ara[i+1]){
            inc[i] = inc[i+1]+1;
        }
        else{
            inc[i] = 1;
        }
    }
    dek[1] = 1;
    for(i=2;i<=n;i++){
        if(ara[i]<=ara[i-1]){
            dek[i] = dek[i-1]+1;
        }
        else{
            dek[i] = 1;
        }
    }
    while(m--){
        cin >> a >> b;
        if(dek[b]+inc[a]>=(b-a+1)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}







