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
long long ara[1000005], ara2[1000005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    if(str.length()>str1.length()){
        reverse(str1.begin(),str1.end());
        while(str.length()!=str1.length()) str1+="0";
        reverse(str1.begin(),str1.end());
    }
    if(str.length()<str1.length()){
        reverse(str.begin(),str.end());
        while(str.length()!=str1.length()) str+="0";
        reverse(str.begin(),str.end());
    }
    if(str>str1) cout <<">";
    if(str<str1) cout <<"<";
    if(str==str1) cout <<"=";
    return 0;
}













