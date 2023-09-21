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

long long ara[1000005], ara2[1000005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> str >> a >> b;
    l = 1;
    c = 0;
    for(i=str.length()-1;i>=0;i--){
        c = (c+(str[i]-'0')*l);
        l *= 10;
        l %= b;
        c %= b;
        ara2[i] = c;
        //cout << ara2[i] <<" ";
    }
    d = 0;
    for(i=0;i<str.length();i++){
        d = (d*10+(str[i]-'0'));
        d %= a;
        ara[i] = d;
    }
    for(i=0;i<str.length()-1;i++){
        if(ara[i]==0&&ara2[i+1]==0){
            if(str[i+1]=='0') continue;
            cout << "YES\n";
            for(j=0;j<=i;j++) cout << str[j] ;
            cout << endl;
            for(j=i+1;j<str.length();j++) cout << str[j] ;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}





















