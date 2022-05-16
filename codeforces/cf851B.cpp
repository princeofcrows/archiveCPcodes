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
double ara[1000005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <double, set <long long> > dat;
map <double, set <double> > dat3;
map <pair<double, double>, set <long long>> dat4;
map <double, long long> dat2;
vector < vector <long long> > g(100005);


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    long long ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    i = ax - bx;
    j = ay - by;
    c = __gcd(i, j);
    i/=c;
    j/=c;
    l = bx-cx;
    k = by-cy;
    c = __gcd(l, k);
    l/=c;
    k/=c;
    if(i==l&&k==j){
        cout << "NO";
        return 0;
    }
    l*=-1;
    k*=-1;
    if(i==l&&k==j){
        cout << "NO";
        return 0;
    }
    a = (ax-bx)*(ax-bx)+(ay-by)*(ay-by);
    b = (cx-bx)*(cx-bx)+(cy-by)*(cy-by);
    if(a==b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}





















