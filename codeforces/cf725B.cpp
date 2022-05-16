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
map <char, int> dat;
bool flag;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    dat['f'] = 1;
    dat['e'] = 2;
    dat['d'] = 3;
    dat['a'] = 4;
    dat['b'] = 5;
    dat['c'] = 6;
    cin >> str; a = 0;
    for(i=0;i<str.length()-1;i++){
        a = a*10+(str[i]-'0');
    }
    if(a%2){
        a = (a-1)/2;
        a -= (a%2);
        b = a*2;
    }
    else{
        a = a/2;
        b = !(a%2);
        a -= !(a%2);
        b = 1+(a-1)*2;
    }
    cout << a*6+dat[str[str.length()-1]]+(b);
    return 0;
}













