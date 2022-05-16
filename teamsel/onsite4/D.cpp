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
long long ara[205], ara2[205], n;
vector < pair <long long, long long> > ab;
vector <string> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    d = 1;
    getline(cin, str);
    while(t--){
        getline(cin, str);
        getline(cin, str1);
        //cout << str << str1;
        memset(ara, 0, sizeof ara);
        memset(ara2, 0, sizeof ara2);
        for(i=0;i<str.length();i++){
            if(str[i]==' ') continue;
            if(str[i]>='a'&&str[i]<='z'){
                ara[str[i]-'a']++;
            }
            if(str[i]>='A'&&str[i]<='Z'){
                ara[str[i]-'A']++;
            }
        }
        for(i=0;i<str1.length();i++){
            if(str1[i]==' ') continue;
            if(str1[i]>='a'&&str[i]<='z'){
                ara2[str1[i]-'a']++;
            }
            if(str1[i]>='A'&&str1[i]<='Z'){
                ara2[str1[i]-'A']++;
            }
        }
        c = 1;
        for(i=0;i<26;i++){
            if(ara[i]!=ara2[i]){
                c = 0;
                break;
            }
        }
        if(c)cout << "Case "<<d++<<": Yes\n";
        else cout << "Case "<<d++<<": No\n";
    }
    return 0;
}







