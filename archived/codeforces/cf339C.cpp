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
long long ara[1005][12][30];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

bool dp(long long i, long long l, long long d, long long m){
    if(i==m) return true;
    if(ara[i][l][d]) return false;
    ara[i][l][d] = 1;
    for(long long j=0;j<x.size();j++){
        if(x[j]>d&&x[j]!=l){
            if(dp(i+1, x[j], x[j]-d, m)){
                y.push_back(x[j]);
                return true;
            }
        }
    }
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str;
    cin >> m;
    for(i=0;i<str.length();i++){
        if(str[i]=='1') x.push_back(i+1);
    }
    if(x.size()==0){
        cout << "NO";
        return 0;
    }
    memset(ara, 0, sizeof ara);
    if(!dp(0,0,0, m)){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    reverse(y.begin(), y.end());
    for(j=0;j<y.size();j++){
        cout << y[j] << " ";
    }
    return 0;
}







