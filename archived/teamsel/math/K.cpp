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
long long ara[1000005], ara4[1000005], ara5[1000005];
double ara2[1000005], ara3[1000005];
vector <long long> y;
vector <long long> z;
vector <long long> ya;
vector <long long> za;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g(1000005);

void seive(){
    memset(ara, 0, sizeof ara);
    memset(ara5, 0, sizeof ara5);
    for(int i=0;i<=1000000;i++){
        ara2[i] = 0.0;
    }
    for(int i=2;i<=1000000;i++){
        if(ara[i]==0){
            y.push_back(i);
            ara3[i] = y.size()*1.0;
            for(int j=i+i;j<=1000000;j+=i){
                ara[j] = 1;
                ara5[j]++;
                g[j].push_back(i);
            }
        }
    }
    long long b = 0;
    for(int i=2;i<=1000000;i++){
        if(ara[i]==0){
            b++;
            ara2[i] = b*1.0;
            ara3[i] = b*1.0;
            ara4[i] = b;
            continue;
        }
        ara4[i] = b;
        ara3[i] = (ara4[i]*1.0)/(1.0*ara5[i]);
    }
    for(int i=2;i<=1000000;i++){
        if(ara[i]==1){
            for(int j=0;j<g[i].size();j++){
                //cout << g[i][j] <<" ";
                ara2[i] += (ara2[i/g[i][j]]+ara3[i])/(1.0*ara5[i]);
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> t;
    seive();
    d = 1;
    while(t--){
        cin >> n;
        printf("Case %lld: %.10lf\n", d++, ara2[n]);
    }
    return 0;
}














