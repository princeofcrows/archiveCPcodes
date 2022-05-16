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
long long ara[200006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dig[400][800];

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long i=2;i<=100000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(long long j=i*2;j<=100000;j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    seive();
    while(cin >> n){
        if(!n) break;
        ans = n;
        if(n<0){
            ans*=-1;
            y.push_back(-1);
        }
        for(i=0;i<x.size();i++){
            if(x[i]>ans) break;

            while(ans%x[i]==0){
                ans/=x[i];
                y.push_back(x[i]);
            }
        }
        if(ans!=1) y.push_back(ans);
        cout << n <<" = ";
        for(i=0;i<y.size();i++){
            if(!i) cout << y[i];
            else cout <<" x "<<y[i];
        }
        cout << endl;
        y.clear();
    }
    return 0;
}
















