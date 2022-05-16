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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    while(cin >> n >> k){
        if(n==-1&&k==-1) break;
        for(i=0;i<=n;i++){
            cin >> ara[i];
        }
        a = n-k;
        for(i=a;i>=0;i--){
            ara[i]-=ara[i+k];
            ara[i+k] = 0;
        }
        for(i=n;i>=0;i--){
            if(ara[i]!=0) break;
        }
        if(i==-1) cout << 0;
        else{
            for(j=0;j<=i;j++){
                cout << ara[j];
                if(j!=i) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}







