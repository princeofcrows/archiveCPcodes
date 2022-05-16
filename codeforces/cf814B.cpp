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
long long ara[200005], ara2[200005], ara3[200005], ara4[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        cin >> ara2[i];
    }
    memset(ara4, 0, sizeof ara4);
    for(i=0;i<n;i++){
        if(ara[i]==ara2[i]){
            ara3[i] = ara[i];
            ara4[ara[i]] = 1;
        }
        else{
            x.push_back(i);
        }
    }
    if(x.size()==1){
        for(i=1;i<=n;i++){
            if(!ara4[i]){
                ara3[x[0]] = i;
                break;
            }
        }
    }
    else{
        for(i=1;i<=n;i++){
            if(!ara4[i]){
                y.push_back(i);
            }
        }
        ara3[x[0]] = y[0];
        ara3[x[1]] = y[1];
        a = b = 0;
        for(i=0;i<n;i++){
            if(ara[i]!=ara3[i]){
                a++;
            }
            if(ara2[i]!=ara3[i]){
                b++;
            }
        }
        if(a!=1||b!=1){
            ara3[x[0]] = y[1];
            ara3[x[1]] = y[0];
        }
    }
    for(i=0;i<n;i++){
        cout << ara3[i] <<" ";
    }
    return 0;
}













