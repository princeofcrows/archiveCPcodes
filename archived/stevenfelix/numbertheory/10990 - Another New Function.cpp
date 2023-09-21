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
long long ara[2000006], ara2[2000006], ara3[2000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;

void seive(){
    memset(ara, 0, sizeof ara);
    memset(ara3, 0, sizeof ara3);
    long long i;
    for(i=0;i<=2000000;i++) ara2[i] = i;
    for(i=2;i<=2000000;i++){
        if(ara[i]==0){
            ara2[i] = ara2[i]*(i-1)/i;
            for(long long j=i*2;j<=2000000;j+=i){
                ara[j] = 1;
                ara2[j] = ara2[j]*(i-1)/i;
            }
        }
    }
    ara3[0] = ara3[1] = 0;
    for(i=2;i<=2000000;i++){
        ara3[i] = ara3[ara2[i]]+1;
    }
    for(i=2;i<=2000000;i++){
        ara3[i] += ara3[i-1];
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn, temp2;
    seive();
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << ara3[m]-ara3[n-1] << endl;
    }
    return 0;
}
















