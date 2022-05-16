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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
map <string, long long> dat;
map <string, long long> dat2;
bool flag;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    cin >> n;
    a = n%4;
    dat["v"] = 0;
    dat["<"] = 1;
    dat["^"] = 2;
    dat[">"] = 3;
    dat2["v"] = 0;
    dat2["<"] = 3;
    dat2["^"] = 2;
    dat2[">"] = 1;
    b = (dat[str]+a)%4;
    c = (dat2[str]+a)%4;
    if((dat[str1]==b)&&(dat2[str1]==c)){
        cout <<"undefined";
        return 0;
    }
    if(dat[str1]==b){
        cout << "cw";
        return 0;
    }
    if(dat2[str1]==c){
        cout << "ccw";
        return 0;
    }
    cout <<"undefined";
    return 0;
}













