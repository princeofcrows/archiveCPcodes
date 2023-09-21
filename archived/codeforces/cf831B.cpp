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
map <char, char> dat;
char ch;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    for(i=0;i<26;i++){
        dat[str[i]] = str1[i];
        dat[toupper(str[i])] = toupper(str1[i]);
    }
    for(i=0;i<=9;i++){
        ch = (i+'0');
        dat[ch] = ch;
    }
    cin >> str2;
    for(i=0;i<str2.length();i++){
        cout << dat[str2[i]];
    }
    return 0;
}













