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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <char, long long> dat;
map <char, long long> dat2;
priority_queue <pair<long long, char>, vector <pair<long long, char> >, greater<pair<long long, char> > > q;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    a = str.length();
    b = str1.length();
    for(i=0;i<b;i++){
        dat[str1[i]]++;
    }
    for(i=0;i<a;i++){
        if(dat[str[i]]){
            dat2[str[i]]++;
        }
    }
    char ch;
    for(i=0;i<26;i++){
        ch = (char)(i+'a');
        if(dat[ch]){
            b = dat2[ch]/dat[ch];
            q.push({b, ch});
        }
    }
    for(i=0;i<a;i++){
        if(str[i]=='?'){
            b = q.top().first;
            ch = q.top().second;
            q.pop();
            str[i] = ch;
            dat2[ch]++;
            b = dat2[ch]/dat[ch];
            q.push({b, ch});
        }
    }
    cout << str;
    return 0;
}













