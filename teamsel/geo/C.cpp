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

double ff(double theta){
    return -1*sin(theta/2)/(theta*theta)+cos(theta/2)/(2*theta);
}

double f(double theta, double c){
    return sin(theta/2)/theta-c;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, a, b, mx, d, k;
    double x, y, c, wl, wh, wm, wc, l, n, theta, lp, r;
    cin >> t;
    d = 1;
    while(t--){
        cin >> l >> n >> c;
        lp = (1.0+n*c)*l;
        theta = acos(-1);
        i = 0;
        if(lp==l){
            x = 0;
            printf("Case %lld: %.8lf\n", d++, x);
            continue;
        }
        while(i!=10000){
            theta = theta-f(theta, l/(2*lp))/ff(theta);
            i++;
        }
        r = lp/(theta);
        //printf("%lf ", r);
        x = r-sqrt(r*r-l*l/4);
        printf("Case %lld: %.8lf\n", d++, x);
    }
    return 0;
}
















