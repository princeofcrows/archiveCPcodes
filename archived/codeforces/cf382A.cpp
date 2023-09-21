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

string star[200000], str, str1, str2, str3;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dp[6][6];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    for(i=0;i<str.length();i++){
        if(str[i]=='|') break;
        str2+=str[i];
    }
    for(i=i+1;i<str.length();i++){
        str3+=str[i];
    }
    for(i=0;i<str1.length();i++){
        if(str2.length()<str3.length()){
            str2+=str1[i];
        }
        else{
            str3+=str1[i];
        }
    }
    if(str2.length()!=str3.length()) cout << "Impossible";
    else cout << str2<<"|"<<str3;
    return 0;
}













