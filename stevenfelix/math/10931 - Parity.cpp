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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
map <char, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    while(cin>>n){
        if(!n) break;
        cout << "The parity of ";
        a = 0;
        while(n!=0){
            str+=to_string(n%2);
            a+=n%2;
            n/=2;
        }
        reverse(str.begin(), str.end());
        cout << str;
        str.clear();
        cout <<" is "<<a<<" (mod 2).\n";
    }
    return 0;
}







