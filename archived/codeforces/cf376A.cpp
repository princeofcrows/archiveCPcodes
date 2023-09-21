//price_of_crows
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
long long ara[500005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <string> y;
map <string, long long> dat;
long long dp[101][101];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> str;
    i = 0;
    a = b = 0;
    while(str[i]!='^'){
        i++;
    }
    c = i;
    i = 0;
    while(str[i]!='^'){
        if(str[i]!='=') a+=(str[i]-'0')*(c-i);
        i++;
    }
    i = str.length()-1;
    while(str[i]!='^'){
        i--;
    }
    c = i;
    i = str.length()-1;
    while(str[i]!='^'){
        if(str[i]!='=') b+=(str[i]-'0')*(i-c);
        i--;
    }
    if(a==b) cout << "balance";
    else if(a>b) cout << "left";
    else if(a<b) cout << "right";
    return 0;
}











