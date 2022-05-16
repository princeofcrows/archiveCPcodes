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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    while(cin>>t){
        if(t<0) break;
        l = 2*t;
        n = m = 0;
        for(i=1;i*i<=l;i++){
            if(l%i==0){
                a = i;
                b = l/i;
                if((a+b-1)%2) continue;
                if((b-a-1)%2) continue;
                if(a>n-m){
                    n = (b+a-1)/2;
                    m = (b-a-1)/2;
                }
            }
        }
        printf("%lld = %lld + ... + %lld\n",t, m+1, n);
    }
    return 0;
}







