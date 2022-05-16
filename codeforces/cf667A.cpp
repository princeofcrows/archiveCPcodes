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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> d >> h >> v >> e;
    e = e*acos(-1)*d*d;
    e/=4;
    if(v<=e){
        printf("NO");
        return 0;
    }
    t = (acos(-1)*d*d*h)/(4*(v-e));
    printf("YES\n%.8lf", t);
    return 0;
}













