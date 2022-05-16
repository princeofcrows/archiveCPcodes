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

int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h2, m2, c, a, b, mx, d, k, l;
    scanf("%d", &t);
    d = 1;
    while(t--){
        double r1, r2, h, p, r3, h1, h2, h3, pi, ans;
        cin >> r1 >> r2 >> h >> p;
        h2 = h*r2/(r1-r2);
        h3 = h2+p;
        h1 = h2+h;
        r3 = r1*h3/(h2+h);
        pi = acos(-1);
        ans = pi/3*(r3*r3*h3-r2*r2*h2);
        printf("Case %d: %.8lf\n", d++, ans);
    }
    return 0;
}







