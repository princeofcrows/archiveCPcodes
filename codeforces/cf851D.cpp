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
long long ara[1000005], ara2[1000005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <double, set <long long> > dat;
map <double, set <double> > dat3;
map <pair<double, double>, set <long long>> dat4;
map <double, long long> dat2;
vector < vector <long long> > g(100005);

void seive(){
    memset(ara2, 0, sizeof ara2);
    for(int i=2;i<=1000000;i++){
        if(ara2[i]==0){
            x.push_back(i);
            for(int j=2*i;j<=1000000;j+=i){
                ara2[j] = 1;
            }
        }
    }
}

long long cost(long long p, long long a, long long b, long long n){
    long long cs = 0;
    long long mn, c;
    for(long long i=0;i<n;i++){
        c = (ara[i])%p;
        if(!c) continue;
        c = c*b;
        mn = min(a, c);
        cs+= mn;
    }
    return cs;
}

long long ternary_search(long long l, long long r, long long a, long long b, long long n){
    long long ans = 999999999999999999;
    for(int i=0;i<x.size();i++){
        ans = min(cost(x[i], a, b, n), ans);
    }
    return ans;
}

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n >> a >> b;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    seive();
    cout <<ternary_search(0, x.size()-1, a, b, n);
    return 0;
}





















