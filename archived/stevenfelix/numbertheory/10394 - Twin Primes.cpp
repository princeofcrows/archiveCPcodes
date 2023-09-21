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
long long ara[20000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

void seive(){
    memset(ara, 0, sizeof ara);
    long long i, j;
    for(i=2;i<=20000000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(j=2*i;j<=20000000;j+=i){
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
    for(i=0;i<x.size()-1;i++){
        if(x[i+1]-x[i]==2) ab.push_back({x[i], x[i+1]});
    }
    while(cin >> n){
        printf("(%lld, %lld)\n", ab[n-1].first, ab[n-1].second);
    }
    return 0;
}
















