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
vector <double> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, h2, m2, c, b, mx, d, k, f;
    cin >> t;
    double h, l, m, a;
    while(t--){
        x.clear();
        cin >> n >>f;
        for(i=0;i<n;i++){
            cin >> a;
            x.push_back(a);
        }
        sort(x.rbegin(), x.rend());
        h = x[0]*x[0];
        l = 0;
        d = 1;
        while(d!=1000){
            m = (l+h)/2;
            j = 0;
            for(i=0;i<n;i++){
                j += (long long) (x[i]*x[i]/(m));
            }
            if(j>f){
                l = m;
            }
            else{
                h = m;
            }
            d++;
        }
        double vol = h;
        vol = vol*acos(-1);
        printf("%.05lf\n", vol);
    }
    return 0;
}







