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
double ara[100005], y[100005], x[100005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, j, i, m, c, a, b, mx, k, l;
    double r, d, t, rl;
    cin >> r >> d >> n;
    rl = r-d;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> x[i] >> y[i] >> ara[i];
        t = x[i]*x[i] + y[i]*y[i];
        t = sqrt(t);
        //if(t<=rl) continue;
        if(t-ara[i]>=rl){
            if(t+ara[i]<=r) ans++;
        }
    }
   	cout << ans;
    return 0;
}

















