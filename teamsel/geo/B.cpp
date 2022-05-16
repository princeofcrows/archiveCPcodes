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
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, a, b, mx, d, k, l;
    double x, y, c, wl, wh, wm, wc;
    cin >> t;
    d = 1;
    while(t--){
        cin >> x >> y >> c;
        if(x<y) swap(x, y);
        wl = 0.0;
        wh = y;
        i = 0;
        while(i!=1000){
            wm = (wl+wh)/2;
            wc = (sqrt(x*x-wm*wm)*sqrt(y*y-wm*wm))/(sqrt(x*x-wm*wm)+sqrt(y*y-wm*wm));
            if(wc>=c){
                wl = wm;
            }
            else{
                wh = wm;
            }
            i++;
        }
        printf("Case %lld: %.8lf\n", d++, (wl+wh)/2.0);
    }
    return 0;
}
















