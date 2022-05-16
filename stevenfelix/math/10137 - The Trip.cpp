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
double ara[100001];
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
    long long n, temp, t, j, i, m, h, h2, m2, c,mx, k, l, d;
    while(cin >> n){
        if(!n) break;
        double dt, a, b, ans;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        ans = 0;
        for(i=0;i<n;i++){
            ans+=ara[i];
        }
        ans/=n;
        a = b = 0;
        for(i=0;i<n;i++){
            dt = (double)(long)((ara[i]-ans)*100)/100;
            if(dt>0){
                a+=dt;
            }
            else{
                b+=abs(dt);
            }
        }
        printf("$%.2lf\n",max(a,b));
    }
    return 0;
}







