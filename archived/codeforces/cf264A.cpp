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

string star[200000], str, str1;
long long ara[2000005];
vector < pair <double, long long> > ab;
vector <long long> x;
map <string, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, i, j, l;
    double ans, temp, t, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> str;
    a = 0; b = 1;
    n = str.length();
    j = n-1;
    l = 0;
    for(i=0;i<n;i++){
        if(str[i]=='l') ara[j--] = i+1;
        else ara[l++] = i+1;
    }
    for(i=0;i<n;i++){
        cout << ara[i] << endl;
    }
    return 0;
}







