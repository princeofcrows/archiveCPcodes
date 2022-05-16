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
long long ara[1000005], ara2[200005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    a = 2*t1;
    b = 2*t2;
    for(i=1;i<=s;i++){
        a+=v1;
        b+=v2;
    }
    //cout << a << " "<<b;
    if(a<b){
        cout << "First";
    }
    else if(a>b){
        cout << "Second";
    }
    else{
        cout <<"Friendship";
    }
    return 0;
}













