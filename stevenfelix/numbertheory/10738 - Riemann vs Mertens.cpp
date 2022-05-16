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
long long ara[1000006], ara2[1000006], ara3[1000006], ara4[1000006], ara5[1000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;

void seive(){
    memset(ara, 0, sizeof ara);
    memset(ara3, 0, sizeof ara3);
    long long i;
    for(i=1;i<=1000000;i++) ara2[i] = i;
    ara2[1] = 1;
    for(i=2;i<=1000000;i++){
        if(ara[i]==0){
            x.push_back(i);
            ara2[i] = 1;
            ara3[i] = 1;
            for(long long j=i*2;j<=1000000;j+=i){
                ara[j] = 1;
                ara2[j] /= i;
                ara3[j]++;
            }
        }
    }
    ara4[1] = 1;
    for(i=2;i<=1000000;i++){
        if(ara2[i]==1){
            if(ara3[i]%2) ara4[i] = -1;
            else ara4[i] = 1;
        }
        else ara4[i] = 0;
    }
    ara5[1] = 1;
    for(i=2;i<=1000000;i++){
        ara5[i] = ara5[i-1]+ara4[i];
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn, temp2;
    seive();
    while(cin >> n){
        if(!n) break;
        str = to_string(n);
        str1 = to_string(ara4[n]);
        str2 = to_string(ara5[n]);
        reverse(str.begin(), str.end());
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        while(str.length()!=8) str+=" ";
        while(str1.length()!=8) str1+=" ";
        while(str2.length()!=8) str2+=" ";
        reverse(str.begin(), str.end());
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        cout << str << str1 << str2 << endl;
    }
    return 0;
}
















