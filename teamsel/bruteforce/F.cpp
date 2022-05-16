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
vector < vector <long long> > x(1005);
vector < vector <long long> > y(1005);
map <string, long long> dat;
long long dp[1005][1005], d, bgt;
vector <double> org;
vector <double> nw;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, mx, k, l;
    double ln = 10000;
    double n, m;
    while(cin >> n >> m){
        double dis, po, mnd, a, b;
        dis = ln*(1.0*(n+m)*n);
        po = 0;
        while(po<=dis){
            org.push_back(po);
            po+=ln*(1.0*(n+m));
        }
        po = 0;
        while(po<=dis){
            nw.push_back(po);
            po+=ln*(n);
        }
        mnd = 0;
        for(i=0;i<org.size();i++){
            b = 999999999999999999.0;
            for(j=0;j<nw.size();j++){
                a = abs(org[i]-nw[j]);
                b = min(b, a);
            }
            mnd+=b;
        }
        printf("%.6lf\n", mnd/(1.0*(n+m)*n));
        nw.clear();
        org.clear();
    }
    return 0;
}





















