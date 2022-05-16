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
long long ara[10000006], ara2[10000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn, temp2, p;
    cin >> t;
    while(t--){
        cin >> str;
        reverse(str.begin(), str.end());
        cin >> n;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        c = 0;
        for(i=0;i<n;i++){
            b = 1;
            a = 0;
            for(j=0;j<str.length();j++){
                a += (str[j]-'0')*b;
                b*=10;
                a%=ara[i];
                b%=ara[i];
            }
            if(a!=0){
                c = 1;
                break;
            }
        }
        reverse(str.begin(), str.end());
        cout << str <<" - ";
        if(c)cout << "Simple.\n";
        else cout << "Wonderful.\n";
    }
    return 0;
}
















