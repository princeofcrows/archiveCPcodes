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
map <long long, long long> dat;
priority_queue <pair<long long, long long> > q;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    cin >> ara[0] >> ara2[0];
    double tme = 0;
    for(i=1;i<n;i++){
        cin >> ara[i] >> ara2[i];
        double xx = ara[i];
        double yy = ara2[i];
        double xx1 = ara[i-1];
        double yy1 = ara2[i-1];
        tme += sqrt((xx-xx1)*(xx-xx1)+(yy-yy1)*(yy-yy1));
    }
    printf("%.8lf", (tme*k)/50);
    return 0;
}













