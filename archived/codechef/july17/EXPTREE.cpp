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
vector <string> dat;
long long n, b;

long long bigmod(long long a, long long b, long long m){
    if(b==0) return 1%m;
    long long c = bigmod(a, b/2, m);
    c = ((c%m)*(c%m))%m;
    if(b%2) c = (c*(a)%m)%m;
    return c;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==1){
            cout << 0 <<" "<<0<<endl;
            continue;
        }
        if(n==2){
            cout << 1 <<" "<<1<<endl;
            continue;
        }
        n--;
        i = 1000000007;
        a = n+1;
        d = n;
        b = (4*n-2);
        c = __gcd(a, b);
        a/=c;
        b/=c;
        c = __gcd(d, b);
        d/=c;
        b/=c;
        a = ((a%i)*(d%i))%i;
        b%=i;
        b = bigmod(b, i-2, i);
        ans = (a*b)%i;
        cout << ans <<" ";
        i = 1000000009;
        a = n+1;
        d = n;
        b = (4*n-2);
        c = __gcd(a, b);
        a/=c;
        b/=c;
        c = __gcd(d, b);
        d/=c;
        b/=c;
        a = ((a%i)*(d%i))%i;
        b%=i;
        b = bigmod(b, i-2, i);
        ans = (a*b)%i;
        cout << ans <<endl;
    }
    return 0;
}













